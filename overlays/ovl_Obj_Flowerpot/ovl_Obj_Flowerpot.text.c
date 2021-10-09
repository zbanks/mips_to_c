void func_80A1B3D0();                               /* static */
void func_80A1B840(f32 *arg0);                      /* static */
void func_80A1B914(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_80A1B994(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1B9CC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1BA04(Vec3f *arg0, Vec3f *arg1);       /* static */
void func_80A1BA44(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1BD80(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1C0FC(GlobalContext *arg1, GlobalContext *); /* static */
void func_80A1C328(GlobalContext *arg1, GlobalContext *); /* static */
void func_80A1C554(ObjFlowerpot *arg0);             /* static */
void func_80A1C5E8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1C62C(Actor *arg0, GlobalContext *arg1, s32); /* static */
void func_80A1C818(ObjFlowerpot *arg0);             /* static */
void func_80A1C838(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1CBF8(Actor *arg0);                    /* static */
void func_80A1CC0C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A1CD10(Actor *arg0);                    /* static */
void func_80A1CEF4(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_060012E0;
extern ? D_06001408;
extern Gfx D_060014F0;
extern Gfx D_060015B0;
static ColliderJntSphElementInit D_80A1D3A0 = {
    {
        {0, {0x400000, 0, 2}, {0x5CBFFBE, 0, 0}, 1, 1, 1},
        {0, {{0, 0x64, 0}, 0xC}, 0x64},
    },
    {{0, {0, 0, 0}, {0x580C71C, 0, 0}, 0, 1, 0}, {1, {{0, 0x12C, 0}, 0xC}, 0x64}},
};
static ColliderJntSphInit D_80A1D3E8 = {{0xA, 9, 9, 0x39, 0x20, 0}, 2, &D_80A1D3A0};
static s16 D_80A1D3F8 = 0;
static s16 D_80A1D3FC = 0;
static s16 D_80A1D400 = 0;
static u8 D_80A1D404 = 1;
static Vec3f D_80A1D408 = {0.0f, 20.0f, 0.0f};
static InitChainEntry D_80A1D414;                   /* unable to generate initializer */
static u32 D_80A1D830;
static ? D_80A1D838;
static s16 D_80A1DA38;
static s16 D_80A1DA3A;
static s16 D_80A1DA3C;
static s16 D_80A1DA3E;
static s16 D_80A1DA40;

typedef struct ObjFlowerpot {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderJntSph unk144;             /* inferred */
    /* 0x0164 */ ColliderJntSphElement unk164;      /* inferred */
    /* 0x01A4 */ char pad1A4[0x40];                 /* maybe part of unk164[2]? */
    /* 0x01E4 */ void (*actionFunc)(ObjFlowerpot *, GlobalContext *);
    /* 0x01E8 */ char pad1E8[0x2];
    /* 0x01EA */ u8 unk1EA;                         /* inferred */
    /* 0x01EB */ s8 unk1EB;                         /* inferred */
    /* 0x01EC */ s8 unk1EC;                         /* inferred */
    /* 0x01ED */ char pad1ED[0x3];                  /* maybe part of unk1EC[4]? */
} ObjFlowerpot;                                     /* size 0x1F0 */

void func_80A1B3D0(void) {
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
    f32 temp_f0;
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
    f32 temp_f30;
    f32 temp_f30_2;
    s32 temp_a1;
    ? *phi_v0;
    s32 phi_a0;

    D_80A1DA38 += 0x46;
    D_80A1DA3A += 0x12C;
    D_80A1DA3C += 0x2BC;
    D_80A1DA3E += 0x514;
    D_80A1DA40 += 0x22C4;
    temp_f28 = Math_SinS(D_80A1DA38);
    spB4 = Math_SinS(D_80A1DA3A);
    temp_f30 = Math_SinS(D_80A1DA3C);
    spAC = Math_SinS(D_80A1DA3E);
    spA8 = Math_SinS(D_80A1DA40);
    temp_f26 = Math_CosS(D_80A1DA38);
    temp_f20 = Math_CosS(D_80A1DA3A);
    temp_f22 = Math_CosS(D_80A1DA3C);
    temp_f24 = Math_CosS(D_80A1DA3E);
    temp_f0 = Math_CosS(D_80A1DA40);
    temp_f12 = spAC - temp_f20;
    temp_v1 = &sp74;
    sp74 = (temp_f28 - temp_f20) * temp_f30 * temp_f26 * temp_f28 * 0.0012f;
    temp_f18 = (spB4 - temp_f22) * spAC * temp_f20 * temp_f28 * 0.0012f;
    sp78 = temp_f18;
    sp7C = (temp_f30 - temp_f24) * temp_f22 * temp_f28 * temp_f26 * 0.0012f;
    temp_f10 = temp_f12 * temp_f24 * spB4 * temp_f26 * 0.0012f;
    sp80 = temp_f10;
    sp84 = (temp_f28 - temp_f22) * temp_f28 * spB4 * spA8 * 0.0013f;
    sp88 = (spB4 - temp_f24) * temp_f30 * spAC * spA8 * 0.0013f;
    sp8C = (temp_f30 - temp_f26) * temp_f26 * temp_f20 * temp_f0 * 0.0013f;
    sp90 = temp_f12 * temp_f22 * temp_f24 * temp_f0 * 0.0013f;
    sp50 = temp_f18 * 0.2f;
    sp4C = temp_f10 * 0.2f;
    phi_v0 = &D_80A1D838;
    phi_a0 = 0;
    do {
        temp_a1 = phi_a0 + 4;
        temp_f14 = temp_v1[(phi_a0 + 1) & 7];
        temp_f2 = temp_v1[(phi_a0 + 2) & 7];
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
        temp_v0->unk-7C = temp_f2;
        temp_v0->unk-B8 = temp_f2;
        temp_v0->unk-F0 = temp_f2;
        temp_v0->unk-E8 = temp_f2;
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

void func_80A1B840(f32 *arg0) {
    MtxF *temp_v0;
    MtxF *temp_v1;
    f32 *temp_a0;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_a1;
    void *temp_a0_2;
    void *temp_v1_2;
    f32 phi_f18;
    f32 *phi_a0;
    MtxF *phi_v1;
    s32 phi_a1;
    f32 phi_f18_2;
    f32 *phi_a0_2;
    MtxF *phi_v1_2;

    temp_v0 = SysMatrix_GetCurrentState();
    temp_f18 = temp_v0->mf[0][0];
    phi_f18 = temp_f18;
    phi_a0 = arg0;
    phi_v1 = temp_v0;
    phi_a1 = 4;
    phi_f18_2 = temp_f18;
    phi_a0_2 = arg0;
    phi_v1_2 = temp_v0;
    if (4 != 0x10) {
        do {
            temp_f18_2 = phi_v1->mf[1][0];
            temp_a1 = phi_a1 + 4;
            phi_v1->mf[0][0] = phi_f18 + phi_a0->unk0;
            temp_a0 = phi_a0 + 0x10;
            temp_v1 = phi_v1 + 0x10;
            temp_v1->unk-C = (f32) (phi_v1->mf[0][1] + phi_a0->unk4);
            temp_v1->unk-8 = (f32) (phi_v1->mf[0][2] + temp_a0->unk-8);
            temp_v1->unk-4 = (f32) (phi_v1->mf[0][3] + temp_a0->unk-4);
            phi_f18 = temp_f18_2;
            phi_a0 = temp_a0;
            phi_v1 = temp_v1;
            phi_a1 = temp_a1;
            phi_f18_2 = temp_f18_2;
            phi_a0_2 = temp_a0;
            phi_v1_2 = temp_v1;
        } while (temp_a1 != 0x10);
    }
    temp_a0_2 = phi_a0_2 + 0x10;
    temp_v1_2 = phi_v1_2 + 0x10;
    temp_v1_2->unk-10 = (f32) (phi_f18_2 + *phi_a0_2);
    temp_v1_2->unk-C = (f32) (phi_v1_2->mf[0][1] + temp_a0_2->unk-C);
    temp_v1_2->unk-8 = (f32) (phi_v1_2->mf[0][2] + temp_a0_2->unk-8);
    temp_v1_2->unk-4 = (f32) (phi_v1_2->mf[0][3] + temp_a0_2->unk-4);
}

void func_80A1B914(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    s16 temp_a0;
    s16 temp_v0_2;
    s32 temp_v0;
    s32 temp_v1;

    if ((arg0->unk1EA & 4) == 0) {
        temp_a0 = arg0->params;
        arg0 = arg0;
        temp_v0 = func_800A8150(temp_a0 & 0x3F);
        temp_a3 = arg0;
        temp_v1 = temp_v0;
        if (temp_v0 >= 0) {
            temp_v0_2 = temp_a3->params;
            arg0 = temp_a3;
            Item_DropCollectible(arg1, temp_a3 + 0x24, ((((s32) temp_v0_2 >> 8) & 0x7F) << 8) | temp_v1);
            arg0->unk1EA = (u8) (arg0->unk1EA | 4);
        }
    }
}

void func_80A1B994(Actor *arg0, GlobalContext *arg1) {
    Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x14, 0x2887U);
}

void func_80A1B9CC(Actor *arg0, GlobalContext *arg1) {
    Audio_PlaySoundAtPosition(arg1, arg0 + 0x24, 0x14, 0x284EU);
}

void func_80A1BA04(Vec3f *arg0, Vec3f *arg1) {
    SysMatrix_SetStateRotationAndTranslation(arg0->unk24, arg0->unk28, arg0->unk2C, arg0 + 0xBC);
    SysMatrix_MultiplyVector3fByState(&D_80A1D408, arg1);
}

void func_80A1BA44(Actor *arg0, GlobalContext *arg1) {
    f32 spD8;
    f32 spD4;
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 *temp_s2;
    f32 *temp_s6;
    f32 temp_f0;
    f32 temp_f20;
    s32 temp_s4;
    s16 phi_s3;
    s32 phi_s0;
    s32 phi_s1;
    s32 phi_s4;

    spD0 = arg0->world.pos.x;
    spD4 = arg0->world.pos.y;
    temp_s6 = &spB8;
    temp_s2 = &spC4;
    spD8 = arg0->world.pos.z;
    phi_s3 = 0;
    phi_s4 = 0;
    do {
        temp_f20 = (Rand_ZeroOne() * 8.0f) + 2.0f;
        spC4 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * 3640.0f) + phi_s3)) * temp_f20;
        spC8 = Rand_ZeroOne() * 30.0f;
        spCC = Math_CosS((s16) ((s32) (Rand_ZeroOne() * 3640.0f) + phi_s3)) * temp_f20;
        spB8 = spC4 * 0.27f;
        spBC = (Rand_ZeroOne() * 6.0f) + 2.6f + ((30.0f - spC8) * 0.2f);
        spC0 = spCC * 0.27f;
        Math_Vec3f_Sum((Vec3f *) temp_s2, (Vec3f *) &spD0, (Vec3f *) temp_s2);
        temp_f0 = Rand_ZeroOne();
        phi_s0 = 0x20;
        if (temp_f0 < 0.2f) {
            phi_s1 = 0;
        } else {
            phi_s0 = 0x40;
            phi_s1 = 0;
            if (temp_f0 < 0.6f) {
                phi_s0 = 0x41;
                phi_s1 = 1;
            }
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s2, (Vec3f *) temp_s6, (Vec3f *) temp_s2, (s16) -0x258, (s16) phi_s0, (s16) 0x1E, (s16) 0, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 12.0f) + 16.6f), (s16) phi_s1, (s16) 0, 0x23, (s16) -1, (s16) 0x165, &D_060015B0);
        temp_s4 = phi_s4 + 1;
        phi_s3 = (s16) (phi_s3 + 0xE38);
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x12);
    spD4 += 20.0f;
    func_800BBFB0(arg1, (Vec3f *) &spD0, 30.0f, 2, (s16) 0x14, (s16) 0x32, (u8) 1);
    func_800BBFB0(arg1, (Vec3f *) &spD0, 30.0f, 2, (s16) 0xA, (s16) 0x50, (u8) 1);
    func_800BBFB0(arg1, (Vec3f *) &spD0, 30.0f, 1, (s16) 0xA, (s16) 0x28, (u8) 1);
}

void func_80A1BD80(Actor *arg0, GlobalContext *arg1) {
    f32 spD0;
    f32 spCC;
    f32 spC8;
    f32 spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 *temp_s3;
    f32 *temp_s7;
    f32 temp_f16;
    f32 temp_f20;
    s32 temp_s2;
    s32 temp_s2_2;
    s16 phi_s1;
    s32 phi_s0;
    s32 phi_s2;
    s16 phi_s1_2;
    s32 phi_s2_2;

    spC8 = arg0->world.pos.x;
    spCC = arg0->world.pos.y;
    temp_s7 = &spB0;
    temp_s3 = &spBC;
    spD0 = arg0->world.pos.z;
    phi_s1 = 0;
    phi_s2 = 0;
    phi_s1_2 = 0;
    phi_s2_2 = 0;
    do {
        temp_f20 = (Rand_ZeroOne() * 8.0f) + 2.0f;
        spBC = Math_SinS((s16) ((s32) (Rand_ZeroOne() * 4681.0f) + phi_s1)) * temp_f20;
        spC0 = Rand_ZeroOne() * 20.0f;
        spC4 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * 4681.0f) + phi_s1)) * temp_f20;
        spB0 = spBC * 0.17f;
        temp_f16 = (Rand_ZeroOne() * 5.0f) + 1.4f;
        spB8 = spC4 * 0.17f;
        spB4 = temp_f16;
        Math_Vec3f_Sum((Vec3f *) temp_s3, (Vec3f *) &spC8, (Vec3f *) temp_s3);
        phi_s0 = 0x20;
        if (Rand_ZeroOne() < 0.2f) {
            phi_s0 = 0x40;
        }
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s3, (Vec3f *) temp_s7, (Vec3f *) temp_s3, (s16) -0xF0, (s16) phi_s0, (s16) 0x28, (s16) 0, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 20.0f) + 10.6f), (s16) 0, (s16) 0, 0x2A, (s16) -1, (s16) 0x165, &D_060015B0);
        temp_s2 = phi_s2 + 1;
        phi_s1 = (s16) (phi_s1 + 0x1249);
        phi_s2 = temp_s2;
    } while (temp_s2 < 0xE);
    spC0 = arg0->world.pos.y + arg0->yDistToWater;
    do {
        spBC = (Math_SinS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s1_2)) * 15.0f) + arg0->world.pos.x;
        spC4 = (Math_CosS((s16) ((s32) (Rand_ZeroOne() * 7200.0f) + phi_s1_2)) * 15.0f) + arg0->world.pos.z;
        EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0xC8);
        temp_s2_2 = phi_s2_2 + 1;
        phi_s1_2 = (s16) (phi_s1_2 + 0x4000);
        phi_s2_2 = temp_s2_2;
    } while (temp_s2_2 != 4);
    spBC = arg0->world.pos.x;
    spC4 = arg0->world.pos.z;
    EffectSsGSplash_Spawn(arg1, (Vec3f *) temp_s3, NULL, NULL, (s16) 0, (s16) 0x15E);
    EffectSsGRipple_Spawn(arg1, (Vec3f *) temp_s3, 0x96, 0x28A, (s16) 0);
}

void func_80A1C0FC(GlobalContext *arg1) {
    Vec3f spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 *temp_s1;
    f32 *temp_s5;
    f32 temp_f20;
    f32 temp_f6;
    s32 temp_s2;
    s16 phi_s0;
    s32 phi_s2;

    func_80A1BA04(&spC4);
    temp_s5 = &spAC;
    temp_s1 = &spB8;
    phi_s0 = 0;
    phi_s2 = 0;
    do {
        temp_f20 = (Rand_ZeroOne() * 18.0f) + 2.0f;
        spB8 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * 6553.0f) + phi_s0)) * temp_f20;
        spBC = Rand_ZeroOne() * 15.0f;
        spC0 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * 6553.0f) + phi_s0)) * temp_f20;
        spAC = spB8 * 0.23f;
        temp_f6 = (Rand_ZeroOne() * 8.0f) + 1.5f;
        spB4 = spC0 * 0.23f;
        spB0 = temp_f6;
        Math_Vec3f_Sum((Vec3f *) temp_s1, &spC4, (Vec3f *) temp_s1);
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s1, (Vec3f *) temp_s5, (Vec3f *) temp_s1, (s16) -0x64, (s16) 0x40, (s16) 0x28, (s16) 0, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 16.0f) + 14.0f), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 0x165, &D_060014F0);
        temp_s2 = phi_s2 + 1;
        phi_s0 = (s16) (phi_s0 + 0x1999);
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xA);
}

void func_80A1C328(GlobalContext *arg1) {
    Vec3f spC4;
    f32 spC0;
    f32 spBC;
    f32 spB8;
    f32 spB4;
    f32 spB0;
    f32 spAC;
    f32 *temp_s1;
    f32 *temp_s5;
    f32 temp_f20;
    f32 temp_f6;
    s32 temp_s2;
    s16 phi_s0;
    s32 phi_s2;

    func_80A1BA04(&spC4);
    temp_s5 = &spAC;
    temp_s1 = &spB8;
    phi_s0 = 0;
    phi_s2 = 0;
    do {
        temp_f20 = (Rand_ZeroOne() * 18.0f) + 2.0f;
        spB8 = Math_SinS((s16) ((s32) (Rand_ZeroOne() * 6553.0f) + phi_s0)) * temp_f20;
        spBC = Rand_ZeroOne() * 15.0f;
        spC0 = Math_CosS((s16) ((s32) (Rand_ZeroOne() * 6553.0f) + phi_s0)) * temp_f20;
        spAC = spB8 * 0.18f;
        temp_f6 = (Rand_ZeroOne() * 4.0f) + 1.2f;
        spB4 = spC0 * 0.18f;
        spB0 = temp_f6;
        Math_Vec3f_Sum((Vec3f *) temp_s1, &spC4, (Vec3f *) temp_s1);
        EffectSsKakera_Spawn(arg1, (Vec3f *) temp_s1, (Vec3f *) temp_s5, (Vec3f *) temp_s1, (s16) -0x50, (s16) 0x40, (s16) 0x2C, (s16) 0, (s16) 0, (s16) (s32) ((Rand_ZeroOne() * 16.0f) + 14.0f), (s16) 0, (s16) 0, 0x50, (s16) -1, (s16) 0x165, &D_060014F0);
        temp_s2 = phi_s2 + 1;
        phi_s0 = (s16) (phi_s0 + 0x1999);
        phi_s2 = temp_s2;
    } while (temp_s2 != 0xA);
}

void func_80A1C554(ObjFlowerpot *arg0) {
    f32 temp_f0;

    temp_f0 = arg0->actor.projectedPos.z;
    if ((temp_f0 < 455.0f) && (temp_f0 > -10.0f)) {
        arg0->actor.shape.shadowDraw = func_800B3FC0;
        arg0->actor.shape.shadowScale = 1.9f;
        if (temp_f0 < 255.0f) {
            arg0->actor.shape.shadowAlpha = 0xC8;
            return;
        }
        arg0->actor.shape.shadowAlpha = 0x1C7 - (s32) temp_f0;
        return;
    }
    arg0->actor.shape.shadowDraw = NULL;
}

void func_80A1C5E8(Actor *arg0, GlobalContext *arg1) {
    Actor_UpdateBgCheckInfo(arg1, arg0, 18.0f, 15.0f, 0.0f, 0x45U);
}

void func_80A1C62C(Actor *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk1EA;
    if (((temp_v0 & 4) == 0) && (arg0->unk1EC != arg1->roomCtx.currRoom.num)) {
        arg0->unk1EA = (u8) (temp_v0 | 4);
    }
}

void ObjFlowerpot_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjFlowerpot *this = (ObjFlowerpot *) thisx;
    ColliderJntSph *sp28;
    ColliderJntSph *temp_a1;
    u32 temp_v1;

    Actor_ProcessInitChain(&this->actor, &D_80A1D414);
    if (this->actor.shape.rot.y == 0) {
        temp_v1 = Rand_Next() >> 0x10;
        this->actor.world.rot.y = (s16) temp_v1;
        this->actor.shape.rot.y = (s16) temp_v1;
    }
    temp_a1 = &this->unk144;
    sp28 = temp_a1;
    Collider_InitJntSph(globalCtx, temp_a1);
    Collider_SetJntSph(globalCtx, temp_a1, &this->actor, &D_80A1D3E8, &this->unk164);
    SysMatrix_SetStateRotationAndTranslation(this->actor.home.pos.x, this->actor.home.pos.y, this->actor.home.pos.z, &this->actor.shape.rot);
    Matrix_Scale(0.1f, 0.1f, 0.1f, 1);
    Collider_UpdateSpheres(0, temp_a1);
    Collider_UpdateSpheres(1, temp_a1);
    this->actor.colChkInfo.mass = 0xFF;
    this->unk1EC = this->actor.room;
    func_80A1C818(this);
    if (D_80A1D404 != 0) {
        D_80A1DA38 = (s16) (Rand_Next() >> 0x10);
        D_80A1DA3A = (s16) (Rand_Next() >> 0x10);
        D_80A1DA3C = (s16) (Rand_Next() >> 0x10);
        D_80A1DA3E = (s16) (Rand_Next() >> 0x10);
        D_80A1DA40 = (s16) (Rand_Next() >> 0x10);
        D_80A1D404 = 0;
        func_80A1B3D0();
        D_80A1D830 = globalCtx->gameplayFrames;
    }
    this->unk1EB = D_80A1D400 & 7;
    D_80A1D400 += 1;
}

void ObjFlowerpot_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjFlowerpot *this = (ObjFlowerpot *) thisx;
    Collider_DestroyJntSph(globalCtx, &this->unk144);
}

void func_80A1C818(ObjFlowerpot *arg0) {
    arg0->actionFunc = func_80A1C838;
    arg0->unk1EA |= 1;
}

void func_80A1C838(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp30;
    Actor *sp2C;
    Actor *temp_a2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0_3;
    u8 temp_v0_2;
    u8 temp_v1;
    void *temp_v0;
    s32 phi_v1;

    if (Actor_HasParent(arg0, arg1) != 0) {
        func_80A1CBF8(arg0);
        arg0->room = -1;
        arg0->colChkInfo.mass = 0xB4;
        arg0->flags |= 0x10;
        if (func_800A817C(arg0->params & 0x3F) != 0) {
            func_80A1B914(arg0, arg1);
        }
        func_800B8E58(arg0, 0x86FU);
        return;
    }
    if (((arg0->bgCheckFlags & 0x20) != 0) && (arg0->yDistToWater > 19.0f)) {
        if ((arg0->unk1EA & 2) == 0) {
            func_80A1B914(arg0, arg1);
            func_80A1C328((GlobalContext *) arg0, arg1);
            func_80A1B9CC(arg0, arg1);
            arg0->unk1EA = (u8) (arg0->unk1EA | 2);
        }
        func_80A1BD80(arg0, arg1);
        func_80A1B994(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    temp_v0 = arg0->unk160;
    if (((temp_v0->unk16 & 2) != 0) && ((*temp_v0->unk24 & 0x58BFFBC) != 0)) {
        if ((arg0->unk1EA & 2) == 0) {
            func_80A1B914(arg0, arg1);
            func_80A1C0FC((GlobalContext *) arg0, arg1);
            func_80A1B9CC(arg0, arg1);
            arg0->unk1EA = (u8) (arg0->unk1EA | 2);
        }
        func_80A1BA44(arg0, arg1);
        func_80A1B994(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((temp_v0->unk56 & 2) != 0) {
        temp_v1 = arg0->unk1EA;
        if ((temp_v1 & 2) == 0) {
            arg0->unk1EA = (u8) (temp_v1 | 2);
            temp_v0->unk56 = (u8) (temp_v0->unk56 & 0xFFFE);
            func_80A1C0FC((GlobalContext *) arg0, arg1);
            func_80A1B914(arg0, arg1);
            func_80A1B9CC(arg0, arg1);
        }
    }
    if ((arg0->unk1EA & 1) != 0) {
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        func_80A1C5E8(arg0, arg1);
        if ((arg0->bgCheckFlags & 1) != 0) {
            if (arg0->colChkInfo.mass == 0xFF) {
                if (BgCheck_GetActorOfMesh(&arg1->colCtx, (s32) arg0->floorBgId) == 0) {
                    arg0->flags &= -0x11;
                    arg0->unk1EA = (u8) (arg0->unk1EA & 0xFFFE);
                }
            } else if (Math3D_DistanceSquared(&arg0->world.pos, &arg0->prevPos) < 0.01f) {
                arg0->colChkInfo.mass = 0xFF;
            }
        }
    }
    temp_v0_2 = arg0->unk156;
    temp_a2 = arg0 + 0x144;
    if (((temp_v0_2 & 8) == 0) && (arg0->xzDistToPlayer > 28.0f)) {
        arg0->unk156 = (u8) (temp_v0_2 | 8);
    }
    arg0->unk155 = (u8) (arg0->unk155 & 0xFFFD);
    temp_a1 = &arg1->colChkCtx;
    if (arg0->xzDistToPlayer < 600.0f) {
        sp30 = temp_a1;
        sp2C = temp_a2;
        CollisionCheck_SetAC(arg1, temp_a1, (Collider *) temp_a2);
        if (arg0->xzDistToPlayer < 180.0f) {
            CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_a2);
            if (arg0->xzDistToPlayer < 100.0f) {
                temp_v0_3 = arg0->yawTowardsPlayer - arg1->actorCtx.actorList[2].first->world.rot.y;
                phi_v1 = (s32) temp_v0_3;
                if ((s32) temp_v0_3 < 0) {
                    phi_v1 = -(s32) temp_v0_3;
                }
                if (phi_v1 >= 0x5556) {
                    func_800B8A1C(arg0, arg1, 0, 36.0f, 30.0f);
                }
            }
        }
    }
}

void func_80A1CBF8(Actor *arg0) {
    arg0->unk1E4 = func_80A1CC0C;
}

void func_80A1CC0C(Actor *arg0, GlobalContext *arg1) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    s32 sp2C;

    func_80A1C62C(arg0, arg1);
    if (Actor_HasNoParent(arg0, arg1) != 0) {
        arg0->room = arg1->roomCtx.currRoom.num;
        if (fabsf(arg0->speedXZ) < 0.1f) {
            func_80A1C818((ObjFlowerpot *) arg0);
            func_800B8E58(arg1->actorCtx.actorList[2].first, 0x2888U);
            arg0->unk156 = (u8) (arg0->unk156 & 0xFFF7);
        } else {
            Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
            func_80A1CD10(arg0);
        }
        func_80A1C5E8(arg0, arg1);
        return;
    }
    sp30 = arg0->world.pos.x;
    sp34 = arg0->world.pos.y + 20.0f;
    sp38 = arg0->world.pos.z;
    arg0->floorHeight = func_800C411C(&arg1->colCtx, &arg0->floorPoly, &sp2C, arg0, (Vec3f *) &sp30);
}

void func_80A1CD10(Actor *arg0) {
    f32 sp1C;
    f32 temp_f12;
    f32 temp_f2;
    f32 phi_f12;
    f32 phi_f12_2;

    arg0->unk1E4 = func_80A1CEF4;
    arg0->unk1E8 = 0x40;
    if ((arg0->unk1EA & 2) != 0) {
        temp_f12 = (Rand_ZeroOne() * 1.2f) - 1.1f;
        phi_f12 = temp_f12;
        if (temp_f12 < -0.9f) {
            phi_f12 = -0.9f;
        }
        arg0 = arg0;
        sp1C = phi_f12;
        D_80A1D3F8 = (s16) (s32) (phi_f12 * 8000.0f);
        D_80A1D3FC = (s16) (s32) ((fabsf(phi_f12) + 0.1f) * ((Rand_ZeroOne() - 0.5f) * 3800.0f));
        arg0->shape.yOffset = -71.5f;
        arg0->world.pos.y += 7.15f;
        return;
    }
    temp_f2 = (Rand_ZeroOne() - 0.78f) * 1.3f;
    phi_f12_2 = temp_f2;
    if (temp_f2 < -0.78f) {
        phi_f12_2 = -0.78f;
    } else if (temp_f2 > 0.22000003f) {
        phi_f12_2 = 0.22000003f;
    }
    arg0 = arg0;
    D_80A1D3F8 = (s16) (s32) (phi_f12_2 * 6200.0f);
    D_80A1D3FC = (s16) (s32) ((Rand_ZeroOne() - 0.5f) * 4200.0f);
    arg0->shape.yOffset = -110.0f;
    arg0->world.pos.y += 11.0f;
}

void func_80A1CEF4(Actor *arg0, GlobalContext *arg1) {
    s32 sp28;
    CollisionCheckContext *sp24;
    Actor *sp20;
    Actor *temp_a2_2;
    CollisionCheckContext *temp_a1;
    s16 temp_v0_2;
    s32 temp_a2;
    u16 temp_v0_3;
    u8 temp_v1;
    void *temp_v0;

    temp_v0 = arg0->unk160;
    temp_v1 = temp_v0->unk15;
    temp_a2 = temp_v1 & 2;
    if (temp_a2 != 0) {
        temp_v0->unk15 = (u8) (temp_v1 & 0xFFFE);
    }
    temp_v0_2 = arg0->unk1E8;
    if ((s32) temp_v0_2 > 0) {
        arg0->unk1E8 = (s16) (temp_v0_2 - 1);
    }
    sp28 = temp_a2;
    func_80A1C62C(arg0, arg1, temp_a2);
    temp_v0_3 = arg0->bgCheckFlags;
    if (((temp_v0_3 & 0xB) != 0) || (temp_a2 != 0) || ((s32) arg0->unk1E8 <= 0)) {
        if ((arg0->unk1EA & 2) == 0) {
            func_80A1B914(arg0, arg1, temp_a2);
            func_80A1C0FC((GlobalContext *) arg0, arg1);
            func_80A1B9CC(arg0, arg1);
            arg0->unk1EA = (u8) (arg0->unk1EA | 2);
        }
        func_80A1BA44(arg0, arg1);
        func_80A1B994(arg0, arg1);
        Actor_MarkForDeath(arg0);
        return;
    }
    if ((temp_v0_3 & 0x40) != 0) {
        if ((arg0->unk1EA & 2) == 0) {
            func_80A1B914(arg0, arg1, temp_a2);
            func_80A1C328((GlobalContext *) arg0, arg1);
            func_80A1B9CC(arg0, arg1);
            arg0->unk1EA = (u8) (arg0->unk1EA | 2);
        }
        func_80A1BD80(arg0, arg1);
        func_80A1B994(arg0, arg1);
        Audio_PlaySoundAtPosition(arg1, &arg0->world.pos, 0x28, 0x28C5U);
        Actor_MarkForDeath(arg0);
        return;
    }
    Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
    if ((arg0->unk1EA & 2) == 0) {
        D_80A1D3F8 = D_80A1D3F8 + (s32) ((f32) arg0->shape.rot.x * -0.06f);
    } else {
        Math_StepToS(&D_80A1D3F8, 0, 0x50);
        Math_StepToS(&D_80A1D3FC, 0, 0x14);
    }
    arg0->shape.rot.x += D_80A1D3F8;
    arg0->shape.rot.y += D_80A1D3FC;
    func_80A1C5E8(arg0, arg1);
    temp_a1 = &arg1->colChkCtx;
    temp_a2_2 = arg0 + 0x144;
    sp20 = temp_a2_2;
    sp24 = temp_a1;
    CollisionCheck_SetOC(arg1, temp_a1, (Collider *) temp_a2_2);
    CollisionCheck_SetAT(arg1, temp_a1, (Collider *) temp_a2_2);
}

void ObjFlowerpot_Update(Actor *thisx, GlobalContext *globalCtx) {
    ObjFlowerpot *this = (ObjFlowerpot *) thisx;
    void *sp1C;

    this->actionFunc(this, globalCtx);
    func_80A1C554(this);
    if ((D_80A1D830 != globalCtx->gameplayFrames) && (globalCtx->roomCtx.currRoom.unk3 == 0)) {
        sp1C = globalCtx + 0x18000;
        func_80A1B3D0();
        D_80A1D830 = globalCtx->gameplayFrames;
    }
}

void ObjFlowerpot_Draw(Actor *thisx, GlobalContext *globalCtx) {
    ObjFlowerpot *this = (ObjFlowerpot *) thisx;
    Gfx *sp3C;
    void (*sp2C)(Actor *, GlobalContext *);
    ColliderJntSph *sp24;
    ColliderJntSph *temp_a1;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;
    f32 temp_f0;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp3C = temp_v0;
    sp3C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = (u32) &D_060012E0;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_a1 = &this->unk144;
    if ((func_80A1C838 != this->actionFunc) || ((this->unk1EA & 1) != 0)) {
        sp2C = func_80A1C838;
        sp24 = temp_a1;
        Collider_UpdateSpheres(0, temp_a1);
        if ((this->unk1EA & 2) == 0) {
            sp2C = func_80A1C838;
            Collider_UpdateSpheres(1, temp_a1);
        }
    }
    if ((this->unk1EA & 2) == 0) {
        if ((globalCtx->roomCtx.currRoom.unk3 == 0) && (func_80A1C838 == this->actionFunc)) {
            temp_f0 = this->actor.projectedPos.z;
            if ((temp_f0 > -150.0f) && (temp_f0 < 400.0f)) {
                func_80A1B840((this->unk1EB << 6) + &D_80A1D838);
                temp_v0_3 = temp_s1->polyOpa.p;
                temp_s1->polyOpa.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            }
        }
        temp_v0_4 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = (u32) &D_06001408;
    }
}

