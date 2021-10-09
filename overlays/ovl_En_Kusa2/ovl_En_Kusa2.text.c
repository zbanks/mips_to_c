void func_80A5B160(EnKusa2 *arg0, GlobalContext *arg1); /* static */
void func_80A5B334(EnKusa2 *arg0, GlobalContext *arg1); /* static */
void func_80A5B3BC(EnKusa2 *arg0);                  /* static */
void func_80A5B490(EnKusa2 *arg0, GlobalContext *arg1); /* static */
void func_80A5B508(Actor *);                        /* static */
void func_80A5B954(f32 *arg0, f32 arg1, EnKusa2 *, GlobalContext *); /* static */
s32 func_80A5BA58(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A5BAFC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A5BB40(EnKusa2 *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80A5BD14(Actor *arg0, GlobalContext *arg1, s32 arg2); /* static */
void func_80A5BD94(Actor *arg0);                    /* static */
void func_80A5BDB0(EnKusa2 *arg0, GlobalContext *arg1); /* static */
void func_80A5BF38(EnKusa2 *arg0, s32 arg1);        /* static */
void func_80A5BF60(EnKusa2 *arg0, s32 arg1);        /* static */
void func_80A5BF84(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80A5BFD8(Actor *arg0, GlobalContext *arg1); /* static */
Vec3f *func_80A5C074(Vec3f *arg0);                  /* static */
f32 *func_80A5C0B8(s32 arg0);                       /* static */
Vec3f *func_80A5C104(Vec3f *arg1, f32 *arg2, f32 arg3, s16 arg4, s16 arg5, s32); /* static */
f32 *func_80A5C2FC(f32 arg1, Vec3f *arg2, Vec3f *arg3, f32 *arg4, s16 *arg5, s16 *); /* static */
void func_80A5C410(Vec3f *arg0, s32 arg1, Vec3f *arg2); /* static */
void func_80A5C70C(s32 arg0);                       /* static */
void func_80A5C718(void *arg0);                     /* static */
void func_80A5C7F0(Vec3f *arg0, Vec3f *arg1);       /* static */
void func_80A5C918(Vec3f *arg1, s32);               /* static */
void func_80A5CAD4(void *arg0);                     /* static */
void func_80A5CAF4(Vec3f *arg0);                    /* static */
void func_80A5CB74(Actor *arg0);                    /* static */
void func_80A5CCD4(EnKusa2 *arg0);                  /* static */
void func_80A5CD0C(EnKusa2 *arg0);                  /* static */
void func_80A5CF44(Actor *arg0);                    /* static */
void func_80A5D178(EnKusa2 *arg0);                  /* static */
void func_80A5D5E0(EnKusa2 *arg0);                  /* static */
void func_80A5D618(EnKusa2 *arg0);                  /* static */
void func_80A5D6B0(EnKusa2 *arg0);                  /* static */
void func_80A5D754(EnKusa2 *arg0);                  /* static */
void func_80A5D7A4(EnKusa2 *arg0);                  /* static */
void func_80A5D964(EnKusa2 *arg0);                  /* static */
void func_80A5DC70(EnKusa2 *arg0);                  /* static */
void func_80A5DE18(EnKusa2 *arg0);                  /* static */
void func_80A5E1D8(EnKusa2 *arg0);                  /* static */
void func_80A5E418(EnKusa2 *arg0);                  /* static */
void func_80A5E604(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A5E6F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A5E80C(GraphicsContext **arg0, s32 arg1, EnKusa2 *, GlobalContext *); /* static */
void func_80A5E9B4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A5EA48(GlobalContext *arg0, GlobalContext *arg1); /* static */
static ColliderCylinderInit D_80A5EAC0 = {
    {0xA, 0, 9, 0x29, 0x20, 1},
    {0, {0, 0, 0}, {0x580C71C, 0, 0}, 0, 1, 1},
    {6, 0x2C, 0, {0, 0, 0}},
};
static u8 D_80A5EAEC = 1;
static s16 D_80A5EAF0 = 0;
static ? D_80A5EAF4;                                /* unable to generate initializer */
static s16 D_80A5EAFC = 0;
static s16 D_80A5EAFE = 0;
static s16 D_80A5EB00 = 0;
static ? D_80A5EB04;                                /* unable to generate initializer */
static Vec3f D_80A5EB0C;                            /* type too large by 4; unable to generate initializer */
static f32 D_80A5EB14 = 0.0f;
static Vec3f D_80A5EB18;                            /* type too large by 4; unable to generate initializer */
static f32 D_80A5EB20 = 0.0f;
static ? D_80A5EB24;                                /* unable to generate initializer */
static s32 D_80A5EB48 = 0;
static s8 D_80A5EB4C = 0;
static InitChainEntry D_80A5EB50;                   /* unable to generate initializer */
static ? D_80A5EB68;                                /* unable to generate initializer */
static Vec3f D_80A5F1C0;
static u32 D_80A60900;
static ? D_80A60908;
static s16 D_80A60B08;
static s16 D_80A60B0A;
static s16 D_80A60B0C;
static s16 D_80A60B0E;
static s16 D_80A60B10;

typedef struct EnKusa2 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ void (*actionFunc)(EnKusa2 *, GlobalContext *);
    /* 0x0194 */ s32 unk194;                        /* inferred */
    /* 0x0198 */ char pad198[0x20];                 /* maybe part of unk194[9]? */
    /* 0x01B8 */ void *unk1B8;                      /* inferred */
    /* 0x01BC */ char pad1BC[0x2];
    /* 0x01BE */ s8 unk1BE;                         /* inferred */
    /* 0x01BF */ char pad1BF[0x1];                  /* maybe part of unk1BE[2]? */
    /* 0x01C0 */ Actor *unk1C0;                     /* inferred */
    /* 0x01C4 */ s16 unk1C4;                        /* inferred */
    /* 0x01C6 */ char pad1C6[0x2];                  /* maybe part of unk1C4[2]? */
    /* 0x01C8 */ s16 unk1C8;                        /* inferred */
    /* 0x01CA */ s16 unk1CA;                        /* inferred */
    /* 0x01CC */ s16 unk1CC;                        /* inferred */
    /* 0x01CE */ s8 unk1CE;                         /* inferred */
    /* 0x01CF */ u8 unk1CF;                         /* inferred */
    /* 0x01D0 */ s8 unk1D0;                         /* inferred */
    /* 0x01D1 */ s8 unk1D1;                         /* inferred */
    /* 0x01D2 */ char pad1D2[0x2];                  /* maybe part of unk1D1[3]? */
} EnKusa2;                                          /* size 0x1D4 */

void func_80A5B160(EnKusa2 *arg0, GlobalContext *arg1) {
    Actor **temp_s4;
    Actor **temp_v1;
    Actor *temp_v0;
    Actor *temp_v0_2;
    ActorContext *temp_s5;
    f32 temp_f20;
    f32 temp_f22;
    s16 temp_s1;
    s32 temp_s2;
    void *phi_s3;
    s32 phi_s2;

    if (arg0->unk194 == 0) {
        temp_v0 = Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x171, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) (Rand_Next() >> 0x10), (s16) 0, 1, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL);
        temp_v1 = arg0 + 0x194;
        *temp_v1 = temp_v0;
        if (temp_v0 != 0) {
            temp_v0->room = arg0->actor.room;
            (*temp_v1)->unk1C0 = arg0;
        }
    }
    phi_s3 = arg0 + 4;
    phi_s2 = 1;
    do {
        temp_s1 = (phi_s2 << 0xD) - 0x2000;
        if (phi_s3->unk194 == 0) {
            temp_s5 = &arg1->actorCtx;
            temp_s4 = phi_s3 + 0x194;
            temp_f20 = Math_SinS(temp_s1);
            temp_f22 = Math_CosS(temp_s1);
            temp_v0_2 = Actor_SpawnAsChildAndCutscene(temp_s5, arg1, 0x171, (temp_f20 * 80.0f) + arg0->actor.world.pos.x, arg0->actor.world.pos.y, (temp_f22 * 80.0f) + arg0->actor.world.pos.z, (s16) 0, (s16) (Rand_Next() >> 0x10), (s16) 0, 1, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL);
            *temp_s4 = temp_v0_2;
            if (temp_v0_2 != 0) {
                temp_v0_2->room = arg0->actor.room;
                (*temp_s4)->unk1C0 = arg0;
            }
        }
        temp_s2 = phi_s2 + 1;
        phi_s3 += 4;
        phi_s2 = temp_s2;
    } while (temp_s2 != 9);
}

void func_80A5B334(EnKusa2 *arg0, GlobalContext *arg1) {
    Actor **temp_s0;
    s32 temp_s2;
    EnKusa2 *phi_s1;
    s32 phi_s2;

    phi_s1 = arg0;
    phi_s2 = 0;
    do {
        temp_s0 = phi_s1 + 0x194;
        if (phi_s1->unk194 != 0) {
            if (Actor_HasParent(*temp_s0, arg1) == 0) {
                Actor_MarkForDeath(*temp_s0);
            }
            *temp_s0 = NULL;
        }
        temp_s2 = phi_s2 + 4;
        phi_s1 += 4;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x24);
}

void func_80A5B3BC(EnKusa2 *arg0) {
    s32 temp_v1_2;
    void **temp_v0;
    void **temp_v0_2;
    void **temp_v0_3;
    void **temp_v0_4;
    void **temp_v1;
    void *phi_a1;
    s32 phi_v1;

    phi_a1 = arg0 + 4;
    if (arg0->unk194 != 0) {
        temp_v1 = arg0 + 0x194;
        if ((*temp_v1)->unk138 == 0) {
            *temp_v1 = NULL;
        }
    }
    phi_v1 = 4;
    do {
        temp_v1_2 = phi_v1 + 0x10;
        temp_v0 = phi_a1 + 0x194;
        phi_v1 = temp_v1_2;
        if ((phi_a1->unk194 != 0) && ((*temp_v0)->unk138 == 0)) {
            *temp_v0 = NULL;
        }
        temp_v0_2 = phi_a1 + 0x198;
        if ((phi_a1->unk198 != 0) && ((*temp_v0_2)->unk138 == 0)) {
            *temp_v0_2 = NULL;
        }
        temp_v0_3 = phi_a1 + 0x19C;
        if ((phi_a1->unk19C != 0) && ((*temp_v0_3)->unk138 == 0)) {
            *temp_v0_3 = NULL;
        }
        temp_v0_4 = phi_a1 + 0x1A0;
        if ((phi_a1->unk1A0 != 0) && ((*temp_v0_4)->unk138 == 0)) {
            *temp_v0_4 = NULL;
        }
        phi_a1 += 0x10;
    } while (temp_v1_2 != 0x24);
}

void func_80A5B490(EnKusa2 *arg0, GlobalContext *arg1) {
    Actor_SpawnAsChildAndCutscene(arg1 + 0x1CA0, arg1, 0x28C, arg0->actor.world.pos.x, arg0->actor.world.pos.y, arg0->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (((s32) arg0->actor.params >> 8) & 0x7F) << 9, (u32) arg0->actor.cutscene, (s32) arg0->actor.unk20, NULL);
}

void func_80A5B508(void) {
    f32 spB4;
    f32 spAC;
    f32 spA8;
    f32 sp90;
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 sp80;
    f32 sp7C;
    f32 sp78;
    f32 sp74;
    f32 sp50;
    f32 sp4C;
    ? *temp_v0;
    f32 *temp_v1;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f26_2;
    f32 temp_f28;
    f32 temp_f2;
    f32 temp_f2_2;
    f32 temp_f30;
    f32 temp_f30_2;
    s32 temp_a1;
    ? *phi_v0;
    s32 phi_a0;

    D_80A60B08 += 0x46;
    D_80A60B0A += 0x12C;
    D_80A60B0C += 0x2BC;
    D_80A60B0E += 0x514;
    D_80A60B10 += 0x22C4;
    temp_f28 = Math_SinS(D_80A60B08);
    spB4 = Math_SinS(D_80A60B0A);
    temp_f30 = Math_SinS(D_80A60B0C);
    spAC = Math_SinS(D_80A60B0E) * 1.2f;
    spA8 = Math_SinS(D_80A60B10) * 1.5f;
    temp_f26 = Math_CosS(D_80A60B08);
    temp_f20 = Math_CosS(D_80A60B0A);
    temp_f22 = Math_CosS(D_80A60B0C);
    temp_f24 = Math_CosS(D_80A60B0E) * 1.3f;
    temp_f2 = Math_CosS(D_80A60B10) * 1.7f;
    temp_f12 = spAC - temp_f20;
    temp_v1 = &sp74;
    sp74 = (temp_f28 - temp_f20) * temp_f30 * temp_f26 * temp_f28;
    temp_f18 = (spB4 - temp_f22) * spAC * temp_f20 * temp_f28;
    sp78 = temp_f18;
    sp7C = (temp_f30 - temp_f24) * temp_f22 * temp_f28 * temp_f26;
    temp_f10 = temp_f12 * temp_f24 * spB4 * temp_f26;
    sp80 = temp_f10;
    sp84 = (temp_f28 - temp_f22) * temp_f28 * spB4 * spA8;
    sp88 = (spB4 - temp_f24) * temp_f30 * spAC * spA8;
    sp8C = (temp_f30 - temp_f26) * temp_f26 * temp_f20 * temp_f2;
    sp90 = temp_f12 * temp_f22 * temp_f24 * temp_f2;
    sp50 = temp_f18 * 0.2f;
    sp4C = temp_f10 * 0.2f;
    phi_v0 = &D_80A60908;
    phi_a0 = 0;
    do {
        temp_a1 = phi_a0 + 4;
        temp_f14 = temp_v1[(phi_a0 + 1) & 7];
        temp_f2_2 = temp_v1[(phi_a0 + 2) & 7];
        temp_f16 = temp_v1[(phi_a0 + 3) & 7];
        temp_f22_2 = temp_v1[temp_a1 & 7];
        temp_f26_2 = temp_v1[(phi_a0 + 5) & 7];
        temp_f30_2 = temp_v1[(phi_a0 + 6) & 7];
        phi_v0->unk40 = sp50;
        phi_v0->unk0 = sp50;
        phi_v0->unk14 = sp74;
        phi_v0->unk28 = sp4C;
        phi_v0->unk80 = sp50;
        phi_v0->unk68 = sp4C;
        phi_v0->unk54 = sp74;
        phi_v0->unk94 = sp74;
        phi_v0->unkFC = 0.0f;
        phi_v0->unkF8 = 0.0f;
        phi_v0->unkF4 = 0.0f;
        phi_v0->unkF0 = 0.0f;
        phi_v0->unkEC = 0.0f;
        phi_v0->unkDC = 0.0f;
        phi_v0->unkCC = 0.0f;
        phi_v0->unkBC = 0.0f;
        phi_v0->unkB8 = 0.0f;
        phi_v0->unkB4 = 0.0f;
        phi_v0->unkB0 = 0.0f;
        phi_v0->unkAC = 0.0f;
        phi_v0->unk9C = 0.0f;
        phi_v0->unk8C = 0.0f;
        phi_v0->unk7C = 0.0f;
        phi_v0->unk78 = 0.0f;
        phi_v0->unk74 = 0.0f;
        phi_v0->unk70 = 0.0f;
        phi_v0->unk6C = 0.0f;
        phi_v0->unk5C = 0.0f;
        phi_v0->unk4C = 0.0f;
        temp_v0 = phi_v0 + 0x100;
        temp_v0->unk-F4 = 0.0f;
        temp_v0->unk-E4 = 0.0f;
        temp_v0->unk-D4 = 0.0f;
        temp_v0->unk-D0 = 0.0f;
        temp_v0->unk-CC = 0.0f;
        temp_v0->unk-C8 = 0.0f;
        temp_v0->unk-C4 = 0.0f;
        temp_v0->unk-FC = (f32) temp_v1[phi_a0 & 7];
        temp_v0->unk-BC = temp_f14;
        temp_v0->unk-F8 = temp_f14;
        temp_v0->unk-7C = temp_f2_2;
        temp_v0->unk-B8 = temp_f2_2;
        temp_v0->unk-F0 = temp_f2_2;
        temp_v0->unk-E8 = temp_f2_2;
        temp_v0->unk-3C = temp_f16;
        temp_v0->unk-78 = temp_f16;
        temp_v0->unk-A8 = temp_f16;
        temp_v0->unk-B0 = temp_f16;
        temp_v0->unk-E0 = temp_f16;
        temp_v0->unk-38 = temp_f22_2;
        temp_v0->unk-68 = temp_f22_2;
        temp_v0->unk-70 = temp_f22_2;
        temp_v0->unk-A0 = temp_f22_2;
        temp_v0->unk-DC = temp_f22_2;
        temp_v0->unk-28 = temp_f26_2;
        temp_v0->unk-30 = temp_f26_2;
        temp_v0->unk-60 = temp_f26_2;
        temp_v0->unk-9C = temp_f26_2;
        temp_v0->unk-20 = temp_f30_2;
        temp_v0->unk-5C = temp_f30_2;
        temp_v0->unk-1C = (f32) temp_v1[(phi_a0 + 7) & 7];
        temp_v0->unk-18 = sp4C;
        temp_v0->unk-58 = sp4C;
        temp_v0->unk-40 = sp50;
        temp_v0->unk-2C = sp74;
        phi_v0 = temp_v0;
        phi_a0 = temp_a1;
    } while (temp_a1 != 8);
}

void func_80A5B954(f32 *arg0, f32 arg1) {
    MtxF *temp_v0;
    MtxF *temp_v1;
    f32 *temp_a0;
    f32 temp_f16;
    f32 temp_f16_2;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_a1;
    void *temp_a0_2;
    void *temp_v1_2;
    f32 phi_f18;
    f32 phi_f16;
    MtxF *phi_v1;
    f32 *phi_a0;
    s32 phi_a1;
    f32 phi_f18_2;
    f32 phi_f16_2;
    MtxF *phi_v1_2;
    f32 *phi_a0_2;

    arg1 = arg1;
    temp_v0 = SysMatrix_GetCurrentState();
    temp_f18 = temp_v0->mf[0][0];
    temp_f16 = *arg0 * arg1;
    phi_f18 = temp_f18;
    phi_f16 = temp_f16;
    phi_v1 = temp_v0;
    phi_a0 = arg0;
    phi_a1 = 4;
    phi_f18_2 = temp_f18;
    phi_f16_2 = temp_f16;
    phi_v1_2 = temp_v0;
    phi_a0_2 = arg0;
    if (4 != 0x10) {
        do {
            phi_v1->mf[0][0] = phi_f18 + phi_f16;
            temp_f18_2 = phi_v1->mf[1][0];
            temp_a1 = phi_a1 + 4;
            temp_a0 = phi_a0 + 0x10;
            temp_v1 = phi_v1 + 0x10;
            temp_v1->unk-C = (f32) (phi_v1->mf[0][1] + (phi_a0->unk4 * arg1));
            temp_v1->unk-8 = (f32) (phi_v1->mf[0][2] + (temp_a0->unk-8 * arg1));
            temp_v1->unk-4 = (f32) (phi_v1->mf[0][3] + (temp_a0->unk-4 * arg1));
            temp_f16_2 = temp_a0->unk0 * arg1;
            phi_f18 = temp_f18_2;
            phi_f16 = temp_f16_2;
            phi_v1 = temp_v1;
            phi_a0 = temp_a0;
            phi_a1 = temp_a1;
            phi_f18_2 = temp_f18_2;
            phi_f16_2 = temp_f16_2;
            phi_v1_2 = temp_v1;
            phi_a0_2 = temp_a0;
        } while (temp_a1 != 0x10);
    }
    phi_v1_2->mf[0][0] = phi_f18_2 + phi_f16_2;
    temp_a0_2 = phi_a0_2 + 0x10;
    temp_v1_2 = phi_v1_2 + 0x10;
    temp_v1_2->unk-C = (f32) (phi_v1_2->mf[0][1] + (phi_a0_2->unk4 * arg1));
    temp_v1_2->unk-8 = (f32) (phi_v1_2->mf[0][2] + (temp_a0_2->unk-8 * arg1));
    temp_v1_2->unk-4 = (f32) (phi_v1_2->mf[0][3] + (temp_a0_2->unk-4 * arg1));
}

s32 func_80A5BA58(Actor *arg0, GlobalContext *arg1) {
    f32 sp2C;
    f32 sp28;
    f32 sp24;
    s32 sp20;
    Actor *temp_a3;
    CollisionPoly **temp_a1;
    f32 temp_f0;
    f32 temp_f16;
    s32 temp_cond;
    s32 phi_v0;

    temp_a3 = arg0;
    sp24 = temp_a3->world.pos.x;
    temp_a1 = temp_a3 + 0x80;
    sp28 = temp_a3->world.pos.y + 30.0f;
    temp_f16 = temp_a3->world.pos.z;
    arg0 = temp_a3;
    sp2C = temp_f16;
    temp_f0 = func_800C411C(arg1 + 0x830, temp_a1, &sp20, temp_a3, (Vec3f *) &sp24);
    temp_cond = temp_f0 > -32000.0f;
    arg0->floorHeight = temp_f0;
    phi_v0 = 0;
    if (temp_cond) {
        arg0->floorBgId = (u8) sp20;
        arg0->world.pos.y = arg0->floorHeight;
        Math_Vec3f_Copy(&arg0->home.pos, &arg0->world.pos);
        phi_v0 = 1;
    }
    return phi_v0;
}

void func_80A5BAFC(Actor *arg0, GlobalContext *arg1) {
    Actor_UpdateBgCheckInfo(arg1, arg0, 15.0f, 35.0f, 0.0f, 0x45U);
}

void func_80A5BB40(EnKusa2 *arg0, GlobalContext *arg1, s32 arg2) {
    f32 sp8C;
    f32 sp88;
    f32 sp84;
    f32 *temp_s4;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s16 temp_s0;
    s32 temp_s1;
    s32 phi_s1;

    if ((arg0->actor.flags & 0x40) != 0) {
        phi_s1 = 0;
        if (arg2 >= 0) {
            temp_s4 = &sp84;
            do {
                temp_s0 = Rand_S16Offset(-0x3E80, 0x7D00) + arg0->actor.world.rot.y;
                temp_f20 = Math_SinS(temp_s0);
                temp_f22 = Math_CosS(temp_s0);
                temp_f24 = Rand_ZeroOne() * -12.0f;
                sp84 = (temp_f20 * temp_f24) + arg0->actor.world.pos.x;
                sp88 = (Rand_ZeroOne() * 8.0f) + 2.0f + arg0->actor.world.pos.y;
                D_80A5EB18.x = temp_f20 * -0.9f;
                D_80A5EB20 = temp_f22 * -0.9f;
                sp8C = (temp_f22 * temp_f24) + arg0->actor.world.pos.z;
                D_80A5EB0C.x = D_80A5EB18.x * -0.09f;
                D_80A5EB14 = D_80A5EB20 * -0.09f;
                func_800B1210(arg1, (Vec3f *) temp_s4, &D_80A5EB18, &D_80A5EB0C, (s16) 0xA, (s16) 0x32);
                temp_s1 = phi_s1 + 1;
                phi_s1 = temp_s1;
            } while ((arg2 + 1) != temp_s1);
        }
    }
}

void func_80A5BD14(Actor *arg0, GlobalContext *arg1, s32 arg2) {
    void *sp1C;
    void *temp_v0;

    temp_v0 = arg0->unk1C0;
    if (temp_v0 != 0) {
        if ((s32) temp_v0->unk1BC >= 9) {
            temp_v0->unk1BC = 8;
        }
        sp1C = temp_v0;
        Item_DropCollectible(arg1, arg0 + 0x24, *(&D_80A5EB24 + (temp_v0->unk1BC * 4)));
        temp_v0->unk1BC = (s16) (temp_v0->unk1BC + arg2);
    }
}

void func_80A5BD94(Actor *arg0) {
    void *temp_v0;

    temp_v0 = arg0->unk1C0;
    if (temp_v0 != 0) {
        temp_v0->unk1BE = 1;
    }
}

void func_80A5BDB0(EnKusa2 *arg0, GlobalContext *arg1) {
    f32 sp58;
    f32 sp54;
    f32 sp50;
    f32 *temp_s3;
    s32 temp_s1;
    s16 phi_s0;
    s32 phi_s1;

    sp54 = arg0->actor.world.pos.y + arg0->actor.yDistToWater;
    temp_s3 = &sp50;
    phi_s0 = 0;
    phi_s1 = 0;
    do {
        sp50 = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + arg0->actor.world.pos.x;
        sp58 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s0)) * 15.0f) + arg0->actor.world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0xBE);
        temp_s1 = phi_s1 + 1;
        phi_s0 = (s16) (phi_s0 + 0x4000);
        phi_s1 = temp_s1;
    } while (temp_s1 != 4);
    sp50 = arg0->actor.world.pos.x;
    sp58 = arg0->actor.world.pos.z;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0x118);
    EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_s3, 0x12C, 0x2BC, (s16) 0);
    Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x28, 0x28C5U);
}

void func_80A5BF38(EnKusa2 *arg0, s32 arg1) {
    u8 temp_t8;

    temp_t8 = arg0->actor.shape.shadowAlpha + arg1;
    arg0->actor.shape.shadowAlpha = temp_t8;
    if ((temp_t8 & 0xFF) >= 0x3D) {
        arg0->actor.shape.shadowAlpha = 0x3C;
    }
}

void func_80A5BF60(EnKusa2 *arg0, s32 arg1) {
    s32 temp_v0;

    temp_v0 = arg0->actor.shape.shadowAlpha - arg1;
    if (temp_v0 > 0) {
        arg0->actor.shape.shadowAlpha = (u8) temp_v0;
        return;
    }
    arg0->actor.shape.shadowAlpha = 0;
}

void func_80A5BF84(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    CollisionCheckContext *sp18;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    temp_a1 = arg0 + 0x144;
    sp1C = temp_a1;
    Collider_UpdateCylinder(arg0, temp_a1);
    temp_a1_2 = arg1 + 0x18884;
    sp18 = temp_a1_2;
    CollisionCheck_SetAC(arg1, temp_a1_2, &sp1C->base);
    CollisionCheck_SetOC(arg1, temp_a1_2, &sp1C->base);
}

s32 func_80A5BFD8(Actor *arg0, GlobalContext *arg1) {
    s32 phi_a2;

    if ((arg0->unk155 & 2) != 0) {
        func_80A5CF44(arg0);
        phi_a2 = 0;
        if (*arg0->unk180 & 0x1000000) {
            phi_a2 = 1;
        }
        func_80A5BD14(arg0, arg1, phi_a2);
        Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x14, 0x284EU);
        func_80A5BD94(arg0);
        Actor_MarkForDeath(arg0);
        return 1;
    }
    return 0;
}

Vec3f *func_80A5C074(Vec3f *arg0) {
    s16 temp_v0;
    s32 temp_a1;
    Vec3f *phi_a2;
    Vec3f *phi_v1;
    s32 phi_a1;
    Vec3f *phi_v1_2;
    Vec3f *phi_v1_3;

    phi_a2 = arg0 + 0x80;
    phi_v1 = arg0;
    phi_a1 = 0x80;
loop_1:
    temp_v0 = phi_a2->unk26;
    temp_a1 = phi_a1 + 0x80;
    phi_a1 = temp_a1;
    phi_v1_3 = phi_v1;
    if (((s32) temp_v0 >= (s32) phi_v1->unk26) || (phi_v1_2 = phi_a2, phi_v1_3 = phi_a2, ((s32) temp_v0 > 0))) {
        phi_a2 += 0x80;
        phi_v1 = phi_v1_3;
        phi_v1_2 = phi_v1_3;
        if (temp_a1 != 0x480) {
            goto loop_1;
        }
    }
    return phi_v1_2;
}

f32 *func_80A5C0B8(s32 arg0) {
    f32 *temp_v1;
    s32 temp_a1;
    void *phi_a2;
    f32 *phi_v1;
    s32 phi_a1;
    f32 *phi_v1_2;
    f32 *phi_v1_3;

    phi_a2 = arg0 + 0x30;
    phi_v1 = arg0 + 0x480;
    phi_a1 = 0x30;
loop_1:
    temp_a1 = phi_a1 + 0x30;
    phi_a1 = temp_a1;
    phi_v1_3 = phi_v1;
    if (((s32) phi_a2->unk4AC >= (s32) phi_v1->unk2C) || (temp_v1 = phi_a2 + 0x480, phi_v1_2 = temp_v1, phi_v1_3 = temp_v1, ((s32) temp_v1->unk2C > 0))) {
        phi_a2 += 0x30;
        phi_v1 = phi_v1_3;
        phi_v1_2 = phi_v1_3;
        if (temp_a1 != 0x12C0) {
            goto loop_1;
        }
    }
    return phi_v1_2;
}

Vec3f *func_80A5C104(Vec3f *arg1, f32 *arg2, f32 arg3, s16 arg4, s16 arg5) {
    f32 sp20;
    Vec3f *temp_s0;
    Vec3f *temp_v0;
    f32 temp_f12;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_v0_2;
    s16 phi_v0;

    temp_v0 = func_80A5C074();
    temp_s0 = temp_v0;
    Math_Vec3f_Copy(temp_v0, arg1);
    Math_Vec3f_Copy(temp_s0 + 0xC, &D_801D15B0);
    temp_s0->unk18 = arg2;
    temp_v0_2 = D_80A5EB48 + 1;
    temp_s0->unk1C = arg3;
    temp_s0->unk20 = arg4;
    temp_s0->unk22 = arg5;
    if (temp_v0_2 >= 3) {
        D_80A5EB48 = 0;
        phi_v0 = Rand_S16Offset(0x28, 0x28);
    } else {
        D_80A5EB48 = temp_v0_2;
        phi_v0 = Rand_S16Offset(0x1E, 0x14);
    }
    temp_s0->unk26 = phi_v0;
    temp_s0->unk24 = (s16) (temp_s0->unk26 - 0x14);
    temp_s0->unk28 = func_80A5C70C;
    temp_s0->unk2C = 0.0f;
    temp_s0->unk30 = 0.0f;
    temp_f12 = 1.0f / (f32) temp_s0->unk24;
    sp20 = temp_f12;
    temp_f6 = Rand_ZeroOne() * 60.0f;
    temp_s0->unk3C = 40.0f;
    temp_f2 = temp_f6 + 20.0f;
    temp_s0->unk40 = -1.5f;
    temp_s0->unk34 = (f32) (temp_f2 * 0.05f);
    temp_s0->unk38 = (f32) (temp_f2 * temp_f12);
    temp_s0->unk48 = 140.0f;
    temp_s0->unk44 = (f32) (-50.0f * temp_f12);
    temp_s0->unk4C = 19600.0f;
    temp_s0->unk5C = 0.05f;
    temp_s0->unk54 = 327.68f;
    temp_s0->unk50 = 819.2f;
    temp_s0->unk58 = 2.5f;
    temp_s0->unk60 = (f32) (3.5f * temp_f12);
    temp_s0->unk64 = 0.35f;
    temp_s0->unk68 = 0.0875f;
    temp_s0->unk6C = 160.0f;
    temp_s0->unk70 = 25600.0f;
    temp_s0->unk7C = 327.68f;
    temp_s0->unk74 = 204.8f;
    temp_s0->unk78 = 100.0f;
    return temp_s0;
}

f32 *func_80A5C2FC(f32 arg1, Vec3f *arg2, Vec3f *arg3, f32 *arg4, s16 *arg5) {
    Vec3f *temp_a0;
    f32 *temp_s0;
    f32 *temp_v0;
    f32 phi_f8;

    temp_v0 = func_80A5C0B8();
    temp_s0 = temp_v0;
    temp_a0 = temp_v0 + 4;
    temp_v0->unk0 = arg1;
    Math_Vec3f_Copy(temp_a0, arg2);
    Math_Vec3f_Copy(temp_s0 + 0x10, arg3);
    if (arg1 >= 0.35f) {
        phi_f8 = 0.85714287f;
        goto block_5;
    }
    if (arg1 <= 0.1f) {
        temp_s0->unk1C = 1.0f;
    } else {
        phi_f8 = (0.02f / arg1) + 0.8f;
block_5:
        temp_s0->unk1C = phi_f8;
    }
    temp_s0->unk20 = (unaligned s32) arg4->unk0;
    temp_s0->unk24 = (u16) arg4->unk4;
    temp_s0->unk26 = (unaligned s32) arg5->unk0;
    temp_s0->unk2A = (u16) arg5->unk4;
    temp_s0->unk2C = Rand_S16Offset(0x41, 0x1E);
    return temp_s0;
}

void func_80A5C410(Vec3f *arg0, s32 arg1, Vec3f *arg2) {
    Vec3f sp98;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f20;
    s32 temp_s3;
    Vec3f *phi_s0;
    s32 phi_v0;
    s32 phi_s2;
    f32 phi_f22;
    f32 phi_f20;
    f32 phi_f2;
    s32 phi_s3;

    Math_Vec3f_Copy(arg2, &D_801D15B0);
    phi_s0 = arg0;
    phi_s3 = 0;
    do {
        if ((s32) phi_s0->unk26 > 0) {
            Math_Vec3f_Diff(arg1 + 4, phi_s0, &sp98);
            temp_f0 = Math3D_LengthSquared(&sp98);
            phi_v0 = 0;
            if (temp_f0 <= phi_s0->unk4C) {
                phi_v0 = 1;
            }
            phi_s2 = 0;
            if (temp_f0 <= phi_s0->unk70) {
                phi_s2 = 1;
            }
            if ((phi_v0 != 0) || (phi_s2 != 0)) {
                if (temp_f0 < 0.0001f) {
                    phi_f22 = 0.0f;
                } else {
                    phi_f22 = sqrtf(temp_f0);
                }
                if (phi_v0 != 0) {
                    if (phi_f22 > 1.0f) {
                        phi_f20 = 1.0f / phi_f22;
                    } else {
                        phi_f20 = 1.0f;
                    }
                    temp_f0_2 = phi_s0->unk3C;
                    if (phi_f22 < temp_f0_2) {
                        phi_f2 = Math_SinS((s16) (s32) (phi_s0->unk50 * phi_f22)) * -phi_s0->unk2C;
                    } else {
                        phi_f2 = (Math_CosS((s16) (s32) (phi_s0->unk54 * (phi_f22 - temp_f0_2))) + 1.0f) * phi_s0->unk30;
                    }
                    temp_f0_3 = -(phi_f20 * phi_f2);
                    arg2->x += sp98.x * temp_f0_3;
                    arg2->z += sp98.z * temp_f0_3;
                    if (phi_s2 != 0) {
                        arg2->x += phi_f20 * sp98.z * phi_s0->unk58;
                        arg2->z -= phi_f20 * sp98.x * phi_s0->unk58;
                    }
                }
                if ((phi_s2 != 0) && (fabsf(sp98.y) < phi_s0->unk78)) {
                    temp_f20 = Math_CosS((s16) (s32) (phi_s0->unk7C * sp98.y));
                    arg2->y += phi_s0->unk68 * (Math_CosS((s16) (s32) (phi_s0->unk74 * phi_f22)) + 1.0f) * (temp_f20 + 1.0f);
                }
            }
        }
        temp_s3 = phi_s3 + 0x80;
        phi_s0 += 0x80;
        phi_s3 = temp_s3;
    } while (temp_s3 != 0x480);
    arg2->y -= 0.5f;
}

void func_80A5C70C(s32 arg0) {

}

void func_80A5C718(void *arg0) {
    f32 temp_f2;
    f32 temp_f4;

    Math_ScaledStepToS(arg0 + 0x20, arg0->unk22, 0x4B0);
    if ((arg0->unk1C > 0.0f) && (Rand_ZeroOne() < 0.05f)) {
        arg0->unk1C = (f32) -arg0->unk1C;
    }
    temp_f4 = Math_SinS(arg0->unk22) * arg0->unk18;
    arg0->unk10 = (f32) (arg0->unk10 + arg0->unk1C);
    arg0->unkC = temp_f4;
    temp_f2 = Math_CosS(arg0->unk22) * arg0->unk18;
    arg0->unk14 = temp_f2;
    arg0->unk0 = (f32) (arg0->unk0 + arg0->unkC);
    arg0->unk4 = (f32) (arg0->unk4 + arg0->unk10);
    arg0->unk8 = (f32) (arg0->unk8 + temp_f2);
}

void func_80A5C7F0(Vec3f *arg0, Vec3f *arg1) {
    Vec3f *temp_a0;
    f32 temp_f0;
    s16 temp_v0;

    temp_a0 = arg1;
    temp_v0 = temp_a0->unk26;
    if ((s32) temp_v0 > 0) {
        temp_a0->unk26 = (s16) (temp_v0 - 1);
        arg1 = temp_a0;
        temp_a0->unk28(temp_a0);
        if ((s32) arg1->unk26 >= (s32) arg1->unk24) {
            arg1->unk2C = (f32) (arg1->unk2C + arg1->unk34);
            arg1->unk3C = (f32) (arg1->unk3C + arg1->unk40);
            arg1->unk58 = (f32) (arg1->unk58 + arg1->unk5C);
        } else {
            arg1->unk2C = (f32) (arg1->unk2C - arg1->unk38);
            if (arg1->unk2C < 0.0f) {
                arg1->unk2C = 0.0f;
            }
            arg1->unk58 = (f32) (arg1->unk58 - arg1->unk60);
            arg1->unk3C = (f32) (arg1->unk3C - arg1->unk44);
            if (arg1->unk58 < 0.0f) {
                arg1->unk58 = 0.0f;
            }
        }
        temp_f0 = arg1->unk3C;
        arg1->unk30 = (f32) (arg1->unk2C * 0.5f);
        arg1->unk50 = (f32) (32768.0f / temp_f0);
        arg1->unk54 = (f32) (32768.0f / (arg1->unk48 - temp_f0));
    }
}

void func_80A5C918(Vec3f *arg1) {
    Vec3f sp4C;
    f32 sp40;
    f32 sp3C;
    f32 sp38;
    f32 sp34;
    f32 sp2C;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f12;
    f32 temp_f12_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;
    s16 temp_v0;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f0_3;

    temp_v0 = arg1->unk2C;
    if ((s32) temp_v0 > 0) {
        arg1->unk2C = (s16) (temp_v0 - 1);
        func_80A5C410(&sp4C);
        temp_f12 = arg1->unk1C;
        arg1->unk10 = (f32) (arg1->unk10 + sp4C.x);
        temp_f2 = arg1->unk10;
        arg1->unk14 = (f32) (arg1->unk14 + sp4C.y);
        arg1->unk18 = (f32) (arg1->unk18 + sp4C.z);
        temp_f0 = temp_f12 * 0.06f;
        sp38 = temp_f2 * temp_f0;
        temp_f16 = arg1->unk14;
        sp3C = temp_f16 * temp_f0;
        temp_f14 = arg1->unk18;
        temp_f18 = temp_f12 * 0.004f;
        sp40 = temp_f14 * temp_f0;
        temp_f10 = temp_f2 * temp_f2 * temp_f18;
        sp2C = temp_f10;
        temp_f12_2 = temp_f16 * temp_f16 * temp_f18;
        sp34 = temp_f14 * temp_f14 * temp_f18;
        if (temp_f2 > 0.0f) {
            phi_f0 = temp_f10;
        } else {
            phi_f0 = -sp2C;
        }
        arg1->unk10 = (f32) (temp_f2 - (sp38 + phi_f0));
        if (temp_f16 > 0.0f) {
            phi_f0_2 = temp_f12_2;
        } else {
            phi_f0_2 = -temp_f12_2;
        }
        temp_f14_2 = arg1->unk18;
        arg1->unk14 = (f32) (temp_f16 - (sp3C + phi_f0_2));
        if (temp_f14_2 > 0.0f) {
            phi_f0_3 = sp34;
        } else {
            phi_f0_3 = -sp34;
        }
        arg1->unk18 = (f32) (temp_f14_2 - (sp40 + phi_f0_3));
        arg1->y += arg1->unk10;
        arg1->z += arg1->unk14;
        arg1->unkC = (f32) (arg1->unkC + arg1->unk18);
        arg1->unk20 = (s16) (arg1->unk20 + arg1->unk26);
        arg1->unk22 = (s16) (arg1->unk22 + arg1->unk28);
        arg1->unk24 = (s16) (arg1->unk24 + arg1->unk2A);
    }
}

void func_80A5CAD4(void *arg0) {
    bzero(arg0, 0x1740);
}

void func_80A5CAF4(Vec3f *arg0) {
    s32 temp_s0;
    s32 temp_s0_2;
    Vec3f *phi_s1;
    s32 phi_s0;
    s32 phi_s1_2;
    s32 phi_s0_2;

    phi_s1 = arg0;
    phi_s0 = 0;
    phi_s0_2 = 0;
    do {
        func_80A5C7F0(arg0, phi_s1);
        temp_s0 = phi_s0 + 0x80;
        phi_s1 += 0x80;
        phi_s0 = temp_s0;
    } while (temp_s0 < 0x480);
    phi_s1_2 = arg0 + 0x480;
    do {
        func_80A5C918(arg0, phi_s1_2);
        temp_s0_2 = phi_s0_2 + 0x30;
        phi_s1_2 += 0x30;
        phi_s0_2 = temp_s0_2;
    } while (temp_s0_2 != 0x12C0);
}

void func_80A5CB74(Actor *arg0) {
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3E;
    s16 sp3C;
    f32 sp38;
    s16 sp36;
    Actor *temp_a1;
    f32 temp_f0;
    s16 phi_v1;
    f32 phi_f2;

    sp40 = arg0->world.pos.x;
    sp44 = arg0->world.pos.y + 20.0f;
    sp48 = arg0->world.pos.z;
    sp3E = Rand_S16Offset(-0x2710, 0x4E20) + arg0->world.rot.y;
    temp_a1 = arg0->unk1C0;
    phi_v1 = 0;
    if (temp_a1 != 0) {
        sp36 = Actor_YawBetweenActors(arg0, temp_a1);
        phi_v1 = (s16) (Rand_S16Offset(-0xFA0, 0x1F40) + sp36);
    }
    D_80A5EB4C = (s8) (D_80A5EB4C + 1) & 7;
    sp3C = phi_v1;
    temp_f0 = Rand_ZeroOne();
    if (D_80A5EB4C == 0) {
        phi_f2 = temp_f0 * 0.70000005f;
    } else {
        phi_f2 = temp_f0 * temp_f0 * 0.4f;
    }
    sp3C = phi_v1;
    sp38 = phi_f2;
    arg0->unk1B8 = func_80A5C104(&D_80A5F1C0, &sp40, (Rand_ZeroOne() * 3.5f) + 4.0f, (bitwise s16) phi_f2, (s16) (s32) sp3E, (s32) phi_v1);
}

void func_80A5CCD4(EnKusa2 *arg0) {
    void *temp_v0;

    temp_v0 = arg0->unk1B8;
    if (temp_v0 != 0) {
        temp_v0->unk0 = (f32) arg0->actor.world.pos.x;
        temp_v0->unk4 = (f32) (arg0->actor.world.pos.y + 20.0f);
        temp_v0->unk8 = (f32) arg0->actor.world.pos.z;
    }
}

void func_80A5CD0C(EnKusa2 *arg0) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp98;
    s16 sp96;
    s16 sp94;
    s16 sp90;
    s16 sp8E;
    s16 sp8C;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f20;
    s16 *temp_s6;
    s16 *temp_s7;
    s16 temp_s0;
    s32 temp_s1;
    s32 phi_s1;

    temp_s7 = &sp8C;
    temp_s6 = &sp94;
    temp_s5 = &sp9C;
    temp_s4 = &spA8;
    phi_s1 = 0;
    do {
        temp_s0 = Rand_Next();
        temp_f20 = Rand_ZeroOne() * 30.0f;
        spA8 = Math_SinS(temp_s0) * temp_f20;
        spAC = Rand_ZeroOne() * 30.0f;
        spB0 = Math_CosS(temp_s0) * temp_f20;
        sp9C = ((Rand_ZeroOne() * 4.0f) - 2.0f) + (spA8 * 0.18f);
        spA0 = (Rand_ZeroOne() * 8.0f) + 3.0f;
        spA4 = ((Rand_ZeroOne() * 4.0f) - 2.0f) + (spB0 * 0.18f);
        spA8 += arg0->actor.world.pos.x;
        spAC += arg0->actor.world.pos.y;
        spB0 += arg0->actor.world.pos.z;
        sp94 = Rand_Next();
        sp96 = Rand_Next();
        sp98 = Rand_Next();
        sp8C = (Rand_Next() & 0x3FFF) - 0x1FFF;
        sp8E = (Rand_Next() & 0x1FFF) - 0xFFF;
        sp90 = (Rand_Next() & 0x3FFF) - 0x1FFF;
        func_80A5C2FC((bitwise f32) &D_80A5F1C0, (bitwise Vec3f *) ((Rand_ZeroOne() * 0.4f) + 0.02f), (Vec3f *) temp_s4, temp_s5, temp_s6, temp_s7);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 2);
}

void func_80A5CF44(Actor *arg0) {
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    f32 spA0;
    f32 sp9C;
    s16 sp98;
    s16 sp96;
    s16 sp94;
    s16 sp90;
    s16 sp8E;
    s16 sp8C;
    f32 *temp_s5;
    f32 *temp_s6;
    f32 temp_f20;
    f32 temp_f6;
    f32 temp_f6_2;
    s16 *temp_fp;
    s16 *temp_s7;
    s16 temp_s0;
    s32 temp_s1;
    s32 phi_s2;
    s32 phi_s1;

    temp_fp = &sp8C;
    temp_s7 = &sp94;
    temp_s6 = &sp9C;
    temp_s5 = &spA8;
    phi_s2 = 0;
    phi_s1 = 0;
    do {
        temp_s0 = (Rand_Next() & 0x1FFF) + phi_s2;
        temp_f20 = Rand_ZeroOne() * 30.0f;
        spA8 = Math_SinS(temp_s0) * temp_f20;
        temp_f6 = Rand_ZeroOne() * 30.0f;
        spAC = temp_f6;
        spB0 = Math_CosS(temp_s0) * temp_f20;
        sp9C = ((Rand_ZeroOne() * 6.0f) - 3.0f) + (spA8 * 0.19f);
        spA0 = (Rand_ZeroOne() * 9.0f) + 3.0f;
        temp_f6_2 = temp_f6;
        spA4 = ((Rand_ZeroOne() * 6.0f) - 3.0f) + (spB0 * 0.19f);
        spA8 += arg0->world.pos.x;
        spAC = temp_f6_2 + arg0->world.pos.y;
        spB0 += arg0->world.pos.z;
        sp94 = Rand_Next();
        sp96 = Rand_Next();
        sp98 = Rand_Next();
        sp8C = (Rand_Next() & 0x3FFF) - 0x1FFF;
        sp8E = (Rand_Next() & 0x1FFF) - 0xFFF;
        sp90 = (Rand_Next() & 0x3FFF) - 0x1FFF;
        func_80A5C2FC((bitwise f32) &D_80A5F1C0, (bitwise Vec3f *) ((Rand_ZeroOne() * 0.45f) + 0.04f), (Vec3f *) temp_s5, temp_s6, temp_s7, temp_fp);
        temp_s1 = phi_s1 + 1;
        phi_s2 += 0x2000;
        phi_s1 = temp_s1;
    } while (temp_s1 != 8);
}

void func_80A5D178(EnKusa2 *arg0) {
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 spA8;
    f32 spA4;
    s16 spA0;
    s16 sp9E;
    s16 sp9C;
    s16 sp98;
    s16 sp96;
    s16 sp94;
    f32 *temp_s4;
    f32 *temp_s5;
    f32 temp_f20;
    f32 temp_f22;
    f32 temp_f24;
    s16 *temp_s6;
    s16 *temp_s7;
    s16 temp_s0;
    s16 temp_v0;
    s32 temp_s1;
    s32 phi_s1;

    temp_s7 = &sp94;
    temp_s6 = &sp9C;
    temp_s5 = &spA4;
    temp_s4 = &spB0;
    phi_s1 = 0;
    do {
        temp_v0 = Rand_Next();
        temp_s0 = temp_v0;
        temp_f22 = Math_SinS(temp_v0);
        temp_f20 = Math_CosS(temp_s0);
        temp_f24 = (Rand_ZeroOne() * 40.0f) + 10.0f;
        spB0 = temp_f24 * temp_f22;
        spB4 = Rand_ZeroOne() * 30.0f;
        spB8 = temp_f24 * temp_f20;
        spA4 = ((Rand_ZeroOne() * 6.0f) - 3.0f) + ((temp_f20 * 6.0f) + (spB0 * 0.1f));
        spA8 = (Rand_ZeroOne() * 3.0f) + 1.0f;
        spAC = ((Rand_ZeroOne() * 6.0f) - 3.0f) + ((temp_f22 * -6.0f) + (spB8 * 0.1f));
        spB0 += arg0->actor.world.pos.x;
        spB4 += arg0->actor.world.pos.y;
        spB8 += arg0->actor.world.pos.z;
        sp9C = Rand_Next();
        sp9E = Rand_Next();
        spA0 = Rand_Next();
        sp94 = Rand_S16Offset(-0x2EE0, 0x5DC0);
        sp96 = (Rand_Next() & 0x3FFF) - 0x1FFF;
        sp98 = Rand_S16Offset(-0x2EE0, 0x5DC0);
        func_80A5C2FC((bitwise f32) &D_80A5F1C0, (bitwise Vec3f *) ((Rand_ZeroOne() * 0.38f) + 0.02f), (Vec3f *) temp_s4, temp_s5, temp_s6, temp_s7);
        temp_s1 = phi_s1 + 1;
        phi_s1 = temp_s1;
    } while (temp_s1 != 8);
}

void EnKusa2_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnKusa2 *this = (EnKusa2 *) thisx;
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a1;

    Actor_ProcessInitChain(&this->actor, &D_80A5EB50);
    temp_a1 = &this->unk144;
    if ((this->actor.params & 1) == 0) {
        this->actor.update = func_80A5E604;
        this->actor.draw = NULL;
        this->actor.flags |= 0x20;
        func_800BC154(globalCtx, &globalCtx->actorCtx, &this->actor, 1U);
        this->unk1BE = 0;
        if (D_80A5EAEC != 0) {
            D_80A5EAEC = 0;
            D_80A60900 = globalCtx->gameplayFrames;
            func_80A5CAD4((void *) &D_80A5F1C0);
            D_80A60B08 = (s16) (Rand_Next() >> 0x10);
            D_80A60B0A = (s16) (Rand_Next() >> 0x10);
            D_80A60B0C = (s16) (Rand_Next() >> 0x10);
            D_80A60B0E = (s16) (Rand_Next() >> 0x10);
            D_80A60B10 = (s16) (Rand_Next() >> 0x10);
            func_80A5B508();
        }
        func_80A5D5E0(this);
        return;
    }
    sp24 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    if (func_80A5BA58(&this->actor, globalCtx) == 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Collider_SetCylinder(globalCtx, sp24, &this->actor, &D_80A5EAC0);
    Collider_UpdateCylinder(&this->actor, sp24);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk1CE = D_80A5EAF0 & 7;
    D_80A5EAF0 += 1;
    this->actor.shape.shadowAlpha = 0;
    this->unk1CF = 0xFF;
    this->actor.shape.shadowScale = 1.0f;
    func_80A5D7A4(this);
}

void EnKusa2_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnKusa2 *this = (EnKusa2 *) thisx;
    if ((this->actor.params & 1) == 1) {
        Collider_DestroyCylinder(globalCtx, &this->unk144);
    }
}

void func_80A5D5E0(EnKusa2 *arg0) {
    arg0->actionFunc = func_80A5D5F4;
}

void func_80A5D5F4(EnKusa2 *this, GlobalContext *globalCtx) {
    func_80A5D618();
}

void func_80A5D618(EnKusa2 *arg0) {
    arg0->actionFunc = func_80A5D62C;
}

void func_80A5D62C(EnKusa2 *this, GlobalContext *globalCtx) {
    if (this->unk1BE != 0) {
        func_80A5B490(this);
        func_80A5D754(this);
        return;
    }
    if (Math3D_XZLengthSquared(this->actor.projectedPos.x, this->actor.projectedPos.z) < 2560000.0f) {
        func_80A5B160(this, globalCtx);
        func_80A5D6B0(this);
    }
}

void func_80A5D6B0(EnKusa2 *arg0) {
    arg0->actionFunc = func_80A5D6C4;
}

void func_80A5D6C4(EnKusa2 *this, GlobalContext *globalCtx) {
    func_80A5B3BC(this);
    if (this->unk1BE != 0) {
        func_80A5B490(this, globalCtx);
        func_80A5D754(this);
        return;
    }
    if (Math3D_XZLengthSquared(this->actor.projectedPos.x, this->actor.projectedPos.z) > 3062500.0f) {
        func_80A5B334(this, globalCtx);
        func_80A5D618(this);
    }
}

void func_80A5D754(EnKusa2 *arg0) {
    s32 temp_v0;
    void *temp_v1;
    void *phi_v1;
    s32 phi_v0;

    arg0->unk194 = 0;
    phi_v1 = arg0 + 4;
    phi_v0 = 1;
    do {
        temp_v0 = phi_v0 + 4;
        phi_v1->unk198 = 0;
        phi_v1->unk19C = 0;
        phi_v1->unk1A0 = 0;
        temp_v1 = phi_v1 + 0x10;
        temp_v1->unk184 = 0;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 != 9);
    arg0->actionFunc = func_80A5D794;
}

void func_80A5D794(EnKusa2 *this, GlobalContext *globalCtx) {

}

void func_80A5D7A4(EnKusa2 *arg0) {
    arg0->actor.draw = EnKusa2_Draw;
    arg0->actionFunc = func_80A5D7C4;
}

void func_80A5D7C4(EnKusa2 *this, GlobalContext *globalCtx) {
    s16 sp2A;
    CollisionCheckContext *sp24;
    ColliderCylinder *sp20;
    Actor *temp_a0;
    Actor *temp_a0_2;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1;

    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x14, 0x869U);
        this->actor.shape.shadowDraw = func_800B3FC0;
        this->actor.shape.shadowAlpha = 0x3C;
        this->actor.room = -1;
        func_80A5BD94(&this->actor);
        func_80A5D964(this);
        return;
    }
    if (func_80A5BFD8(&this->actor, globalCtx) == 0) {
        temp_a0 = this->unk1C0;
        if ((temp_a0 != 0) && (temp_a0->unk1BE != 0)) {
            temp_a0_2 = this->unk1C0;
            this->actor.shape.shadowDraw = func_800B3FC0;
            if (temp_a0_2 != 0) {
                sp2A = Actor_YawBetweenActors(temp_a0_2, &this->actor);
                this->actor.home.rot.y = Rand_S16Offset(-0x5DC, 0xBB8) + sp2A;
            }
            this->unk1C8 = Rand_S16Offset(0x48, 0x10);
            this->actor.velocity.y = 8.8f;
            Audio_PlayActorSound2(&this->actor, 0x387FU);
            func_80A5DC70(this);
        }
        temp_a2 = &this->unk144;
        temp_a1 = &globalCtx->colChkCtx;
        if (this->actor.xzDistToPlayer < 600.0f) {
            sp24 = temp_a1;
            sp20 = temp_a2;
            CollisionCheck_SetAC(globalCtx, temp_a1, &temp_a2->base);
            if (this->actor.xzDistToPlayer < 400.0f) {
                CollisionCheck_SetOC(globalCtx, temp_a1, &temp_a2->base);
                if (this->actor.xzDistToPlayer < 100.0f) {
                    func_800B8BB0(&this->actor, globalCtx);
                }
            }
        }
    }
}

void func_80A5D964(EnKusa2 *arg0) {
    arg0->actor.draw = func_80A5E9B4;
    arg0->actionFunc = func_80A5D9C8;
    D_80A5EAF4.unk0 = 0;
    D_80A5EAF4.unk2 = 0;
    D_80A5EAF4.unk4 = 0;
    D_80A5EAFC.unk0 = 0;
    D_80A5EAFC.unk2 = 0;
    D_80A5EAFC.unk4 = 0;
    D_80A5EB04.unk0 = 0;
    D_80A5EB04.unk2 = 0;
    D_80A5EB04.unk4 = 0;
    arg0->unk1D0 = 0x1E;
}

void func_80A5D9C8(EnKusa2 *this, GlobalContext *globalCtx) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;

    D_80A5EAF4.unk0 = (s16) (D_80A5EAF4.unk0 + 0x2AF8);
    D_80A5EAF4.unk2 = (s16) (D_80A5EAF4.unk2 + 0x4268);
    D_80A5EAF4.unk4 = (s16) (D_80A5EAF4.unk4 + 0x2328);
    this->actor.scale.x = (Math_SinS(D_80A5EAF4.unk0) * 0.020000001f) + 0.4f;
    this->actor.scale.y = (Math_SinS(D_80A5EAF4.unk2) * 0.020000001f) + 0.4f;
    this->actor.scale.z = (Math_SinS(D_80A5EAF4.unk4) * 0.020000001f) + 0.4f;
    D_80A5EB04.unk0 = (s16) (D_80A5EB04.unk0 + 0x4650);
    D_80A5EB04.unk2 = (s16) (D_80A5EB04.unk2 + 0x4268);
    D_80A5EB04.unk4 = (s16) (D_80A5EB04.unk4 + 0x3E80);
    D_80A5EAFC = (s16) (s32) (Math_SinS(D_80A5EB04.unk0) * 1000.0f);
    D_80A5EAFE = (s16) (s32) (Math_SinS(D_80A5EB04.unk2) * 1000.0f);
    D_80A5EB00 = (s16) (s32) (Math_SinS(D_80A5EB04.unk4) * 1000.0f);
    if (Actor_HasNoParent(&this->actor, globalCtx) != 0) {
        this->actor.colChkInfo.mass = 0x50;
        this->actor.speedXZ += 3.0f;
        this->actor.velocity.y = 12.5f;
        this->actor.room = globalCtx->roomCtx.currRoom.num;
        this->actor.home.rot.y = this->actor.world.rot.y;
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        func_80A5BAFC(&this->actor, globalCtx);
        func_80A5CD0C(this);
        this->unk1C8 = 0x1E;
        func_80A5DC70(this);
        return;
    }
    sp30 = this->actor.world.pos.x;
    sp34 = this->actor.world.pos.y + 20.0f;
    sp38 = this->actor.world.pos.z;
    if (Rand_Next() < 0xFFFFFFFU) {
        func_80A5CD0C(this);
    }
    this->unk1D0 += -1;
    if ((s32) this->unk1D0 <= 0) {
        Audio_PlayActorSound2(&this->actor, 0x3849U);
        this->unk1D0 = (Rand_Next() >> 0x1D) + 0xE;
    }
    this->actor.floorHeight = func_800C411C(&globalCtx->colCtx, &this->actor.floorPoly, &sp2C, &this->actor, (Vec3f *) &sp30);
}

void func_80A5DC70(EnKusa2 *arg0) {
    arg0->actionFunc = func_80A5DC98;
    arg0->actor.draw = func_80A5EA48;
    arg0->unk1CA = 0x50;
}

void func_80A5DC98(EnKusa2 *this, GlobalContext *globalCtx) {
    s16 temp_v0_2;
    u16 temp_v0;

    if (func_80A5BFD8(&this->actor, globalCtx) == 0) {
        if (this->actor.velocity.y > 1.0f) {
            Math_StepToF(&this->actor.scale.y, 0.3f, 0.060000002f);
            Math_StepToF(&this->actor.scale.x, 0.328f, 0.040000003f);
        } else {
            Math_StepToF(&this->actor.scale.y, 0.48000002f, 0.080000006f);
            Math_StepToF(&this->actor.scale.x, 0.28f, 0.032f);
        }
        this->actor.scale.z = this->actor.scale.x;
        Math_StepToF(&this->actor.gravity, -7.0f, 1.8f);
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        func_80A5BAFC(&this->actor, globalCtx);
        func_80A5BF38(this, 4);
        func_80A5BF84(&this->actor, globalCtx);
        temp_v0 = this->actor.bgCheckFlags;
        if ((temp_v0 & 1) != 0) {
            func_80A5CD0C(this);
            func_80A5BB40(this, globalCtx, 1);
            Audio_PlayActorSound2(&this->actor, 0x387FU);
            func_80A5DE18(this);
            return;
        }
        if ((temp_v0 & 0x20) != 0) {
            func_80A5BDB0(this, globalCtx);
            func_80A5E418(this);
            return;
        }
        temp_v0_2 = this->unk1CA;
        if ((s32) temp_v0_2 > 0) {
            this->unk1CA = temp_v0_2 - 1;
            return;
        }
        Actor_MarkForDeath(&this->actor);
        // Duplicate return node #11. Try simplifying control flow for better match
    }
}

void func_80A5DE18(EnKusa2 *arg0) {
    arg0->actionFunc = func_80A5DEB4;
    arg0->actor.draw = func_80A5EA48;
    arg0->actor.gravity = -2.0f;
    arg0->unk1D0 = (s8) (s32) (Rand_ZeroOne() * 3.0f);
    arg0->unk1D1 = (s32) (Rand_ZeroOne() * 8.0f) + 7;
    arg0->unk1CA = Rand_S16Offset(0x13, 2);
}

void func_80A5DEB4(EnKusa2 *this, GlobalContext *globalCtx) {
    s32 sp20;
    f32 temp_f2;
    f32 temp_f6;
    s32 temp_cond;
    s8 temp_v0;
    s8 temp_v0_2;
    s32 phi_v1;

    if (func_80A5BFD8(&this->actor, globalCtx) == 0) {
        temp_v0 = this->unk1D0;
        if ((s32) temp_v0 > 0) {
            this->unk1D0 = temp_v0 - 1;
            if (this->unk1D0 == 0) {
                Audio_PlayActorSound2(&this->actor, 0x3849U);
            }
        }
        temp_v0_2 = this->unk1D1;
        if ((s32) temp_v0_2 > 0) {
            this->unk1D1 = temp_v0_2 - 1;
            if (this->unk1D1 == 0) {
                Audio_PlayActorSound2(&this->actor, 0x3849U);
            }
        }
        Math_StepToF(&this->actor.scale.y, 0.4f, 0.032f);
        Math_StepToF(&this->actor.scale.x, 0.4f, 0.032f);
        this->unk1C4 += 0x4650;
        this->actor.scale.z = this->actor.scale.x;
        temp_f2 = fabsf(Math_CosS(this->unk1C4) + 0.5f) * 1.5f;
        temp_cond = temp_f2 < 0.0f;
        this->actor.speedXZ = temp_f2;
        if (temp_cond) {
            this->actor.speedXZ = 0.0f;
        }
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        this->actor.world.rot.y = (s32) (Math_SinS(this->unk1C4) * 3000.0f) + this->actor.home.rot.y;
        this->actor.shape.rot.y = this->actor.world.rot.y;
        this->actor.shape.rot.x = (s32) (fabsf(Math_SinS(this->unk1C4)) * 4000.0f) - 0x6A4;
        func_80A5BAFC(&this->actor, globalCtx);
        func_80A5BF38(this, 4);
        func_80A5BF84(&this->actor, globalCtx);
        if (Rand_Next() < 0xFFFFFFFU) {
            func_80A5CD0C(this);
        }
        if ((this->actor.bgCheckFlags & 0x20) != 0) {
            func_80A5BDB0(this, globalCtx);
            func_80A5E418(this);
            return;
        }
        this->unk1C8 += -1;
        if ((s32) this->unk1C8 <= 0) {
            func_80A5CD0C(this);
            func_80A5BB40(this, globalCtx, 4);
            this->actor.speedXZ += 4.0f;
            this->actor.velocity.y = (Rand_ZeroOne() * 4.0f) + 15.0f;
            func_80A5E1D8(this);
            return;
        }
        if ((this->actor.bgCheckFlags & 1) != 0) {
            this->unk1CA += -1;
            if ((s32) this->unk1CA <= 0) {
                func_80A5CD0C(this);
                func_80A5BB40(this, globalCtx, 2);
                temp_f6 = (Rand_ZeroOne() * 6.0f) + 7.0f;
                this->actor.speedXZ += 2.0f;
                this->actor.velocity.y = temp_f6;
                if ((s32) this->actor.yawTowardsPlayer < (s32) this->actor.world.rot.y) {
                    phi_v1 = 0x2710;
                } else {
                    phi_v1 = -0x2710;
                }
                sp20 = phi_v1;
                this->actor.home.rot.y += Rand_S16Offset(-0xBB8, 0x1770) + phi_v1;
                this->actor.world.rot.y = this->actor.home.rot.y;
                func_80A5DC70(this);
            }
        }
        // Duplicate return node #21. Try simplifying control flow for better match
    }
}

void func_80A5E1D8(EnKusa2 *arg0) {
    arg0->actionFunc = func_80A5E210;
    arg0->actor.draw = func_80A5EA48;
    arg0->unk1CC = 0;
    func_80A5CB74();
}

void func_80A5E210(EnKusa2 *this, GlobalContext *globalCtx) {
    u16 temp_v0;
    void *temp_v0_2;

    Math_StepToF(&this->actor.gravity, -4.0f, 0.5f);
    temp_v0 = this->actor.bgCheckFlags;
    if ((temp_v0 & 1) != 0) {
        this->actor.speedXZ *= 0.4f;
        if ((temp_v0 & 2) != 0) {
            func_80A5D178(this);
            Audio_PlaySoundAtPosition(globalCtx, &this->actor.world.pos, 0x28, 0x3935U);
        }
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80A5BAFC(&this->actor, globalCtx);
    if (this->actor.velocity.y > 0.01f) {
        func_80A5BF38(this, 4);
        this->unk1CC += 0x3E8;
    } else {
        func_80A5BF60(this, 0xA);
        this->unk1CF += -0x14;
        this->unk1CC += 0x1388;
    }
    if ((s32) this->unk1CC >= 0x4E21) {
        this->unk1CC = 0x4E20;
    }
    this->actor.shape.rot.y += this->unk1CC;
    if (this->actor.velocity.y > 1.0f) {
        Math_StepToF(&this->actor.scale.y, 0.24000001f, 0.080000006f);
        Math_StepToF(&this->actor.scale.x, 0.32000002f, 0.040000003f);
    } else if ((this->actor.bgCheckFlags & 1) != 0) {
        Math_StepToF(&this->actor.scale.y, 0.0f, 0.120000005f);
        Math_StepToF(&this->actor.scale.x, 0.48000002f, 0.120000005f);
    } else {
        Math_StepToF(&this->actor.scale.y, 0.56f, 0.1f);
        Math_StepToF(&this->actor.scale.x, 0.24000001f, 0.1f);
    }
    this->actor.scale.z = this->actor.scale.x;
    if ((s32) this->unk1CF < 0x15) {
        temp_v0_2 = this->unk1B8;
        if (temp_v0_2 != 0) {
            temp_v0_2->unk28 = func_80A5C718;
        }
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80A5E418(EnKusa2 *arg0) {
    arg0->actor.minVelocityY = -4.0f;
    arg0->actor.velocity.x *= 0.1f;
    arg0->actor.velocity.y *= 0.25f;
    arg0->actor.velocity.z *= 0.1f;
    arg0->actor.draw = func_80A5EA48;
    arg0->actor.speedXZ *= 0.1f;
    arg0->actor.gravity *= 0.25f;
    arg0 = arg0;
    arg0->unk1CC = Rand_S16Offset(-0x320, 0x640);
    arg0->actionFunc = func_80A5E4BC;
}

void func_80A5E4BC(EnKusa2 *this, GlobalContext *globalCtx) {
    u8 temp_t4;

    Math_StepToF(&this->actor.scale.y, 0.4f, 0.032f);
    Math_StepToF(&this->actor.scale.x, 0.4f, 0.032f);
    this->actor.scale.z = this->actor.scale.x;
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_80A5BAFC(&this->actor, globalCtx);
    func_80A5BF60(this, 6);
    this->actor.shape.rot.x += -0x5DC;
    this->actor.shape.rot.y += this->unk1CC;
    if (((this->actor.bgCheckFlags & 0x20) != 0) && (this->actor.yDistToWater > 5.0f) && (Rand_ZeroOne() < 0.8f)) {
        EffectSsBubble_Spawn(globalCtx, &this->actor.world.pos, 20.0f, 10.0f, 20.0f, (Rand_ZeroOne() * 0.08f) + 0.04f);
    }
    temp_t4 = this->unk1CF - 0xF;
    this->unk1CF = temp_t4;
    if ((temp_t4 & 0xFF) < 0x10) {
        Actor_MarkForDeath(&this->actor);
    }
}

void func_80A5E604(Actor *this, GlobalContext *globalCtx) {
    void *sp1C;

    this->unk190(globalCtx);
    if (D_80A60900 == globalCtx->gameplayFrames) {
        this->draw = NULL;
        return;
    }
    this->draw = func_80A5E6F0;
    if (globalCtx->roomCtx.currRoom.unk3 == 0) {
        sp1C = globalCtx + 0x18000;
        func_80A5B508(this);
    }
    sp1C = globalCtx + 0x18000;
    func_80A5CAF4(&D_80A5F1C0);
    D_80A60900 = (globalCtx + 0x18000)->unk840;
}

void EnKusa2_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnKusa2 *this = (EnKusa2 *) thisx;
    Actor *temp_v0;

    temp_v0 = this->unk1C0;
    if ((temp_v0 != 0) && (temp_v0->update == 0)) {
        this->unk1C0 = NULL;
    }
    this->actionFunc(this, globalCtx);
    func_80A5CCD4(this);
}

void func_80A5E6F0(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f12;
    s32 temp_s2;
    void *temp_s0;
    Vec3f *phi_s3;
    s32 phi_s2;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    phi_s3 = &D_80A5F1C0;
    phi_s2 = 0;
    do {
        temp_s0 = phi_s3 + 0x480;
        if ((s32) phi_s3->unk4AC > 0) {
            SysMatrix_SetStateRotationAndTranslation(temp_s0->unk4, temp_s0->unk8, temp_s0->unkC, temp_s0 + 0x20);
            temp_f12 = temp_s0->unk0;
            Matrix_Scale(temp_f12, temp_f12, temp_f12, 1);
            temp_v0 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_2 = temp_s1->polyOpa.p;
            temp_s1->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_2->words.w1 = *(&D_80A5EB68 + ((phi_s2 & 1) * 4));
        }
        temp_s2 = phi_s2 + 1;
        phi_s3 += 0x30;
        phi_s2 = temp_s2;
    } while (temp_s2 != 0x64);
}

void func_80A5E80C(GraphicsContext **arg0, s32 arg1) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;

    temp_a0 = *arg0;
    sp24 = temp_a0;
    func_8012C2DC(temp_a0);
    temp_v0 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(*arg0);
    temp_v0_2 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_v0_2->words.w1 = (arg1 & 0xFF) | ~0xFF;
    temp_v0_3 = sp24->polyXlu.p;
    sp24->polyXlu.p = temp_v0_3 + 8;
    temp_v0_3->words.w1 = (u32) &D_05007938;
    temp_v0_3->words.w0 = 0xDE000000;
}

void EnKusa2_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnKusa2 *this = (EnKusa2 *) thisx;
    GlobalContext *temp_a3;
    f32 temp_f0;
    GlobalContext *phi_a3;

    temp_a3 = globalCtx;
    temp_f0 = this->actor.projectedPos.z;
    phi_a3 = temp_a3;
    if (temp_f0 <= 1200.0f) {
        if ((temp_a3->roomCtx.currRoom.unk3 == 0) && (temp_f0 > -150.0f) && (temp_f0 < 400.0f)) {
            globalCtx = temp_a3;
            func_80A5B954((this->unk1CE << 6) + &D_80A60908, 0.0015f, this, temp_a3);
            phi_a3 = globalCtx;
        }
        func_800BDFC0(phi_a3, (Gfx *) &D_050078A0);
        return;
    }
    if (temp_f0 < 1300.0f) {
        func_80A5E80C(&temp_a3->state.gfxCtx, (s32) ((1300.0f - temp_f0) * 2.55f), this, temp_a3);
    }
}

void func_80A5E9B4(Actor *arg0, GlobalContext *arg1) {
    s16 sp1C;
    s16 sp1A;
    s16 sp18;

    sp18 = arg0->shape.rot.x + D_80A5EAFC.unk0;
    sp1A = arg0->shape.rot.y + D_80A5EAFC.unk2;
    sp1C = arg0->shape.rot.z + D_80A5EAFC.unk4;
    SysMatrix_SetStateRotationAndTranslation(arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (Vec3s *) &sp18);
    Matrix_Scale(arg0->scale.x, arg0->scale.y, arg0->scale.z, 1);
    func_800BDFC0(arg1, (Gfx *) &D_050078A0);
}

void func_80A5EA48(GlobalContext *arg0, GlobalContext *arg1) {
    u8 temp_a2;

    temp_a2 = arg0->unk1CF;
    if (temp_a2 == 0xFF) {
        func_800BDFC0(arg1, (Gfx *) &D_050078A0);
        return;
    }
    func_80A5E80C(&arg1->state.gfxCtx, (s32) temp_a2, (EnKusa2 *) temp_a2, arg0);
}

