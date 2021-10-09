s32 func_800C5A64(CollisionContext *, Vec3f *, f32); /* extern */
s32 func_80B1E29C(EnPp *arg0);                      /* static */
void func_80B1E3D4(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1E5A8(EnPp *arg0, s32 arg1);           /* static */
void func_80B1E680(Actor *arg0);                    /* static */
s32 func_80B1E778(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1E958(EnPp *arg0);                     /* static */
void func_80B1E970(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1EBD8(EnPp *arg0, EnPp *);             /* static */
void func_80B1EC24(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1EFFC(EnPp *arg0);                     /* static */
void func_80B1F048(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1F0A4(EnPp *arg0);                     /* static */
void func_80B1F188(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1F244(EnPp *arg0);                     /* static */
void func_80B1F29C(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1F4A0(EnPp *arg0, s32);                /* static */
void func_80B1F560(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1F664(EnPp *arg0);                     /* static */
void func_80B1F6B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B1F770(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B1F940(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1FAD0(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1FC7C(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B1FF20(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B20030(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B202B8(EnPp *arg0);                     /* static */
void func_80B203BC(EnPp *arg0, GlobalContext *arg1); /* static */
void func_80B20668(EnPp *arg0, GlobalContext *arg1); /* static */
s32 func_80B20E6C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
void func_80B20F70(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
extern AnimationHeader D_0600A844;
extern FlexSkeletonHeader D_06012768;
static s32 D_80B21620 = 0;
static DamageTable D_80B21624 = {
    {
        0x10,
        0xF1,
        0,
        0xC1,
        0xF1,
        0xF1,
        0,
        0xD1,
        0xC1,
        0xF1,
        0xE0,
        0x21,
        0x31,
        0x42,
        0xF1,
        0x10,
        0xF1,
        0xC2,
        0x10,
        0x50,
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
        0xC1,
    },
};
static ColliderJntSphElementInit D_80B21664 = {
    {2, {0xF7CFFFFF, 4, 0x10}, {0xF7CFFFFF, 0, 0}, 1, 5, 1},
    {1, {{0, 0, 0}, 0}, 1},
};
static ColliderJntSphInit D_80B21688 = {{0xC, 0x11, 9, 0x39, 0x10, 0}, 1, &D_80B21664};
static ColliderJntSphElementInit D_80B21698 = {{0, {0xF7CFFFFF, 4, 4}, {0xF7CFFFFF, 0, 0}, 1, 5, 1}, {1, {{0, 0, 0}, 0}, 1}};
static ColliderJntSphInit D_80B216BC = {{0xC, 0x11, 9, 0x39, 0x10, 0}, 1, &D_80B21698};
static ColliderQuadInit D_80B216CC = {
    {0xA, 0x11, 0, 0, 0, 3},
    {0, {0xF7CFFFFF, 4, 8}, {0, 0, 0}, 0x81, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static Color_RGBA8 D_80B2171C = {0x3C, 0x32, 0x14, 0xFF};
static Color_RGBA8 D_80B21720 = {0x28, 0x1E, 0x1E, 0xFF};
static ? D_80B21724;                                /* unable to generate initializer */
static ? D_80B2174C;                                /* unable to generate initializer */
static s16 D_80B21758 = {0, 0x1000, 0xF000};
static ? D_80B2175E;                                /* unable to generate initializer */
static s32 D_80B21760 = {
    0x3F800000,
    0,
    0x3F000000,
    0x3F800000,
    0,
    0xBF000000,
    0xBF800000,
    0,
    0x3F000000,
    0xBF800000,
    0,
    0xBF000000,
    0x3F000000,
    0,
    0x3F800000,
    0xBF000000,
    0,
    0x3F800000,
    0x3F000000,
    0,
    0xBF800000,
    0xBF000000,
    0,
    0xBF800000,
    0,
    0,
    0,
};
static Vec3f D_80B217CC;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B217D0 = 0.0f;
static Vec3f D_80B217D8;                            /* type too large by 8; unable to generate initializer */
static f32 D_80B217DC = 0.0f;
static f32 D_80B217E0 = 0.0f;

typedef struct EnPp {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x96];                 /* maybe part of unk188[26]? */
    /* 0x0224 */ Vec3s unk224;                      /* inferred */
    /* 0x022A */ char pad22A[0x96];                 /* maybe part of unk224[26]? */
    /* 0x02C0 */ void (*actionFunc)(EnPp *, GlobalContext *);
    /* 0x02C4 */ s16 unk2C4;                        /* inferred */
    /* 0x02C6 */ s16 unk2C6;                        /* inferred */
    /* 0x02C8 */ s16 unk2C8;                        /* inferred */
    /* 0x02CA */ s16 unk2CA;                        /* inferred */
    /* 0x02CC */ s16 unk2CC;                        /* inferred */
    /* 0x02CE */ s16 unk2CE;                        /* inferred */
    /* 0x02D0 */ s16 unk2D0;                        /* inferred */
    /* 0x02D2 */ s16 unk2D2;                        /* inferred */
    /* 0x02D4 */ s16 unk2D4;                        /* inferred */
    /* 0x02D6 */ char pad2D6[0x2];                  /* maybe part of unk2D4[2]? */
    /* 0x02D8 */ f32 unk2D8;                        /* inferred */
    /* 0x02DC */ f32 unk2DC;                        /* inferred */
    /* 0x02E0 */ f32 unk2E0;                        /* inferred */
    /* 0x02E4 */ f32 unk2E4;                        /* inferred */
    /* 0x02E8 */ f32 unk2E8;                        /* inferred */
    /* 0x02EC */ char pad2EC[0x18];                 /* maybe part of unk2E8[7]? */
    /* 0x0304 */ f32 unk304;                        /* inferred */
    /* 0x0308 */ f32 unk308;                        /* inferred */
    /* 0x030C */ f32 unk30C;                        /* inferred */
    /* 0x0310 */ f32 unk310;                        /* inferred */
    /* 0x0314 */ char pad314[0x4];                  /* maybe part of unk310[2]? */
    /* 0x0318 */ f32 unk318;                        /* inferred */
    /* 0x031C */ char pad31C[0xC];                  /* maybe part of unk318[4]? */
    /* 0x0328 */ Vec3f unk328;                      /* inferred */
    /* 0x0334 */ f32 unk334;                        /* inferred */
    /* 0x0338 */ f32 unk338;                        /* inferred */
    /* 0x033C */ f32 unk33C;                        /* inferred */
    /* 0x0340 */ char pad340[0x8];                  /* maybe part of unk33C[3]? */
    /* 0x0348 */ f32 unk348;                        /* inferred */
    /* 0x034C */ f32 unk34C;                        /* inferred */
    /* 0x0350 */ f32 unk350;                        /* inferred */
    /* 0x0354 */ f32 unk354;                        /* inferred */
    /* 0x0358 */ f32 unk358;                        /* inferred */
    /* 0x035C */ char pad35C[0x4];                  /* maybe part of unk358[2]? */
    /* 0x0360 */ f32 unk360;                        /* inferred */
    /* 0x0364 */ Vec3f unk364;                      /* inferred */
    /* 0x0370 */ s32 unk370;                        /* inferred */
    /* 0x0374 */ Vec3f unk374;                      /* inferred */
    /* 0x0380 */ char pad380[0x6C];                 /* maybe part of unk374[10]? */
    /* 0x03EC */ s16 unk3EC;                        /* inferred */
    /* 0x03EE */ char pad3EE[0x2];                  /* maybe part of unk3EC[2]? */
    /* 0x03F0 */ s16 unk3F0;                        /* inferred */
    /* 0x03F2 */ s16 unk3F2;                        /* inferred */
    /* 0x03F4 */ s16 unk3F4;                        /* inferred */
    /* 0x03F6 */ char pad3F6[0x2];                  /* maybe part of unk3F4[2]? */
    /* 0x03F8 */ f32 unk3F8;                        /* inferred */
    /* 0x03FC */ f32 unk3FC;                        /* inferred */
    /* 0x0400 */ f32 unk400;                        /* inferred */
    /* 0x0404 */ s32 unk404;                        /* inferred */
    /* 0x0408 */ Vec3f unk408;                      /* inferred */
    /* 0x0414 */ char pad414[0x7C];
    /* 0x0490 */ f32 unk490;                        /* inferred */
    /* 0x0494 */ ColliderJntSph unk494;             /* inferred */
    /* 0x04B4 */ ColliderJntSphElement unk4B4;      /* inferred */
    /* 0x04F4 */ ColliderJntSph unk4F4;             /* inferred */
    /* 0x0514 */ ColliderJntSphElement unk514;      /* inferred */
    /* 0x0554 */ ColliderQuad unk554;               /* inferred */
    /* 0x05D4 */ CollisionPoly *unk5D4;             /* inferred */
    /* 0x05D8 */ s32 unk5D8;                        /* inferred */
    /* 0x05DC */ s32 unk5DC;                        /* inferred */
    /* 0x05E0 */ f32 unk5E0;                        /* inferred */
    /* 0x05E4 */ char pad5E4[0x4];                  /* maybe part of unk5E0[2]? */
    /* 0x05E8 */ f32 unk5E8;                        /* inferred */
} EnPp;                                             /* size 0x5EC */

void EnPp_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnPp *this = (EnPp *) thisx;
    s32 sp1E0;
    s32 sp1DC;
    s32 sp1D8;
    s8 sp1D7;
    s8 sp1D6;
    s8 sp1D5;
    s8 sp1D4;
    s8 sp1D3;
    s8 sp1D2;
    s8 sp1D1;
    s8 sp1D0;
    s8 sp1CF;
    s8 sp1CE;
    s8 sp1CD;
    s8 sp1CC;
    s8 sp1CB;
    s8 sp1CA;
    s8 sp1C9;
    s8 sp1C8;
    void sp44;
    ColliderQuad *sp34;
    ColliderQuad *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 phi_v0;

    this->actor.targetMode = 4;
    this->actor.colChkInfo.mass = 0x3C;
    this->actor.colChkInfo.health = 3;
    this->actor.colChkInfo.damageTable = &D_80B21624;
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06012768, &D_0600A844, &this->unk188, &this->unk224, 0x1A);
    temp_v0 = this->actor.world.rot.z;
    if (temp_v0 == 0) {
        this->unk400 = 200.0f;
    } else {
        this->unk400 = (f32) temp_v0 * 40.0f;
    }
    temp_v0_2 = this->actor.params;
    this->unk2C4 = ((s32) temp_v0_2 >> 8) & 1;
    if (this->unk2C4 != 0) {
        this->actor.params = temp_v0_2 & 1;
        this->actor.colChkInfo.mass = 0xFF;
    }
    phi_v0 = (s32) this->actor.params;
    if ((s32) this->actor.params < 0) {
        this->actor.params = 0;
        phi_v0 = (s32) this->actor.params;
    }
    if (phi_v0 >= 7) {
        this->unk2C6 = (s16) D_80B21620;
        D_80B21620 += 1;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        Actor_SetScale(&this->actor, 0.03f);
        func_80B202B8(this);
        return;
    }
    Collider_InitAndSetJntSph(globalCtx, &this->unk494, &this->actor, &D_80B21688, &this->unk4B4);
    Collider_InitAndSetJntSph(globalCtx, &this->unk4F4, &this->actor, &D_80B216BC, &this->unk514);
    temp_a1 = &this->unk554;
    this->unk4F4.elements->dim.scale = 1.0f;
    if ((s32) this->actor.params > 0) {
        this->actor.hintId = 0x25;
        this->unk4B4.info.toucherFlags &= 0xFFFE;
        this->unk4B4.info.bumperFlags &= 0xFFFE;
        this->unk4B4.info.ocElemFlags &= 0xFFFE;
        this->unk494.base.colType = 2;
        this->unk494.elements->dim.modelSphere.radius = 0x2A;
        this->unk494.elements->dim.scale = 1.0f;
        this->unk494.elements->dim.modelSphere.center.x = 0x190;
        this->unk494.elements->dim.modelSphere.center.y = -0x190;
        this->unk4F4.elements->dim.modelSphere.radius = 0x14;
        this->unk4F4.elements->dim.scale = 1.0f;
        this->unk4F4.elements->dim.modelSphere.center.x = 0x190;
        this->unk4F4.elements->dim.modelSphere.center.y = -0x190;
    } else {
        this->actor.hintId = 0x26;
        this->unk494.elements->dim.modelSphere.radius = 0xA;
        this->unk494.elements->dim.scale = 1.0f;
        this->unk494.elements->dim.modelSphere.center.x = 0x3E8;
        this->unk494.elements->dim.modelSphere.center.y = -0x1F4;
        this->unk4F4.elements->dim.modelSphere.radius = 0x19;
        this->unk4F4.elements->dim.scale = 1.0f;
        this->unk4F4.elements->dim.modelSphere.center.x = 0x190;
        this->unk4F4.elements->dim.modelSphere.center.y = -0x190;
        this->unk514.info.bumperFlags |= 4;
        this->unk494.elements->info.toucher.damage = 0x10;
    }
    sp34 = temp_a1;
    Collider_InitQuad(globalCtx, temp_a1);
    Collider_SetQuad(globalCtx, temp_a1, &this->actor, &D_80B216CC);
    sp1D5 = 0xFF;
    sp1D4 = 0xFF;
    sp1D2 = 0xFF;
    sp1D1 = 0xFF;
    sp1D0 = 0xFF;
    sp1CE = 0xFF;
    sp1CD = 0xFF;
    sp1CC = 0xFF;
    sp1CB = 0xFF;
    sp1CA = 0xFF;
    sp1C9 = 0xFF;
    sp1C8 = 0xFF;
    sp1CF = 0x40;
    sp1D3 = 0;
    sp1D8 = 8;
    sp1DC = 0;
    sp1E0 = 2;
    sp1D6 = 0xFF;
    sp1D7 = 0;
    Effect_Add(globalCtx, &this->unk5D8, 1, 0U, (u8) 0, &sp44);
    Actor_SetScale(&this->actor, 0.03f);
    temp_v0_3 = this->actor.params;
    this->unk5D4 = NULL;
    this->actor.gravity = -3.0f;
    if ((temp_v0_3 == 0) || (temp_v0_3 == 1)) {
        func_80B1E958(this);
        return;
    }
    func_80B1F4A0(this);
}

void EnPp_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnPp *this = (EnPp *) thisx;
    if ((s32) this->actor.params < 7) {
        Collider_DestroyJntSph(globalCtx, &this->unk494);
        Collider_DestroyJntSph(globalCtx, &this->unk4F4);
        Collider_DestroyQuad(globalCtx, &this->unk554);
    }
    Effect_Destroy(globalCtx, this->unk5D8);
}

s32 func_80B1E29C(EnPp *arg0) {
    f32 sp3C;
    s16 sp3A;
    Vec3f sp2C;
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a1;
    Vec3f *temp_a2;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 phi_v0;

    temp_f2 = arg0->actor.home.pos.x - arg0->actor.world.pos.x;
    temp_a2 = arg0 + 8;
    temp_a1 = arg0 + 0x24;
    temp_f12 = arg0->actor.home.pos.z - arg0->actor.world.pos.z;
    sp20 = temp_a1;
    sp24 = temp_a2;
    sp3C = sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
    sp3A = Math_Vec3f_Yaw(temp_a2, temp_a1);
    Math_Vec3f_Copy(&sp2C, sp24);
    temp_f10 = sp2C.x + (Math_SinS(sp3A) * sp3C);
    sp2C.x = temp_f10;
    sp2C.z += Math_CosS(sp3A) * sp3C;
    Math_ApproachF(&sp20->x, sp2C.x, 0.3f, 2.0f);
    Math_ApproachF(arg0 + 0x2C, sp2C.z, 0.3f, 2.0f);
    temp_f2_2 = arg0->actor.world.pos.x - temp_f10;
    temp_f12_2 = arg0->actor.world.pos.z - sp2C.z;
    phi_v0 = 0;
    if (sqrtf((temp_f2_2 * temp_f2_2) + (temp_f12_2 * temp_f12_2)) < 2.0f) {
        arg0->actor.world.pos.x = temp_f10;
        arg0->actor.world.pos.z = sp2C.z;
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80B1E3D4(EnPp *arg0, GlobalContext *arg1) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    f32 sp98;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f20;
    s32 temp_s1;
    EnPp *phi_s0;
    s32 phi_s1;

    temp_s6 = &sp98;
    temp_s5 = &spA4;
    temp_s4 = &spB0;
    phi_s0 = arg0;
    phi_s1 = 0;
    do {
        spA4 = randPlusMinusPoint5Scaled(2.0f);
        spA8 = Rand_ZeroFloat(2.0f) + 1.0f;
        spAC = randPlusMinusPoint5Scaled(2.0f);
        sp9C = -0.1f;
        spA0 = 0.0f;
        sp98 = 0.0f;
        spB0 = randPlusMinusPoint5Scaled(10.0f) + phi_s0->unk310;
        spB4 = Rand_ZeroFloat(3.0f) + arg0->actor.floorHeight + 1.0f;
        spB8 = randPlusMinusPoint5Scaled(10.0f) + phi_s0->unk318;
        temp_f20 = Rand_ZeroFloat(50.0f);
        func_800B0EB0(arg1, (Vec3f *) temp_s4, (Vec3f *) temp_s5, (Vec3f *) temp_s6, &D_80B2171C, &D_80B21720, (s16) (s32) (temp_f20 + 60.0f), (s16) 0x1E, (s16) (s32) (Rand_ZeroFloat(5.0f) + 20.0f));
        temp_s1 = phi_s1 + 0xC;
        phi_s0 += 0xC;
        phi_s1 = temp_s1;
    } while (temp_s1 != 0x18);
}

void func_80B1E5A8(EnPp *arg0, s32 arg1) {
    f32 sp34;
    s32 temp_v1;
    f32 phi_f0;
    f32 phi_f2;
    f32 phi_f12;

    arg0->unk5DC = arg1;
    sp34 = -10.0f;
    temp_v1 = arg0->unk5DC;
    arg0->unk2D8 = (f32) SkelAnime_GetFrameCount(*(&D_80B21724 + (arg1 * 4)));
    phi_f12 = -10.0f;
    if (temp_v1 >= 2) {
        phi_f12 = 0.0f;
    }
    phi_f0 = 1.0f;
    if (temp_v1 == 7) {
        phi_f0 = 2.0f;
    }
    phi_f2 = 0.0f;
    if (arg0->unk2C8 == 0xD) {
        phi_f2 = arg0->unk2D8;
    }
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80B21724 + (temp_v1 * 4)), phi_f0, phi_f2, arg0->unk2D8, (u8) (s32) *(&D_80B2174C + temp_v1), phi_f12);
}

void func_80B1E680(Actor *arg0) {
    Actor *temp_a0_2;
    Actor *temp_a0_3;
    SkelAnime *temp_a0;
    s32 temp_t7;

    if (arg0->unk2C8 != 6) {
        temp_t7 = arg0->unk5DC;
        switch (temp_t7) {
        case 1:
        case 7:
            temp_a0 = arg0 + 0x144;
            arg0 = arg0;
            if (func_801378B8(temp_a0, 0.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x397FU);
                return;
            }
            // Duplicate return node #11. Try simplifying control flow for better match
            return;
        case 2:
            Audio_PlayActorSound2(arg0, 0x317CU);
            return;
        case 3:
            Audio_PlayActorSound2(arg0, 0x3179U);
            return;
        case 4:
            temp_a0_2 = arg0 + 0x144;
            arg0 = arg0;
            if (func_801378B8((SkelAnime *) temp_a0_2, 0.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x397AU);
                return;
            }
            // Duplicate return node #11. Try simplifying control flow for better match
            return;
        case 6:
            temp_a0_3 = arg0 + 0x144;
            arg0 = arg0;
            if (func_801378B8((SkelAnime *) temp_a0_3, 6.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x397AU);
            }
            // Duplicate return node #11. Try simplifying control flow for better match
            return;
        }
    } else {
    default:
    }
}

s32 func_80B1E778(EnPp *arg0, GlobalContext *arg1) {
    Vec3f *sp50;
    CollisionContext *temp_s7;
    Vec3f *temp_a0;
    Vec3f *temp_s5;
    f32 temp_f10;
    s16 *temp_s1;
    Vec3f *phi_s2;
    s16 *phi_s1;
    s16 phi_s4;
    EnPp *phi_s0;

    temp_a0 = arg0 + 0x304;
    phi_s4 = arg0->actor.world.rot.y;
    if (arg0->unk2C8 == 8) {
        phi_s4 = arg0->unk2D0;
    }
    temp_s5 = arg0 + 0x24;
    sp50 = temp_a0;
    Math_Vec3f_Copy(temp_a0, temp_s5);
    temp_s7 = arg1 + 0x830;
    phi_s2 = arg0 + 0x2E0;
    phi_s1 = &D_80B21758;
    phi_s0 = arg0;
loop_3:
    Math_Vec3f_Copy(phi_s2, temp_s5);
    phi_s0->unk2E0 += Math_SinS((s16) (*phi_s1 + phi_s4)) * 70.0f;
    phi_s0->unk2E4 = arg0->actor.floorHeight - 10.0f;
    phi_s0->unk2E8 += Math_CosS((s16) (*phi_s1 + phi_s4)) * 70.0f;
    phi_s0 += 0xC;
    if (func_800C5A20(temp_s7, phi_s2, 20.0f) == 0) {
        return 2;
    }
    temp_s1 = phi_s1 + 2;
    phi_s2 += 0xC;
    phi_s1 = temp_s1;
    if (temp_s1 == &D_80B2175E) {
        temp_f10 = Math_SinS(phi_s4) * 40.0f;
        arg0->unk308 = arg0->actor.world.pos.y + 20.0f;
        arg0->unk304 += temp_f10;
        if (arg0->unk2C4 != 0) {
            arg0->unk308 += 20.0f;
        }
        arg0->unk30C += Math_CosS(phi_s4) * 40.0f;
        if (func_800C5A64(temp_s7, sp50, 10.0f) != 0) {
            return 1;
        }
        return 0;
    }
    goto loop_3;
}

void func_80B1E958(EnPp *arg0) {
    arg0->unk2C8 = 0;
    arg0->actionFunc = func_80B1E970;
}

void func_80B1E970(EnPp *arg0, GlobalContext *arg1) {
    Vec3f sp34;

    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if ((arg0->unk404 != 0) || (arg0->actor.xzDistToPlayer < arg0->unk400)) {
        func_80B1EBD8(arg0);
        return;
    }
    if ((arg0->unk2CA == 0) && (arg0->unk2CC == 0)) {
        arg0->unk2CC = (s16) (s32) (Rand_ZeroFloat(20.0f) + 20.0f);
        Math_Vec3f_Copy(&sp34, arg0 + 8);
        sp34.x += randPlusMinusPoint5Scaled(50.0f);
        sp34.z += randPlusMinusPoint5Scaled(50.0f);
        arg0->unk2D0 = Math_Vec3f_Yaw(arg0 + 0x24, &sp34);
        arg0->actor.speedXZ = 0.0f;
        if (arg0->unk5DC != 0) {
            func_80B1E5A8(arg0, 0);
        }
    }
    if (arg0->unk2CC == 1) {
        arg0->unk2CA = (s16) (s32) (Rand_ZeroFloat(40.0f) + 40.0f);
    }
    if (func_80B1E778(arg0, arg1) != 0) {
        arg0->unk2CA = 0;
        if (arg0->unk5DC != 1) {
            func_80B1E5A8(arg0, 1);
        }
        Math_SmoothStepToS(arg0 + 0x32, arg0->unk2D0, 1, 0x258, (s16) 0);
        return;
    }
    if ((arg0->unk2CC == 0) && (arg0->unk2CA != 0)) {
        if (arg0->unk5DC == 0) {
            func_80B1E5A8(arg0, 1);
        }
        if (((s32) arg0->unk2D4 < 0x64) && (fabsf((f32) (arg0->actor.world.rot.y - arg0->unk2D0)) < 100.0f)) {
            Math_ApproachF(arg0 + 0x70, 1.0f, 0.3f, 1.0f);
        }
        Math_SmoothStepToS(arg0 + 0x32, arg0->unk2D0, 1, (s16) (arg0->unk2D4 + 0x258), (s16) 0);
        Math_SmoothStepToS(arg0 + 0x2D4, 0, 1, 0x1F4, (s16) 0);
    }
}

void func_80B1EBD8(EnPp *arg0) {
    arg0->unk2CA = 0;
    arg0->unk2D2 = 0;
    arg0->unk2CC = arg0->unk2CA;
    func_80B1E5A8((EnPp *)7);
    arg0->unk2C8 = 1;
    arg0->actionFunc = func_80B1EC24;
}

void func_80B1EC24(EnPp *arg0, GlobalContext *arg1) {
    f32 sp4C;
    Vec3f sp3C;
    f32 *sp30;
    s16 temp_a0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 temp_v0_3;
    u8 temp_v0_4;
    u8 temp_v1_2;
    s32 phi_a0;

    sp4C = arg0->unk144.animCurrentFrame;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if ((arg0->unk2D2 == 0) || (arg0->unk5DC == 2)) {
        temp_a0 = arg0->actor.yawTowardsPlayer;
        arg0->unk2D0 = temp_a0;
        if (arg0->unk2C4 != 0) {
            temp_v0 = arg0->actor.home.rot.y;
            temp_v1 = temp_a0 - temp_v0;
            if ((s32) temp_v1 < 0) {
                phi_a0 = -(s32) temp_v1;
            } else {
                phi_a0 = (s32) temp_v1;
            }
            arg0->unk2D0 = temp_v0 + 0x8000;
            if (phi_a0 < 0x3000) {
                arg0->unk2D0 = temp_v0;
            }
            Math_Vec3f_Copy(arg0 + 0x358, arg0 + 0x24);
            Matrix_RotateY(arg0->unk2D0, 0U);
            SysMatrix_GetStateTranslationAndScaledZ(300.0f, &sp3C);
            arg0->unk358 += sp3C.x;
            arg0->unk360 += sp3C.z;
        }
        Math_SmoothStepToS(arg0 + 0x32, arg0->unk2D0, 1, (s16) (arg0->unk2D4 + 0x7D0), (s16) 0);
    }
    Math_SmoothStepToS(arg0 + 0x2D4, 0, 1, 0x1F4, (s16) 0);
    if (arg0->unk2D2 == 0) {
        Math_ApproachZeroF(arg0 + 0x70, 0.5f, 1.0f);
        temp_v0_2 = arg0->unk2D0;
        if (fabsf((f32) (arg0->actor.world.rot.y - temp_v0_2)) < 100.0f) {
            if (arg0->unk2C4 != 0) {
                arg0->actor.world.rot.y = temp_v0_2;
            }
            arg0->unk2D2 = 1;
        }
        goto block_43;
    }
    temp_v0_3 = arg0->unk5DC;
    if (temp_v0_3 == 7) {
        func_80B1E5A8(arg0, 2);
        goto block_43;
    }
    if (temp_v0_3 == 2) {
        if (arg0->unk2D8 <= sp4C) {
            arg0->unk2CA = 0x14;
            arg0->unk2DC = 14.0f;
            func_80B1E5A8(arg0, 3);
        }
        goto block_43;
    }
    if (temp_v0_3 == 3) {
        if (func_80B1E778(arg0, arg1) != 0) {
            arg0->actor.speedXZ = 0.0f;
            func_80B1F244(arg0);
            return;
        }
        if (arg0->unk2C4 == 0) {
            Math_ApproachF(arg0 + 0x70, 10.0f, 0.3f, 1.0f);
            goto block_28;
        }
        sp30 = arg0 + 0x24;
        Math_ApproachF(sp30, arg0->unk358, 0.5f, fabsf(Math_SinS(arg0->unk2D0) * arg0->unk2DC));
        Math_ApproachF(arg0 + 0x2C, arg0->unk360, 0.5f, fabsf(Math_CosS(arg0->unk2D0) * arg0->unk2DC));
        if ((s32) arg0->unk2CA < 0xA) {
            Math_ApproachZeroF(arg0 + 0x2DC, 0.3f, 0.2f);
block_28:
        }
        if (arg0->unk2CA == 0) {
            func_80B1F244(arg0);
            return;
        }
        temp_v0_4 = arg0->unk494.base.atFlags;
        if (((temp_v0_4 & 4) == 0) && (temp_v1_2 = arg0->unk4F4.base.atFlags, ((temp_v1_2 & 4) == 0))) {
            if (((temp_v0_4 & 2) != 0) || ((temp_v1_2 & 2) != 0)) {
                func_80B1EFFC(arg0);
                return;
            }
            goto block_43;
        }
        if (arg0->unk2C4 != 0) {
            func_80B1F0A4(arg0);
            return;
        }
        if (arg0->actor.params != 0) {
            arg0->actor.speedXZ *= -1.0f;
        } else {
            arg0->actor.speedXZ *= -0.5f;
        }
        func_80B1F244(arg0);
        return;
    }
block_43:
    if (((arg0->unk5DC == 2) || (arg0->unk5DC == 3)) && (arg0->unk2CC == 0)) {
        func_80B1E3D4(arg0, arg1);
        arg0->unk2CC = 3;
    }
}

void func_80B1EFFC(EnPp *arg0) {
    func_80B1E5A8((EnPp *)4);
    arg0->unk2CE = 1;
    arg0->unk2C8 = 2;
    arg0->actionFunc = func_80B1F048;
    arg0->actor.speedXZ = 0.0f;
}

void func_80B1F048(EnPp *arg0, GlobalContext *arg1) {
    f32 sp1C;
    EnPp *temp_a1;
    f32 temp_f4;

    temp_a1 = arg0;
    temp_f4 = temp_a1->unk144.animCurrentFrame;
    arg0 = temp_a1;
    sp1C = temp_f4;
    SkelAnime_FrameUpdateMatrix(temp_a1 + 0x144);
    if (arg0->unk2D8 <= sp1C) {
        func_80B1EBD8(arg0, arg0);
    }
}

void func_80B1F0A4(EnPp *arg0) {
    Vec3f sp2C;
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_a0;

    temp_v0 = arg0->actor.home.rot.y;
    temp_v1 = arg0->actor.yawTowardsPlayer - temp_v0;
    if ((s32) temp_v1 < 0) {
        phi_a0 = -(s32) temp_v1;
    } else {
        phi_a0 = (s32) temp_v1;
    }
    arg0->unk2D0 = temp_v0 + 0x8000;
    if (phi_a0 < 0x3000) {
        arg0->unk2D0 = temp_v0;
    }
    Math_Vec3f_Copy(arg0 + 0x358, arg0 + 0x24);
    Matrix_RotateY(arg0->unk2D0, 0U);
    SysMatrix_GetStateTranslationAndScaledZ(-200.0f, &sp2C);
    arg0->unk2CA = 0xA;
    arg0->unk358 += sp2C.x;
    arg0->unk360 += sp2C.z;
    func_80B1E5A8(arg0, 5);
    arg0->unk2C8 = 3;
    arg0->actionFunc = func_80B1F188;
    arg0->actor.speedXZ = 0.0f;
    arg0->unk2DC = 14.0f;
}

void func_80B1F188(EnPp *arg0, GlobalContext *arg1) {
    Math_ApproachF(arg0 + 0x24, arg0->unk358, 0.5f, fabsf(Math_SinS(arg0->unk2D0) * arg0->unk2DC));
    Math_ApproachF(arg0 + 0x2C, arg0->unk360, 0.5f, fabsf(Math_CosS(arg0->unk2D0) * arg0->unk2DC));
    Math_ApproachZeroF(arg0 + 0x2DC, 0.3f, 0.2f);
    if ((arg0->unk2CA == 0) && (func_80B1E29C(arg0) != 0)) {
        func_80B1EBD8(arg0);
    }
}

void func_80B1F244(EnPp *arg0) {
    arg0->unk2D2 = 0;
    arg0->unk2CA = 0x14;
    arg0->unk2CC = 0;
    arg0->unk2DC = 14.0f;
    func_80B1E5A8((EnPp *)6);
    arg0->unk2C8 = 4;
    arg0->actionFunc = func_80B1F29C;
}

void func_80B1F29C(EnPp *arg0, GlobalContext *arg1) {
    void *sp24;
    f32 sp20;

    sp24 = arg1->actorCtx.actorList[2].first;
    sp20 = arg0->unk144.animCurrentFrame;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (func_80B1E778(arg0, arg1) == 2) {
        arg0->actor.speedXZ = 0.0f;
        arg0->unk2DC = 0.0f;
    }
    if (arg0->unk2C4 == 0) {
        if ((fabsf(arg0->actor.home.pos.y - arg0->actor.world.pos.y) > 100.0f) && (fabsf(arg0->actor.floorHeight - sp24->floorHeight) > 100.0f)) {
            func_80B1FAD0(arg0, arg1);
            return;
        }
        goto block_9;
    }
    if (arg0->unk2DC != 0.0f) {
        Math_ApproachF(arg0 + 0x24, arg0->unk358, 0.5f, fabsf(Math_SinS(arg0->unk2D0) * arg0->unk2DC));
        Math_ApproachF(arg0 + 0x2C, arg0->unk360, 0.5f, fabsf(Math_CosS(arg0->unk2D0) * arg0->unk2DC));
        if ((s32) arg0->unk2CA < 0xA) {
            Math_ApproachZeroF(arg0 + 0x2DC, 0.3f, 0.2f);
        }
    }
block_9:
    Math_ApproachZeroF(arg0 + 0x70, 0.5f, 1.0f);
    if ((arg0->actor.speedXZ > 0.3f) && (arg0->unk2CC == 0)) {
        func_80B1E3D4(arg0, arg1);
        arg0->unk2CC = 3;
    }
    if ((arg0->unk2D2 == 0) && (arg0->unk2D8 <= sp20)) {
        arg0->unk2D2 = 1;
        arg0->unk144.initialFrame = 6.0f;
    }
    if (arg0->unk2CA == 0) {
        func_80B1EBD8(arg0);
    }
}

void func_80B1F4A0(EnPp *arg0) {
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_a1;

    arg0->unk2CC = 0;
    arg0->unk2D2 = 0;
    arg0->actor.velocity.y = 20.0f;
    arg0->unk2CA = arg0->unk2CC;
    arg0->actor.speedXZ = 0.0f;
    arg0->actor.gravity = -3.0f;
    func_80B1E5A8((EnPp *)8);
    if (arg0->unk2C4 != 0) {
        temp_v0 = arg0->actor.home.rot.y;
        temp_v1 = arg0->actor.yawTowardsPlayer - temp_v0;
        phi_a1 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_a1 = -(s32) temp_v1;
        }
        arg0->actor.world.rot.y = temp_v0 + 0x8000;
        if (phi_a1 < 0x3000) {
            arg0->actor.world.rot.y = temp_v0;
        }
        arg0->unk2D0 = arg0->actor.world.rot.y;
    }
    arg0->unk2D2 = 0;
    arg0->unk2C8 = 5;
    arg0->actionFunc = func_80B1F560;
}

void func_80B1F560(EnPp *arg0, GlobalContext *arg1) {
    f32 sp2C;
    s16 temp_v0;
    s16 temp_v1;
    s32 phi_a0;

    sp2C = arg0->unk144.animCurrentFrame;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    if (arg0->unk2C4 != 0) {
        temp_v0 = arg0->actor.home.rot.y;
        temp_v1 = arg0->actor.yawTowardsPlayer - temp_v0;
        phi_a0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_a0 = -(s32) temp_v1;
        }
        arg0->unk2D0 = temp_v0 + 0x8000;
        if (phi_a0 < 0x3000) {
            arg0->unk2D0 = temp_v0;
        }
        func_80B1E29C(arg0);
    } else {
        arg0->unk2D0 = arg0->actor.yawTowardsPlayer;
    }
    Math_SmoothStepToS(arg0 + 0x32, arg0->unk2D0, 1, 0x1388, (s16) 0);
    if (arg0->unk2D2 == 0) {
        if ((arg0->actor.bgCheckFlags & 1) != 0) {
            arg0->unk2D2 = 1;
            func_80B1E5A8(arg0, 9);
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
        return;
    }
    if (arg0->unk2D8 <= sp2C) {
        func_80B1E958(arg0);
    }
}

void func_80B1F664(EnPp *arg0) {
    s16 temp_v0;

    temp_v0 = arg0->unk3F4;
    if (((temp_v0 == 0xB) || (temp_v0 == 0xA)) && (arg0->unk3F2 == 0)) {
        arg0->unk3F2 = 0;
        arg0->unk3F4 = 0;
    }
    arg0->actor.speedXZ = 0.0f;
    arg0->unk2C8 = 6;
    arg0->actionFunc = func_80B1F6B4;
}

void func_80B1F6B4(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s16 temp_v0_2;

    if (arg0->unk3F4 == 0xB) {
        temp_v0 = arg0->unk3F2;
        if ((temp_v0 != 0) && ((s32) temp_v0 < 0x3C)) {
            arg0->unk3F4 = 0xA;
        }
    }
    if ((arg0->unk2CC == 0) && (arg0->unk3F2 == 0)) {
        temp_v0_2 = arg0->unk3F4;
        if ((temp_v0_2 == 0xB) || (temp_v0_2 == 0xA)) {
            func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x408), 0xB, 2, 0.7f, 0.4f);
            arg0->unk3F2 = 0;
            arg0->unk3F4 = 0;
        }
        func_80B1EBD8((EnPp *) arg0);
    }
}

void func_80B1F770(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp44;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s32 phi_a0;

    if (arg0->unk2C4 == 0) {
        Matrix_RotateY(arg0->yawTowardsPlayer, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-30.0f, &sp44);
        Math_Vec3f_Copy(arg0 + 0x5E0, &sp44);
    } else {
        temp_v0 = arg0->home.rot.y;
        temp_v1 = arg0->yawTowardsPlayer - temp_v0;
        phi_a0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_a0 = -(s32) temp_v1;
        }
        arg0->unk2D0 = (s16) (temp_v0 + 0x8000);
        if (phi_a0 < 0x3000) {
            arg0->unk2D0 = temp_v0;
        }
        Math_Vec3f_Copy(arg0 + 0x358, arg0 + 0x24);
        Matrix_RotateY(arg0->unk2D0, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-200.0f, &sp44);
        arg0->unk2CA = 0xA;
        arg0->unk358 = (f32) (arg0->unk358 + sp44.x);
        arg0->unk360 = (f32) (arg0->unk360 + sp44.z);
    }
    temp_v0_2 = arg0->unk3F4;
    if (((temp_v0_2 == 0xB) || (temp_v0_2 == 0xA)) && (arg0->unk3F2 != 0)) {
        func_800BF7CC(arg1, arg0, (Vec3f []) (arg0 + 0x408), 0xB, 2, 0.7f, 0.4f);
        arg0->unk3F2 = 0;
        arg0->unk3F4 = 0;
    }
    func_800BCB70(arg0, 0x4000, 0xFF, 0, (s16) 8);
    arg0->unk2CC = 0;
    func_80B1E5A8((EnPp *) arg0, 5);
    arg0->unk2D0 = (s16) (arg0->yawTowardsPlayer + 0x8000);
    arg0->unk2C8 = 8;
    if (func_80B1E778((EnPp *) arg0, arg1) == 2) {
        arg0->unk5E8 = 0.0f;
        arg0->unk5E0 = 0.0f;
        arg0->speedXZ = 0.0f;
    }
    Audio_PlayActorSound2(arg0, 0x397DU);
    arg0->unk2C0 = func_80B1F940;
}

void func_80B1F940(EnPp *arg0, GlobalContext *arg1) {
    void *sp24;

    sp24 = arg1->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
    arg0->actor.world.rot.y += 0x1000;
    if (arg0->unk2CC == 0) {
        func_80B1E3D4(arg0, arg1);
        arg0->unk2CC = 3;
    }
    if (arg0->unk2C4 != 0) {
        Math_ApproachF(&arg0->actor.world.pos.x, arg0->unk358, 0.5f, 25.0f);
        Math_ApproachF(&arg0->actor.world.pos.z, arg0->unk360, 0.5f, 25.0f);
        arg0->actor.world.rot.y += 0x1000;
        if ((arg0->unk2CA == 0) && (func_80B1E29C(arg0) != 0)) {
            func_80B1EBD8(arg0);
        }
    } else if ((arg0->actor.colorFilterTimer == 0) && (arg0->unk5E0 < 1.0f) && (arg0->unk5E8 < 1.0f)) {
        func_80B1EBD8(arg0);
    }
    if (func_80B1E778(arg0, arg1) == 2) {
        arg0->unk5E8 = 0.0f;
        arg0->unk5E0 = 0.0f;
        arg0->actor.speedXZ = 0.0f;
    }
    if ((fabsf(arg0->actor.home.pos.y - arg0->actor.world.pos.y) > 100.0f) && (fabsf(arg0->actor.floorHeight - sp24->floorHeight) > 100.0f)) {
        func_80B1FAD0(arg0, arg1);
    }
}

void func_80B1FAD0(EnPp *arg0, GlobalContext *arg1) {
    Vec3f sp34;
    Vec3f *sp2C;
    Vec3f *temp_a1;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    u32 temp_t6;
    s32 phi_a0;

    arg0->unk2CA = 0;
    arg0->unk2CC = arg0->unk2CA;
    if (arg0->unk2C4 == 0) {
        Matrix_RotateY(arg0->actor.yawTowardsPlayer, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-30.0f, &sp34);
        Math_Vec3f_Copy(arg0 + 0x5E0, &sp34);
        sp2C = arg0 + 0x24;
    } else {
        temp_v0 = arg0->actor.home.rot.y;
        temp_a1 = arg0 + 0x24;
        temp_v1 = arg0->actor.yawTowardsPlayer - temp_v0;
        phi_a0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_a0 = -(s32) temp_v1;
        }
        arg0->unk2D0 = temp_v0 + 0x8000;
        if (phi_a0 < 0x3000) {
            arg0->unk2D0 = temp_v0;
        }
        sp2C = temp_a1;
        Math_Vec3f_Copy(arg0 + 0x358, temp_a1);
        Matrix_RotateY(arg0->unk2D0, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(-200.0f, &sp34);
        arg0->unk358 += sp34.x;
        arg0->unk360 += sp34.z;
    }
    arg0->unk2D2 = 0;
    arg0->unk2D4 = arg0->unk2D2;
    func_80B1E5A8(arg0, 5);
    temp_v0_2 = arg0->unk3F4;
    arg0->unk2CA = 0xF;
    if (((temp_v0_2 == 0xB) || (temp_v0_2 == 0xA)) && (arg0->unk3F2 == 0)) {
        arg0->unk3F4 = 0;
    }
    func_800BCB70(&arg0->actor, 0x4000, 0xFF, 0, (s16) 0x19);
    Enemy_StartFinishingBlow(arg1, &arg0->actor);
    Audio_PlaySoundAtPosition(arg1, sp2C, 0x1E, 0x397EU);
    temp_t6 = arg0->actor.flags | 0x8000000;
    arg0->actor.flags = temp_t6;
    arg0->actor.flags = temp_t6 & ~1;
    arg0->unk2C8 = 9;
    arg0->actionFunc = func_80B1FC7C;
}

void func_80B1FC7C(EnPp *arg0, GlobalContext *arg1) {
    Vec3f sp64;
    WaterBox *sp60;
    f32 sp5C;
    PosRot *temp_s3;
    PosRot *temp_s3_2;
    Vec3f *temp_s2;
    s16 temp_v1;
    s32 temp_s0;
    s32 phi_s1;
    s32 phi_s0;
    s32 phi_s0_2;

    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    arg0->actor.world.rot.y += 0x3000;
    sp5C = arg0->actor.world.pos.y - 30.0f;
    temp_v1 = arg0->unk3F4;
    if ((temp_v1 == 0xB) || (temp_v1 == 0xA)) {
        if (arg0->unk3F2 != 0) {
            func_800BF7CC(arg1, &arg0->actor, (Vec3f []) &arg0->unk408, 0xB, 2, 0.7f, 0.4f);
            arg0->unk3F2 = 0;
            arg0->unk3F4 = 0;
            goto block_4;
        }
    } else {
block_4:
        if (arg0->unk2CC == 0) {
            func_80B1E3D4(arg0, arg1);
            arg0->unk2CC = 3;
        }
        phi_s0_2 = 0;
        if ((arg0->unk2C8 == 9) && (func_800CA1AC(arg1, &arg1->colCtx, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp5C, &sp60) != 0)) {
            temp_s3 = &arg0->actor.world;
            temp_s2 = &sp64;
            phi_s1 = 0xA;
            if (arg0->actor.world.pos.y < sp5C) {
                phi_s0 = 0x28;
                do {
                    Math_Vec3f_Copy(temp_s2, &temp_s3->pos);
                    sp64.x += randPlusMinusPoint5Scaled((f32) phi_s1);
                    sp64.z += randPlusMinusPoint5Scaled((f32) phi_s0);
                    EffectSsGSplash_Spawn(arg1, temp_s2, NULL, NULL, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 100.0f) + 400.0f));
                    temp_s0 = phi_s0 + 5;
                    phi_s1 += 5;
                    phi_s0 = temp_s0;
                } while (temp_s0 != 0x41);
                Audio_PlaySoundAtPosition(arg1, &temp_s3->pos, 0x32, 0x2817U);
                phi_s0_2 = 1;
            }
        }
        if (arg0->unk2C4 != 0) {
            Math_ApproachF(&arg0->actor.world.pos.x, arg0->unk358, 0.5f, 25.0f);
            Math_ApproachF(&arg0->actor.world.pos.z, arg0->unk360, 0.5f, 25.0f);
        }
        if ((arg0->unk2C8 == 9) && ((phi_s0_2 != 0) || (arg0->unk2CA == 1))) {
            arg0->unk2C8 = 0xB;
        }
        if (arg0->unk2C8 == 0xC) {
            temp_s3_2 = &arg0->actor.world;
            if (arg0->actor.params == 2) {
                Item_DropCollectibleRandom(arg1, NULL, &temp_s3_2->pos, 0x70);
            } else {
                Item_DropCollectibleRandom(arg1, NULL, &temp_s3_2->pos, 0xE0);
            }
            Actor_MarkForDeath(&arg0->actor);
        }
    }
}

void func_80B1FF20(EnPp *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    s16 temp_v1;
    s32 temp_t8;
    s32 phi_a0;

    temp_v0 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x1E9, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) (s32) arg0->actor.world.rot.x, (s16) (s32) arg0->actor.shape.rot.y, (s16) (s32) arg0->actor.world.rot.z, (s16) 2);
    if (temp_v0 != 0) {
        if (arg0->unk2C4 != 0) {
            temp_v1 = arg0->actor.yawTowardsPlayer - arg0->actor.home.rot.y;
            phi_a0 = (s32) temp_v1;
            if ((s32) temp_v1 < 0) {
                phi_a0 = -(s32) temp_v1;
            }
            temp_v0->unk2C4 = 1;
            temp_v0->world.rot.y = arg0->actor.home.rot.y + 0x8000;
            if (phi_a0 < 0x3000) {
                temp_v0->world.rot.y = arg0->actor.home.rot.y;
            }
        }
        arg0->actor.gravity = 0.0f;
        temp_t8 = arg0->actor.flags | 0x8000000;
        arg0->actor.flags = temp_t8;
        arg0->actor.flags = temp_t8 & ~1;
        arg0->unk2D2 = 0;
        func_80B1E5A8(arg0, 0);
        SkelAnime_FrameUpdateMatrix(&arg0->unk144);
        arg0->unk2C8 = 7;
        arg0->actionFunc = func_80B20030;
    }
}

void func_80B20030(EnPp *arg0, GlobalContext *arg1) {
    Vec3f spCC;
    Vec3f sp60;
    Vec3f *temp_s0;
    Vec3f *temp_s1;
    Vec3f *temp_s3;
    Vec3f *temp_t2;
    f32 temp_f2;
    s16 temp_v1;
    s32 *temp_t3;
    s32 *phi_t3;
    Vec3f *phi_t2;
    Vec3f *phi_s0;
    f32 phi_f2;

    if (((arg0->actor.flags & 0x2000) != 0x2000) || (arg0->unk2C8 == 0xA)) {
        temp_v1 = arg0->unk2D2;
        if (temp_v1 != 0) {
            if (temp_v1 != 1) {
                if (temp_v1 != 2) {
                    phi_f2 = arg0->unk338;
                } else {
                    temp_f2 = arg0->unk338;
                    phi_f2 = temp_f2;
                    if (temp_f2 > 900.0f) {
                        phi_t3 = &D_80B21760;
                        phi_t2 = &sp60;
                        phi_s0 = &sp60;
                        if (arg0->unk350 > 0.0f) {
                            do {
                                temp_t3 = phi_t3 + 0xC;
                                temp_t2 = phi_t2 + 0xC;
                                temp_t2->unk-C = (s32) *phi_t3;
                                temp_t2->unk-8 = (s32) temp_t3->unk-8;
                                temp_t2->unk-4 = (s32) temp_t3->unk-4;
                                phi_t3 = temp_t3;
                                phi_t2 = temp_t2;
                            } while (temp_t3 != (&D_80B21760 + 0x6C));
                            temp_s1 = &spCC;
                            temp_s3 = temp_s1;
                            do {
                                Math_Vec3f_Copy(temp_s1, &arg0->unk328);
                                spCC.x += randPlusMinusPoint5Scaled(20.0f);
                                spCC.y = arg0->actor.floorHeight;
                                spCC.z += randPlusMinusPoint5Scaled(20.0f);
                                func_800B3030(arg1, temp_s1, phi_s0, phi_s0, (s16) 0x46, (s16) 0, 2);
                                temp_s0 = phi_s0 + 0xC;
                                phi_s0 = temp_s0;
                            } while (temp_s0 != temp_s3);
                            Actor_MarkForDeath(&arg0->actor);
                            phi_f2 = arg0->unk338;
                        }
                    }
                }
            } else {
                if (arg0->unk338 > 800.0f) {
                    arg0->unk2D2 = temp_v1 + 1;
                    arg0->unk490 = 50.0f;
                    arg0->unk350 = -200.0f;
                    arg0->unk34C = -150.0f;
                }
                phi_f2 = arg0->unk338;
            }
        } else {
            arg0->unk2C8 = 0xA;
            arg0->unk490 = 50.0f;
            arg0->unk350 = -230.0f;
            arg0->unk34C = -150.0f;
            Audio_PlayActorSound2(&arg0->actor, 0x397BU);
            arg0->unk2D2 = 1;
            phi_f2 = arg0->unk338;
        }
        arg0->unk350 += arg0->unk490;
        arg0->unk348 += 8192.0f;
        arg0->unk334 += arg0->unk34C;
        arg0->unk338 = phi_f2 + arg0->unk350;
        arg0->unk33C += arg0->unk354;
    }
}

void func_80B202B8(EnPp *arg0) {
    f32 temp_f6;
    s16 temp_v1;

    func_80B1E5A8(arg0, 5);
    temp_f6 = Rand_ZeroFloat(5.0f) + 13.0f;
    arg0->actor.gravity = -2.0f;
    arg0->actor.velocity.y = temp_f6;
    arg0->unk2CA = Rand_S16Offset(0x1E, 0x1E);
    temp_v1 = (arg0->unk2C6 * 0x2E) + 0xFF00;
    arg0->unk3EC = temp_v1;
    arg0->unk3F0 = temp_v1;
    if (arg0->actor.params != 8) {
        arg0->actor.speedXZ = Rand_ZeroFloat(4.0f) + 4.0f;
        arg0->actor.world.rot.y = ((s32) randPlusMinusPoint5Scaled(223.0f) + 0x1999) * arg0->unk2C6;
    }
    arg0->unk2C8 = 0xD;
    arg0->actionFunc = func_80B203BC;
}

void func_80B203BC(EnPp *arg0, GlobalContext *arg1) {
    Vec3f sp78;
    WaterBox *sp74;
    f32 sp70;
    EnPp *temp_s0;
    PosRot *temp_s3;
    PosRot *temp_s3_2;
    Vec3f *temp_s2;
    f32 temp_f8;
    s16 temp_s1;
    s32 temp_s0_2;
    Vec3f *phi_s2;
    s16 phi_s1;
    EnPp *phi_s0;
    s32 phi_s1_2;
    s32 phi_s0_2;
    Vec3f *phi_s3;

    SkelAnime_FrameUpdateMatrix(&arg0->unk144);
    if (arg0->actor.params == 8) {
        arg0->unk370 = 0xA;
        phi_s2 = &arg0->unk374;
        phi_s1 = 0;
        phi_s0 = arg0;
        do {
            Math_Vec3f_Copy(phi_s2, &arg0->unk364);
            temp_f8 = phi_s0->unk374.x + (Math_SinS(phi_s1) * 15.0f);
            phi_s0->unk374.y += -5.0f;
            phi_s0->unk374.x = temp_f8;
            temp_s1 = phi_s1 + 0xCCC;
            temp_s0 = phi_s0 + 0xC;
            temp_s0->unk370 = phi_s0->unk374.z + (Math_CosS(phi_s1) * 15.0f);
            phi_s2 += 0xC;
            phi_s1 = temp_s1;
            phi_s0 = temp_s0;
        } while (temp_s1 != 0x7FF8);
    } else {
        Math_Vec3f_Copy(&arg0->unk374, &arg0->unk364);
        arg0->unk370 = 1;
        arg0->actor.shape.rot.x += arg0->unk3EC;
        arg0->actor.shape.rot.z += arg0->unk3F0;
    }
    if ((func_800CA1AC(arg1, &arg1->colCtx, arg0->actor.world.pos.x, arg0->actor.world.pos.z, &sp70, &sp74) != 0) && (arg0->actor.world.pos.y < (sp70 + 5.0f))) {
        arg0->unk2CA = 0;
        if (arg0->actor.params == 8) {
            temp_s3 = &arg0->actor.world;
            temp_s2 = &sp78;
            phi_s1_2 = 0xA;
            phi_s0_2 = 0x28;
            phi_s3 = &temp_s3->pos;
            do {
                Math_Vec3f_Copy(temp_s2, &temp_s3->pos);
                sp78.x += randPlusMinusPoint5Scaled((f32) phi_s1_2);
                sp78.z += randPlusMinusPoint5Scaled((f32) phi_s0_2);
                EffectSsGSplash_Spawn(arg1, temp_s2, NULL, NULL, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 100.0f) + 400.0f));
                temp_s0_2 = phi_s0_2 + 5;
                phi_s1_2 += 5;
                phi_s0_2 = temp_s0_2;
            } while (temp_s0_2 != 0x46);
        } else {
            temp_s3_2 = &arg0->actor.world;
            EffectSsGSplash_Spawn(arg1, &temp_s3_2->pos, NULL, NULL, (s16) 0, (s16) 0x190);
            phi_s3 = &temp_s3_2->pos;
        }
        Audio_PlaySoundAtPosition(arg1, phi_s3, 0x32, 0x2817U);
    }
    if ((arg0->unk2CA == 0) || ((arg0->actor.bgCheckFlags & 1) != 0)) {
        Actor_MarkForDeath(&arg0->actor);
    }
}

void func_80B20668(EnPp *arg0, GlobalContext *arg1) {
    s32 sp40;
    s32 sp3C;
    s16 temp_a0_2;
    s16 temp_a0_3;
    s16 temp_v0;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s16 temp_v0_7;
    s16 temp_v0_8;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_a0;
    s32 temp_v0_2;
    u8 temp_v0_3;
    u8 temp_v0_4;
    s32 phi_a0;

    temp_v0 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
    phi_a0 = temp_v0 << 0x10;
    if ((s32) temp_v0 < 0) {
        phi_a0 = (s32) temp_v0 * -0x10000;
    }
    temp_a0 = phi_a0 >> 0x10;
    sp40 = 0;
    sp3C = 0;
    temp_v1 = arg0->actor.params;
    if (temp_v1 == 0) {
        if ((temp_a0 < (gGameInfo->data[2402] + 0x4A9C)) || ((s32) temp_v1 > 0)) {
            arg0->actor.flags |= 0x200;
        } else {
            arg0->actor.flags &= -0x201;
        }
    }
    if ((arg0->actor.params == 0) && ((s32) arg0->unk2C8 < 7)) {
        temp_v0_2 = arg0->unk494.elements->unk16 & 2;
        if (temp_v0_2 != 0) {
            if (temp_a0 < (gGameInfo->data[2402] + 0x4A9C)) {
                temp_v0_3 = arg0->actor.colChkInfo.damageEffect;
                if (temp_v0_3 == 0xD) {
                    func_80B1FF20(arg0, arg1);
                } else if ((temp_v0_3 == 0xE) || (temp_v0_3 == 0xC)) {
                    func_80B1FF20(arg0, arg1);
                    arg0->unk2C8 = 0xA;
                }
            } else {
                sp40 = 1;
            }
        } else if (temp_v0_2 != 0) {
            sp40 = 1;
        }
    }
    if ((arg0->unk4F4.elements->info.bumperFlags & 2) != 0) {
        temp_v1_2 = arg0->actor.params;
        if (temp_v1_2 != 0) {
            temp_a0_2 = arg0->unk2C8;
            if (((s32) temp_a0_2 < 8) && (temp_a0_2 != 5)) {
                temp_v0_4 = arg0->actor.colChkInfo.damageEffect;
                if (temp_v0_4 == 0xD) {
                    if (temp_v1_2 != 0) {
                        sp3C = 1;
                        goto block_26;
                    }
                    // Duplicate return node #68. Try simplifying control flow for better match
                    return;
                }
block_26:
                if (temp_v0_4 == 5) {
                    temp_v0_5 = arg0->unk3F4;
                    if (((temp_v0_5 != 0xB) && (temp_v0_5 != 0xA)) || (arg0->unk3F2 == 0)) {
                        arg0->unk3F2 = 0x28;
                        arg0->unk3F4 = 0x1E;
                        Audio_PlayActorSound2(&arg0->actor, 0x389EU);
                        func_800BCB70(&arg0->actor, 0, 0xFF, 0, (s16) 0x28);
                        func_80B1F664(arg0);
                        return;
                    }
                    // Duplicate return node #68. Try simplifying control flow for better match
                    return;
                }
                if (temp_v0_4 == 1) {
                    temp_v0_6 = arg0->unk3F4;
                    if (((temp_v0_6 != 0xB) && (temp_v0_6 != 0xA)) || (arg0->unk3F2 == 0)) {
                        Audio_PlayActorSound2(&arg0->actor, 0x389EU);
                        func_800BCB70(&arg0->actor, 0, 0xFF, 0, (s16) 0x28);
                        arg0->unk2CC = 0x28;
                        func_80B1F664(arg0);
                        return;
                    }
                    // Duplicate return node #68. Try simplifying control flow for better match
                    return;
                }
                if ((temp_v0_4 != 0xE) && (temp_v0_4 != 0)) {
                    sp3C = 1;
                    arg0->unk404 = 1;
                    arg0->actor.speedXZ = 0.0f;
                    if (temp_v0_4 == 2) {
                        arg0->unk3F2 = 0x28;
                        arg0->unk3F4 = 0;
                        goto block_55;
                    }
                    if (temp_v0_4 == 3) {
                        temp_v0_7 = arg0->unk3F4;
                        if (((temp_v0_7 != 0xB) && (temp_v0_7 != 0xA)) || (arg0->unk3F2 == 0)) {
                            Actor_ApplyDamage(&arg0->actor);
                            arg0->unk3F2 = 0x50;
                            arg0->unk3F4 = 0xB;
                            arg0->unk3F8 = 0.0f;
                            arg0->unk3FC = 1.5f;
                        }
                        if ((s32) arg0->actor.colChkInfo.health <= 0) {
                            func_80B1FAD0(arg0, arg1);
                            return;
                        }
                        func_80B1F664(arg0);
                        return;
                    }
                    if ((temp_v0_4 == 4) && (((temp_v0_8 = arg0->unk3F4, (temp_v0_8 != 0xB)) && (temp_v0_8 != 0xA)) || (arg0->unk3F2 == 0))) {
                        Actor_Spawn(&arg1->actorCtx, arg1, 0xA2, arg0->actor.focus.pos.x, arg0->actor.focus.pos.y, arg0->actor.focus.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
                        func_800BCB70(&arg0->actor, 0x8000, 0xFF, 0, (s16) 0x19);
                        arg0->unk3F2 = 0x14;
                        arg0->unk3F4 = 0x14;
                    }
                    goto block_55;
                }
                if (temp_a0_2 != 5) {
                    func_80B1F4A0(arg0, 5);
                }
                goto block_55;
            }
block_55:
            if (sp3C != 0) {
                Actor_ApplyDamage(&arg0->actor);
                if ((s32) arg0->actor.colChkInfo.health > 0) {
                    func_80B1F770(&arg0->actor, arg1);
                } else {
                    func_80B1FAD0(arg0, arg1);
                }
            }
            goto block_60;
        }
        sp40 = 1;
        goto block_60;
    }
block_60:
    if ((sp40 != 0) && ((temp_a0_3 = arg0->unk2C8, (temp_a0_3 == 0)) || (temp_a0_3 == 1) || (temp_a0_3 == 4))) {
        arg0->unk2CC = 0;
        arg0->unk2CA = 0xA;
        arg0->unk2D4 = 0x20D0;
        arg0->actor.speedXZ = 0.0f;
        if (temp_a0_3 == 1) {
            arg0->unk2D2 = 0;
            func_80B1E5A8(arg0, 7);
            arg0->unk2D4 = 0x1B58;
        }
        arg0->unk2D0 = arg0->actor.yawTowardsPlayer;
        if (arg0->actor.params == 0) {
            Audio_PlayActorSound2(&arg0->actor, 0x1806U);
        }
    }
}

void EnPp_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnPp *this = (EnPp *) thisx;
    WaterBox *sp3C;
    f32 sp38;
    CollisionCheckContext *sp34;
    ColliderJntSph *sp30;
    CollisionCheckContext *temp_a1;
    CollisionCheckContext *temp_t7;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_v0 = this->unk2CA;
    if (temp_v0 != 0) {
        this->unk2CA = temp_v0 - 1;
    }
    temp_v0_2 = this->unk2CC;
    if (temp_v0_2 != 0) {
        this->unk2CC = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk3F2;
    if (temp_v0_3 != 0) {
        this->unk3F2 = temp_v0_3 - 1;
    }
    this->actionFunc(this, globalCtx);
    func_80B1E680(&this->actor);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    if (this->unk2C8 != 0xD) {
        if ((s32) this->actor.params > 0) {
            this->unk494.elements->dim.modelSphere.radius = 0x2A;
            this->unk494.elements->dim.modelSphere.center.x = 0x190;
            this->unk494.elements->dim.modelSphere.center.y = -0x190;
            this->unk4F4.elements->dim.modelSphere.radius = 0x14;
            this->unk4F4.elements->dim.modelSphere.center.x = 0x190;
            this->unk4F4.elements->dim.modelSphere.center.y = -0x190;
        } else {
            this->unk494.elements->dim.modelSphere.radius = 0x19;
            this->unk494.elements->dim.modelSphere.center.x = 0x30C;
            this->unk494.elements->dim.modelSphere.center.y = -0x1F4;
            this->unk4F4.elements->dim.modelSphere.radius = 0x19;
            this->unk4F4.elements->dim.modelSphere.center.x = 0x190;
            this->unk4F4.elements->dim.modelSphere.center.y = -0x190;
        }
    }
    if (((s32) this->unk2C8 < 9) && (func_800CA1AC(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &sp38, &sp3C) != 0) && (this->actor.world.pos.y < sp38)) {
        func_80B1FAD0(this, globalCtx);
        return;
    }
    if ((this->unk2C8 != 0xD) && ((func_80B20668(this, globalCtx), Actor_SetHeight(&this->actor, 40.0f), (this->unk2C8 == 9)) || ((this->actor.bgCheckFlags & 1) != 0))) {
        this->actor.world.pos.x += this->unk5E0;
        this->actor.world.pos.z += this->unk5E8;
        Math_ApproachZeroF(&this->unk5E0, 1.0f, 2.0f);
        Math_ApproachZeroF(&this->unk5E8, 1.0f, 2.0f);
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 35.0f, 40.0f, 40.0f, 0x1FU);
    if (this->unk2C8 != 0xD) {
        this->actor.shape.rot.y = this->actor.world.rot.y;
    }
    phi_v1 = (s32) this->unk2C8;
    if (this->unk2C8 != 0xD) {
        if (this->unk5D4 == 0) {
            this->unk5D4 = this->actor.floorPoly;
            phi_v1 = (s32) this->unk2C8;
        }
        phi_v1_2 = phi_v1;
        if ((phi_v1 < 9) || (phi_v1 == 5)) {
            temp_a1 = &globalCtx->colChkCtx;
            sp34 = temp_a1;
            CollisionCheck_SetAC(globalCtx, temp_a1, &this->unk494.base);
            CollisionCheck_SetAC(globalCtx, temp_a1, &this->unk4F4.base);
            phi_v1_2 = (s32) this->unk2C8;
        }
        temp_t7 = &globalCtx->colChkCtx;
        sp30 = &this->unk4F4;
        sp34 = temp_t7;
        if ((phi_v1_2 < 7) && (phi_v1_2 != 6)) {
            CollisionCheck_SetAT(globalCtx, temp_t7, &this->unk494.base);
            CollisionCheck_SetAT(globalCtx, sp34, &sp30->base);
        }
        CollisionCheck_SetOC(globalCtx, sp34, &sp30->base);
        if (this->unk2CE != 0) {
            CollisionCheck_SetAT(globalCtx, sp34, &this->unk554.base);
        }
    }
}

s32 func_80B20E6C(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    s16 temp_v0;

    temp_v0 = arg5->unk2C8;
    if (temp_v0 != 0xD) {
        if ((arg1 != 8) && ((temp_v0 == 7) || (temp_v0 == 0xA))) {
            *arg2 = NULL;
        }
        if ((arg1 == 8) && (arg5->params != 0)) {
            *arg2 = NULL;
        }
        if (arg1 == 8) {
            arg4->x += (s32) arg5->unk340;
            arg4->y += (s32) arg5->unk344;
            arg4->z += (s32) arg5->unk348;
            arg3->x += arg5->unk334;
            arg3->y += arg5->unk338;
            arg3->z += arg5->unk33C;
        }
    } else if ((arg1 + 7) != arg5->params) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80B20F70(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    Vec3f sp58;
    Vec3f sp4C;
    Vec3f *sp44;
    Vec3f *sp40;
    Vec3f *sp3C;
    Vec3f *sp38;
    Vec3f *temp_a0;
    Vec3f *temp_a0_2;
    Vec3f *temp_a1;
    Vec3f *temp_a1_2;
    f32 temp_f0;
    s16 temp_v0;

    SysMatrix_StatePush();
    if (arg4->unk2C8 != 0xD) {
        if (arg1 == 0xE) {
            SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x310);
        }
        if (arg1 == 0x17) {
            SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x31C);
        }
        if ((arg1 == 8) && (arg4->params == 0)) {
            SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x328);
            if (arg4->unk2CE != 0) {
                temp_f0 = arg4->unk15C;
                if ((temp_f0 > 26.0f) || ((s32) arg4->unk2C8 >= 7)) {
                    arg4->unk2CE = 0;
                    func_800A8514(Effect_GetParams(arg4->unk5D8));
                } else if ((temp_f0 > 0.0f) && (temp_f0 < 10.0f)) {
                    SysMatrix_InsertTranslation(0.0f, 0.0f, 0.0f, 1);
                    D_80B217CC.x = 1160.0f;
                    D_80B217D0 = 0.0f;
                    D_80B217D0 = -900.0f;
                    temp_a0 = arg4 + 0x5B8;
                    D_80B217D8.x = 100.0f;
                    temp_a1 = arg4 + 0x5A0;
                    D_80B217DC = 300.0f;
                    sp40 = temp_a1;
                    sp38 = temp_a0;
                    D_80B217E0 = 0.0f;
                    Math_Vec3f_Copy(temp_a0, temp_a1);
                    temp_a0_2 = arg4 + 0x5AC;
                    temp_a1_2 = arg4 + 0x594;
                    sp44 = temp_a1_2;
                    sp3C = temp_a0_2;
                    Math_Vec3f_Copy(temp_a0_2, temp_a1_2);
                    SysMatrix_MultiplyVector3fByState(&D_80B217CC, temp_a1);
                    SysMatrix_MultiplyVector3fByState(&D_80B217D8, temp_a1_2);
                    Collider_SetQuadVertices(arg4 + 0x554, temp_a1_2, sp40, sp3C, sp38);
                    SysMatrix_MultiplyVector3fByState(&D_80B217CC, &sp58);
                    SysMatrix_MultiplyVector3fByState(&D_80B217D8, &sp4C);
                    func_800A81F0(Effect_GetParams(arg4->unk5D8), &sp58, &sp4C);
                }
            }
        }
    } else {
        temp_v0 = arg4->params;
        if (((s32) temp_v0 >= 7) && ((arg1 + 7) == temp_v0)) {
            SysMatrix_MultiplyVector3fByState(&D_801D15B0, arg4 + 0x364);
        }
    }
    SysMatrix_StatePop();
    if ((arg4->unk2C8 != 0xD) && ((Collider_UpdateSpheres(arg1, arg4 + 0x494), Collider_UpdateSpheres(arg1, arg4 + 0x4F4), (arg1 == 1)) || (arg1 == 3) || (arg1 == 6) || (arg1 == 0xA) || (arg1 == 0xD) || (arg1 == 0x10) || (arg1 == 0x12) || (arg1 == 0x13) || (arg1 == 0x16) || (arg1 == 0x18) || (arg1 == 0x19))) {
        SysMatrix_GetStateTranslation(arg4 + (arg4->unk48C * 0xC) + 0x408);
        arg4->unk48C = (s16) (arg4->unk48C + 1);
        if ((s32) arg4->unk48C >= 0xB) {
            arg4->unk48C = 0;
        }
        if ((arg4->unk2C8 == 0xB) && ((s32) arg4->unk2D6 < 6) && ((arg1 == 1) || (arg1 == 3) || (arg1 == 6) || (arg1 == 0xA) || (arg1 == 0x10) || (arg1 == 0x13))) {
            Actor_Spawn(arg0 + 0x1CA0, arg0, 0x1E9, arg4->world.pos.x, arg4->world.pos.y, arg4->world.pos.z, (s16) (s32) arg4->world.rot.x, (s16) (s32) arg4->world.rot.y, (s16) (s32) arg4->world.rot.z, (s16) (arg1 + 7));
            arg4->unk2D6 = (s16) (arg4->unk2D6 + 1);
            if ((s32) arg4->unk2D6 >= 6) {
                arg4->unk2C8 = 0xC;
            }
        }
    }
}

void EnPp_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnPp *this = (EnPp *) thisx;
    MtxF sp64;
    Vec3f sp58;
    f32 sp50;
    GraphicsContext *sp4C;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    f32 temp_f18;
    f32 temp_f8;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_v0;
    f32 phi_f0;

    func_8012C2DC(globalCtx->state.gfxCtx);
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80B20E6C, func_80B20F70, &this->actor);
    temp_v0 = this->unk370;
    if (temp_v0 != 0) {
        phi_f0 = 0.4f;
        if (this->actor.params == 8) {
            phi_f0 = 0.6f;
        }
        func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk374, (s16) temp_v0, phi_f0, phi_f0, 1.0f, (u8) 1);
    }
    temp_v1 = this->unk3F2;
    if (temp_v1 != 0) {
        temp_f8 = (f32) temp_v1;
        temp_v0_2 = this->unk3F4;
        if ((temp_v0_2 == 0xB) || (temp_v0_2 == 0xA)) {
            this->unk3F8 += 0.3f;
            if (this->unk3F8 > 0.5f) {
                this->unk3F8 = 0.5f;
            }
            sp50 = temp_f8 * 0.05f;
            Math_ApproachF(&this->unk3FC, this->unk3F8, 0.1f, 0.04f);
        } else {
            this->unk3F8 = 0.8f;
            this->unk3FC = 0.8f;
        }
        func_800BE680(globalCtx, &this->actor, (Vec3f []) &this->unk408, 0xB, this->unk3F8, this->unk3FC, temp_f8 * 0.05f, (u8) (s32) this->unk3F4);
    }
    if (this->unk5D4 != 0) {
        temp_v0_3 = this->unk2C8;
        if ((temp_v0_3 != 7) && ((s32) temp_v0_3 < 9)) {
            temp_a0 = globalCtx->state.gfxCtx;
            sp4C = temp_a0;
            func_8012C448(temp_a0);
            temp_v0_4 = sp4C->polyXlu.p;
            sp4C->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w1 = 0xFF;
            temp_v0_4->words.w0 = 0xFA000000;
            Math_Vec3f_Copy(&sp58, &this->actor.world.pos);
            sp58.x += Math_SinS(this->actor.world.rot.y) * -13.0f;
            sp58.y = this->actor.floorHeight;
            temp_f18 = sp58.z + (Math_CosS(this->actor.world.rot.y) * -13.0f);
            sp58.z = temp_f18;
            func_800C0094(this->actor.floorPoly, sp58.x, sp58.y, temp_f18, &sp64);
            SysMatrix_InsertMatrix(&sp64, 0);
            Matrix_Scale(0.5f, 1.0f, 0.5f, 1);
            temp_v0_5 = sp4C->polyXlu.p;
            sp4C->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            temp_v0_5->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_6 = sp4C->polyXlu.p;
            sp4C->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) D_04076BC0;
            temp_v0_6->words.w0 = 0xDE000000;
        }
    }
}

