? func_800AEF44(void *);                            /* extern */
s32 func_8013BD40(EnRg *, void *, s32);             /* extern */
void *func_8013BEDC(GlobalContext *, s32, ?, s32 *); /* extern */
? func_8013C8B8(void *, s32, ?32 *);                /* extern */
s32 func_8017D668(f32, f32, ?32, s32, ?32, f32, ? *, ? *, f32 *); /* extern */
void func_80BF3920(void *arg0, GraphicsContext **arg1); /* static */
void func_80BF3C64(EnRg *arg0);                     /* static */
void func_80BF3DA0(GraphicsContext **arg0, GlobalContext *); /* static */
void func_80BF3DC4(void *arg0, GlobalContext *arg1); /* static */
void func_80BF3E88(s32 arg0, GlobalContext *arg1);  /* static */
void func_80BF3ED4(EnRg *arg0, GlobalContext *);    /* static */
? func_80BF3F14(EnRg *arg0, GlobalContext *arg1);   /* static */
void func_80BF3FF8(EnRg *arg0);                     /* static */
? func_80BF4024(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_80BF409C(EnRg *arg0, s32 arg1);            /* static */
void func_80BF40F4(EnRg *arg0);                     /* static */
? func_80BF416C(Actor *arg0, GlobalContext *arg1);  /* static */
s32 func_80BF4220(Actor *arg0, GlobalContext *arg1, Actor *arg2); /* static */
? func_80BF42BC(void *arg0, f32 arg1);              /* static */
s32 func_80BF43FC(EnRg *arg0);                      /* static */
s32 func_80BF4560(EnRg *arg0, GlobalContext *arg1); /* static */
s32 func_80BF45B4(Actor *arg0);                     /* static */
? func_80BF47AC(EnRg *arg0, GlobalContext *arg1);   /* static */
void func_80BF4934(Actor *arg0);                    /* static */
void func_80BF4964(EnRg *arg0);                     /* static */
void func_80BF4AB8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BF4D64(PosRot *arg0);                   /* static */
s32 func_80BF4DA8(Actor *arg0);                     /* static */
void func_80BF547C(EnRg *arg0, GraphicsContext **arg1); /* static */
s32 func_80BF5588(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern ? D_060091A8;
extern FlexSkeletonHeader D_06011AC8;
extern ? D_06014CF0;
extern ? D_06014D00;
static ColliderSphereInit D_80BF5760 = {
    {9, 0x19, 0xD, 0x39, 0x10, 4},
    {0, {0xF7CFFFFF, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, {{0, 0, 0}, 0x14}, 0x64},
};
static ColliderCylinderInit D_80BF578C = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0x14, 0x3E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BF57B8 = {0, 0, 0, 0, 0xFF};
static DamageTable D_80BF57C4 = {
    {
        1,
        1,
        1,
        1,
        1,
        1,
        0,
        1,
        0xF1,
        1,
        0xF1,
        1,
        1,
        1,
        0xF1,
        1,
        1,
        1,
        1,
        1,
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
        1,
    },
};
static ? D_80BF57E4;                                /* unable to generate initializer */
static ActorAnimationEntryS D_80BF5914 = {
    {(AnimationHeader *)0x6012DE0, 2.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6012DE0, -2.0f, 0, 0xFFFF, 2, 0},
};
static ? D_80BF5934;                                /* unable to generate initializer */
static ? D_80BF5954;                                /* unable to generate initializer */
static ? D_80BF5960;                                /* unable to generate initializer */
static Vec3f D_80BF596C = {
    {-2473.0f, 39.0f, 7318.0f},
    {-2223.0f, 142.0f, 7184.0f},
    {-2281.0f, 41.0f, 7718.0f},
    {-2136.0f, 96.0f, 7840.0f},
    {-2432.0f, 6.0f, 7857.0f},
    {-2412.0f, 139.0f, 6872.0f},
    {-2719.0f, 39.0f, 7110.0f},
    {-2289.0f, 67.0f, 7463.0f},
    {-2820.0f, 85.0f, 6605.0f},
    {-2088.0f, 160.0f, 7584.0f},
    {-2503.0f, 1.0f, 7643.0f},
};
static void D_80BF59F0;                             /* unable to generate initializer */
static ? D_80BF59F8;                                /* unable to generate initializer */
static s32 D_80BF5C10;

typedef struct EnRg {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0154 */ f32 unk154;                        /* overlap; inferred */
    /* 0x0158 */ char pad158[0x30];                 /* maybe part of unk154[13]? */
    /* 0x0188 */ void (*actionFunc)(EnRg *, GlobalContext *);
    /* 0x018C */ void *unk18C;                      /* inferred */
    /* 0x0190 */ ColliderCylinder unk190;           /* inferred */
    /* 0x01DC */ ColliderSphere unk1DC;             /* inferred */
    /* 0x0234 */ void *unk234;                      /* inferred */
    /* 0x0238 */ Vec3s unk238;                      /* inferred */
    /* 0x023E */ char pad23E[0x66];                 /* maybe part of unk238[18]? */
    /* 0x02A4 */ Vec3s unk2A4;                      /* inferred */
    /* 0x02AA */ char pad2AA[0x66];                 /* maybe part of unk2A4[18]? */
    /* 0x0310 */ u16 unk310;                        /* inferred */
    /* 0x0312 */ char pad312[0x2];                  /* maybe part of unk310[2]? */
    /* 0x0314 */ f32 unk314;                        /* inferred */
    /* 0x0318 */ s16 unk318;                        /* inferred */
    /* 0x031A */ char pad31A[0x2];                  /* maybe part of unk318[2]? */
    /* 0x031C */ s16 unk31C;                        /* inferred */
    /* 0x031E */ s16 unk31E;                        /* inferred */
    /* 0x0320 */ s16 unk320;                        /* inferred */
    /* 0x0322 */ s16 unk322;                        /* inferred */
    /* 0x0324 */ s16 unk324;                        /* inferred */
    /* 0x0326 */ s16 unk326;                        /* inferred */
    /* 0x0328 */ s16 unk328;                        /* inferred */
    /* 0x032A */ char pad32A[0x4];                  /* maybe part of unk328[3]? */
    /* 0x032E */ s16 unk32E;                        /* inferred */
    /* 0x0330 */ char pad330[0x4];                  /* maybe part of unk32E[3]? */
    /* 0x0334 */ s32 unk334;                        /* inferred */
    /* 0x0338 */ char pad338[0x4];                  /* maybe part of unk334[2]? */
    /* 0x033C */ s32 unk33C;                        /* inferred */
    /* 0x0340 */ s32 unk340;                        /* inferred */
    /* 0x0344 */ s32 unk344;                        /* inferred */
    /* 0x0348 */ s32 unk348;                        /* inferred */
    /* 0x034C */ char pad34C[0x780];                /* maybe part of unk348[481]? */
} EnRg;                                             /* size 0xACC */

void func_80BF3920(void *arg0, GraphicsContext **arg1) {
    Gfx *temp_a0_2;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    f32 temp_f16;
    f32 temp_f20;
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_f8;
    s32 temp_s4;
    u8 temp_t7;
    u8 temp_t8;
    u8 temp_v0;
    void *temp_v1;
    void *temp_v1_2;
    void *phi_s2;
    s32 phi_fp;
    f32 phi_f6;
    f32 phi_f16;
    s32 phi_t7;
    s32 phi_s4;

    temp_a0 = *arg1;
    temp_s0 = temp_a0;
    func_8012C2DC(temp_a0);
    phi_s2 = arg0;
    phi_fp = 0;
    phi_s4 = 0;
    do {
        temp_v0 = phi_s2->unk0;
        if (((s32) temp_v0 >= 4) && ((s32) temp_v0 < 7)) {
            if (phi_fp == 0) {
                temp_s0->polyXlu.p = Gfx_CallSetupDL(temp_s0->polyXlu.p, 0U);
                temp_v0_2 = temp_s0->polyXlu.p;
                temp_s0->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = (u32) &D_06014CF0;
                temp_v0_2->words.w0 = 0xDE000000;
                phi_fp = 1;
            }
            SysMatrix_StatePush();
            temp_t7 = phi_s2->unk2;
            temp_f6 = (f32) temp_t7;
            phi_f6 = temp_f6;
            if ((s32) temp_t7 < 0) {
                phi_f6 = temp_f6 + 4294967296.0f;
            }
            temp_t8 = phi_s2->unk1;
            temp_f16 = (f32) temp_t8;
            phi_f16 = temp_f16;
            if ((s32) temp_t8 < 0) {
                phi_f16 = temp_f16 + 4294967296.0f;
            }
            temp_f20 = phi_f6 / phi_f16;
            temp_a0_2 = temp_s0->polyXlu.p;
            temp_f4 = temp_f20 * 255.0f;
            temp_s0->polyXlu.p = temp_a0_2 + 8;
            temp_a0_2->words.w0 = 0xFA000000;
            temp_v1 = (phi_s2->unk0 * 4) + &D_80BF5954;
            temp_f8 = (s32) temp_f4;
            if ((MIPS2C_ERROR(cfc1) & 0x78) != 0) {
                if ((MIPS2C_ERROR(cfc1) & 0x78) == 0) {
                    phi_t7 = (s32) (temp_f4 - 2.1474836e9f) | 0x80000000;
                } else {
                    goto block_12;
                }
            } else {
                phi_t7 = temp_f8;
                if (temp_f8 < 0) {
block_12:
                    phi_t7 = -1;
                }
            }
            temp_a0_2->words.w1 = (temp_v1->unk-E << 8) | (temp_v1->unk-10 << 0x18) | (temp_v1->unk-F << 0x10) | (phi_t7 & 0xFF);
            temp_v0_3 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xFB000000;
            temp_v1_2 = (phi_s2->unk0 * 4) + &D_80BF5960;
            temp_v0_3->words.w1 = (temp_v1_2->unk-E << 8) | (temp_v1_2->unk-10 << 0x18) | (temp_v1_2->unk-F << 0x10);
            SysMatrix_InsertTranslation(phi_s2->unk10, phi_s2->unk14, phi_s2->unk18, 0);
            temp_f12 = phi_s2->unk34;
            Matrix_Scale(temp_f12, temp_f12, 1.0f, 1);
            SysMatrix_NormalizeXYZ(arg1 + 0x187FC);
            temp_v0_4 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
            temp_v0_5 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDB060020;
            temp_v0_5->words.w1 = Lib_SegmentedToVirtual(*(&D_80BF5934 + ((s32) (temp_f20 * 7.0f) * 4)));
            temp_v0_6 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w1 = (u32) &D_06014D00;
            temp_v0_6->words.w0 = 0xDE000000;
            SysMatrix_StatePop();
        }
        temp_s4 = phi_s4 + 1;
        phi_s2 += 0x3C;
        phi_s4 = temp_s4;
    } while (temp_s4 != 0x20);
}

void func_80BF3C64(EnRg *arg0) {
    f32 temp_f10;
    f32 temp_f10_2;
    f32 temp_f14;
    f32 temp_f14_2;
    f32 temp_f18;
    f32 temp_f18_2;
    s32 temp_v1;
    u8 temp_a0;
    u8 temp_a0_2;
    void *temp_v0;
    void *phi_v0;
    s32 phi_v1;

    phi_v0 = arg0 + 0x34C;
    phi_v1 = 0;
    do {
        temp_v1 = phi_v1 + 2;
        phi_v1 = temp_v1;
        if (phi_v0->unk0 != 0) {
            temp_a0 = phi_v0->unk2;
            if (temp_a0 == 0) {
                phi_v0->unk0 = 0U;
            } else {
                temp_f18 = phi_v0->unk28;
                temp_f14 = phi_v0->unk2C;
                temp_f10 = phi_v0->unk30;
                phi_v0->unk10 = (f32) (phi_v0->unk10 + temp_f18);
                phi_v0->unk14 = (f32) (phi_v0->unk14 + temp_f14);
                phi_v0->unk18 = (f32) (phi_v0->unk18 + temp_f10);
                phi_v0->unk28 = (f32) (temp_f18 + phi_v0->unk1C);
                phi_v0->unk2C = (f32) (temp_f14 + phi_v0->unk20);
                phi_v0->unk30 = (f32) (temp_f10 + phi_v0->unk24);
                phi_v0->unk2 = (u8) (temp_a0 - 1);
                phi_v0->unk34 = (f32) (phi_v0->unk34 + phi_v0->unk38);
            }
        }
        temp_v0 = phi_v0 + 0x3C;
        if (phi_v0->unk3C != 0) {
            temp_a0_2 = temp_v0->unk2;
            if (temp_a0_2 == 0) {
                temp_v0->unk0 = 0;
            } else {
                temp_f18_2 = temp_v0->unk28;
                temp_f14_2 = temp_v0->unk2C;
                temp_f10_2 = temp_v0->unk30;
                temp_v0->unk10 = (f32) (temp_v0->unk10 + temp_f18_2);
                temp_v0->unk14 = (f32) (temp_v0->unk14 + temp_f14_2);
                temp_v0->unk18 = (f32) (temp_v0->unk18 + temp_f10_2);
                temp_v0->unk28 = (f32) (temp_f18_2 + temp_v0->unk1C);
                temp_v0->unk2C = (f32) (temp_f14_2 + temp_v0->unk20);
                temp_v0->unk30 = (f32) (temp_f10_2 + temp_v0->unk24);
                temp_v0->unk2 = (u8) (temp_a0_2 - 1);
                temp_v0->unk34 = (f32) (temp_v0->unk34 + temp_v0->unk38);
            }
        }
        phi_v0 = temp_v0 + 0x3C;
    } while (temp_v1 != 0x20);
}

void func_80BF3DA0(GraphicsContext **arg0) {
    func_80BF3920(arg0 + 0x34C, arg0);
}

void func_80BF3DC4(void *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp24;
    Collider *sp20;
    Collider *temp_a2;
    Collider *temp_a2_2;
    CollisionCheckContext *temp_a1;

    arg0->unk224 = (s16) (s32) arg0->unk24;
    arg0->unk226 = (s16) (s32) (arg0->unk28 + arg0->unkC4);
    arg0->unk228 = (s16) (s32) arg0->unk2C;
    if (arg0->unk70 >= 10.0f) {
        temp_a2 = arg0 + 0x1DC;
        arg0 = arg0;
        CollisionCheck_SetAT(arg1, arg1 + 0x18884, temp_a2);
    }
    temp_a1 = &arg1->colChkCtx;
    temp_a2_2 = arg0 + 0x1DC;
    sp20 = temp_a2_2;
    sp24 = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2_2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2_2);
}

void func_80BF3E88(s32 arg0, GlobalContext *arg1) {
    Vec3f *temp_a1;
    Vec3s *temp_a0;

    temp_a0 = arg0 + 0x1D6;
    temp_a1 = arg0 + 0x24;
    arg0 = arg0;
    Math_Vec3f_ToVec3s(temp_a0, temp_a1);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x190);
}

void func_80BF3ED4(EnRg *arg0) {
    if ((arg0->unk310 & 0x10) != 0) {
        func_80BF3DC4();
        return;
    }
    func_80BF3E88();
}

? func_80BF3F14(EnRg *arg0, GlobalContext *arg1) {
    u16 temp_t0;
    u16 temp_t8;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;

    temp_v0 = arg0->unk190.base.atFlags;
    temp_t8 = arg0->unk310 & 0xFFDF;
    temp_t0 = temp_t8 & 0xFFBF;
    arg0->unk310 = temp_t8;
    arg0->unk310 = temp_t0;
    arg0->unk310 = temp_t0 & 0xFF7F;
    if (((temp_v0 & 2) != 0) || ((arg0->unk1DC.base.atFlags & 2) != 0)) {
        arg0->unk190.base.atFlags = temp_v0 & 0xFFFD;
        arg0->unk1DC.base.atFlags &= 0xFFFD;
        arg0->unk310 |= 0x20;
    }
    temp_v0_2 = arg0->unk190.base.acFlags;
    if (((temp_v0_2 & 2) != 0) || ((arg0->unk1DC.base.acFlags & 2) != 0)) {
        arg0->unk190.base.acFlags = temp_v0_2 & ~2;
        arg0->unk1DC.base.acFlags &= -3;
        arg0->unk310 |= 0x40;
    }
    temp_v0_3 = arg0->unk190.base.ocFlags1;
    if (((temp_v0_3 & 2) != 0) || ((arg0->unk1DC.base.ocFlags1 & 2) != 0)) {
        arg0->unk190.base.ocFlags1 = temp_v0_3 & ~2;
        arg0->unk1DC.base.ocFlags1 &= -3;
        arg0->unk310 |= 0x80;
    }
    return 0;
}

void func_80BF3FF8(EnRg *arg0) {
    arg0->unk144.animPlaybackSpeed = arg0->unk314;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

? func_80BF4024(Actor *arg0, GlobalContext *arg1) {
    SkelAnime *sp1C;
    SkelAnime *temp_a0;

    if (arg1->csCtx.state == 0) {
        temp_a0 = arg0 + 0x144;
        if (arg0->unk334 == 1) {
            sp1C = temp_a0;
            arg0 = arg0;
            if (func_801378B8(temp_a0, 2.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x39D0U);
            }
            if (func_801378B8(sp1C, 22.0f) != 0) {
                Audio_PlayActorSound2(arg0, 0x38B1U);
            }
        }
    }
    return 0;
}

s32 func_80BF409C(EnRg *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_v1;
    s32 phi_v1;

    temp_a0 = arg0 + 0x144;
    phi_v1 = 0;
    if (arg1 != arg0->unk334) {
        arg0->unk334 = arg1;
        arg0 = arg0;
        temp_v1 = func_8013BC6C(temp_a0, &D_80BF5914, arg1);
        arg0->unk314 = arg0->unk144.animPlaybackSpeed;
        phi_v1 = temp_v1;
    }
    return phi_v1;
}

void func_80BF40F4(EnRg *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    temp_v0 = arg0->unk31C;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk31C = temp_v0 - 1;
        phi_v1 = arg0->unk31C;
    }
    if (phi_v1 == 0) {
        arg0->unk31E += 1;
        if ((s32) arg0->unk31E >= 4) {
            arg0 = arg0;
            arg0->unk31C = Rand_S16Offset(0x1E, 0x1E);
            arg0->unk31E = 0;
        }
    }
}

? func_80BF416C(Actor *arg0, GlobalContext *arg1) {
    if (((arg0->bgCheckFlags & 1) != 0) && (arg0->speedXZ >= 0.01f)) {
        Audio_PlayActorSound2(arg0, 0x30F0U);
        func_800AE930(arg1 + 0x830, Effect_GetParams(arg0->unk340), &arg0->world.pos.x, 18.0f, (s16) (s32) arg0->shape.rot.y, arg0->floorPoly, (s32) arg0->floorBgId);
    } else {
        func_800AEF44(Effect_GetParams(arg0->unk340));
    }
    return 0;
}

s32 func_80BF4220(Actor *arg0, GlobalContext *arg1, Actor *arg2) {
    CollisionPoly *sp44;
    u32 sp40;
    Vec3f sp34;

    sp44 = NULL;
    if ((Actor_IsActorFacingActorAndWithinRange(arg0, arg2, 400.0f, 0x2000) != 0) && (func_800C55C4(arg1 + 0x830, &arg0->world.pos, &arg2->world.pos, &sp34, &sp44, 1U, 0U, 0U, 1U, &sp40) == 0)) {
        return 1;
    }
    return 0;
}

? func_80BF42BC(void *arg0, f32 arg1) {
    f32 sp2C;
    s32 sp24;
    f32 temp_f12;
    s32 temp_f16;
    f32 phi_f12;

    Math_ApproachF(arg0 + 0x70, arg1, 0.3f, 0.5f);
    temp_f12 = arg0->unk70 * 0.03846154f;
    phi_f12 = temp_f12;
    if (temp_f12 > 1.0f) {
        phi_f12 = 1.0f;
    }
    sp2C = phi_f12;
    temp_f16 = (s32) (5460.0f * phi_f12);
    sp24 = (s32) (s16) temp_f16;
    arg0->unk58 = (f32) (0.01f - (Math_SinS((s16) temp_f16) * 0.01f));
    arg0->unk5C = (f32) ((Math_SinS(sp26) * 0.01f) + 0.01f);
    arg0->unk60 = (f32) ((Math_SinS(sp26) * 0.01f) + 0.01f);
    arg0->unkC4 = (f32) (arg0->unk5C * 100.0f * 14.0f);
    if ((arg0->unk310 & 0x1000) == 0) {
        arg0->unkBC = (s16) (arg0->unkBC + (s32) (13650.0f * phi_f12));
    }
    arg0->unk30 = (s16) arg0->unkBC;
    return 0;
}

s32 func_80BF43FC(EnRg *arg0) {
    ?32 sp9C;
    ?32 sp90;
    ? sp8C;
    ? sp88;
    f32 sp84;
    s32 temp_s2;
    s32 temp_s3;
    s32 temp_s5;
    s32 temp_s7;
    s32 phi_s0;
    s32 phi_s6;
    s32 phi_s4;
    f32 phi_f20;
    s32 phi_s4_2;

    temp_s5 = arg0->unk344;
    temp_s7 = (((s32) (arg0->actor.params & 0x7F80) >> 7) & 0xFF) * 4;
    phi_s0 = *(&D_80BF57E4 + (temp_s5 * 0x10) + temp_s7);
    phi_s6 = 0;
    phi_s4 = -1;
    phi_f20 = 0.0f;
loop_1:
    temp_s2 = phi_s0 - 1;
    func_8013C8B8(arg0->unk234, temp_s2, &sp9C);
    temp_s3 = phi_s0 + 1;
    func_8013C8B8(arg0->unk234, temp_s3, &sp90);
    phi_s4_2 = phi_s4;
    if ((func_8017D668(arg0->actor.world.pos.x, arg0->actor.world.pos.z, sp9C, spA4, sp90, sp98, &sp8C, &sp88, &sp84) != 0) && ((phi_s6 == 0) || (phi_s4 == temp_s2) || (sp84 < phi_f20))) {
        phi_s4_2 = phi_s0;
        phi_s6 = 1;
        phi_f20 = sp84;
    }
    phi_s0 = temp_s3;
    phi_s4 = phi_s4_2;
    if ((temp_s5 != 0x12) && (temp_s3 < (&D_80BF57E4 + (temp_s5 * 0x10) + temp_s7)->unk10)) {
        goto loop_1;
    }
    return phi_s4_2;
}

s32 func_80BF4560(EnRg *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 phi_v1;

    temp_v0 = func_800C99AC(arg1 + 0x830, arg0->actor.floorPoly, (s32) arg0->actor.floorBgId);
    phi_v1 = temp_v0;
    if ((temp_v0 < 4) || (temp_v0 >= 0x13)) {
        phi_v1 = -1;
    }
    return phi_v1;
}

s32 func_80BF45B4(Actor *arg0) {
    s32 sp24;
    s32 sp20;
    Actor *temp_a0;
    f32 temp_f0;
    s16 *temp_v0_2;
    s16 temp_a2;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    u16 temp_t4;
    s32 phi_a1;
    s32 phi_a1_2;
    s32 phi_t0;
    s32 phi_t1;

    phi_t0 = 0;
    phi_t1 = 0;
    if (((arg0->bgCheckFlags & 8) != 0) && (temp_f0 = arg0->speedXZ, (temp_f0 >= 5.0f))) {
        temp_v1 = arg0->world.rot.y;
        temp_a2 = arg0->wallYaw + 0x8000;
        temp_v0 = temp_v1 - temp_a2;
        phi_a1 = (s32) temp_v0;
        if ((s32) temp_v0 < 0) {
            phi_a1 = -(s32) temp_v0;
        }
        if (phi_a1 >= 0x3400) {
            arg0->world.rot.y = (temp_a2 - temp_v0) + 0x8000;
            arg0->unk322 = 0xA;
            phi_t0 = 1;
        } else {
            phi_a1_2 = (s32) temp_v0;
            if ((s32) temp_v0 < 0) {
                phi_a1_2 = -(s32) temp_v0;
            }
            if (phi_a1_2 >= 0x1000) {
                arg0->world.rot.y = (temp_a2 - temp_v0) + 0x8000;
                arg0->unk322 = 0xA;
                arg0->speedXZ = temp_f0 * 0.75f;
                phi_t0 = 1;
            } else {
                arg0->world.rot.y = temp_v1 + 0x8000;
                arg0->speedXZ = temp_f0 * 0.25f;
                phi_t0 = 1;
                phi_t1 = 1;
            }
        }
    } else if ((arg0->unk310 & 0x40) != 0) {
        sp20 = 0;
        temp_a0 = arg0;
        phi_t0 = 2;
        if (temp_a0->colorFilterTimer == 0) {
            temp_v1_2 = temp_a0->world.rot.y;
            temp_a0->speedXZ *= 0.5f;
            if ((s32) (s16) (Actor_YawBetweenActors(arg0, arg0->unk1E4) - temp_v1_2) > 0) {
                temp_a0->world.rot.y = temp_v1_2 - 0x2000;
            } else {
                temp_a0->world.rot.y = temp_v1_2 + 0x2000;
            }
        }
        arg0 = temp_a0;
        sp24 = 2;
        sp20 = 0;
        func_800BCB70(temp_a0, 0x4000, 0xFF, 0, (s16) 0x28);
        arg0->unk322 = 0xA;
    }
    if (phi_t0 != 0) {
        temp_v0_2 = arg0->unk18C;
        temp_t4 = arg0->unk310 & 0xF7FF;
        arg0->unk310 = temp_t4;
        arg0->unk310 = (u16) (temp_t4 & 0xFFBF);
        if ((temp_v0_2 != 0) && (*temp_v0_2 == 0)) {
            D_80BF5C10 = 0;
        }
        arg0->unk18C = NULL;
        arg0->unk324 = 0;
    }
    return phi_t1;
}

? func_80BF47AC(EnRg *arg0, GlobalContext *arg1) {
    f32 temp_f0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v0_2;
    u16 temp_v0;
    s32 phi_v1;
    f32 phi_f0;
    f32 phi_f0_2;
    f32 phi_f2;

    temp_f0 = arg1->actorCtx.actorList[2].first->unkAD0;
    if (temp_f0 < 20.0f) {
        phi_f2 = 20.0f;
    } else {
        phi_f2 = temp_f0;
    }
    temp_v0 = arg0->unk310;
    if (((temp_v0 & 0x400) != 0) || ((temp_v0 & 0x1000) != 0)) {
        phi_f0 = 0.0f;
    } else {
        temp_v0_2 = arg0->unk348;
        if (temp_v0_2 >= 2) {
            phi_f0 = phi_f2 * 0.5f;
        } else if (temp_v0_2 == 1) {
            phi_f0 = phi_f2 * 0.75f;
        } else if (temp_v0_2 == 0) {
            temp_v0_3 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
            phi_v1 = (s32) temp_v0_3;
            if ((s32) temp_v0_3 < 0) {
                phi_v1 = -(s32) temp_v0_3;
            }
            if ((phi_v1 >= 0x4001) || ((s32) arg0->unk326 > 0)) {
                phi_f0 = phi_f2 * 0.72f;
            } else {
                phi_f0 = phi_f2 * 0.94f;
            }
        } else if (temp_v0_2 == -1) {
            phi_f0 = phi_f2 * 1.6f;
        } else {
            phi_f0 = 2.0f * phi_f2;
        }
    }
    phi_f0_2 = phi_f0;
    if (phi_f0 > 0.0f) {
        temp_v0_4 = arg0->unk320;
        if (temp_v0_4 != 0) {
            arg0->unk320 = temp_v0_4 - 1;
        }
        phi_f0_2 = phi_f0 + ((f32) arg0->unk320 * 0.01f);
    }
    func_80BF42BC((bitwise void *) 20.0f, phi_f0_2);
    return 0;
}

void func_80BF4934(Actor *arg0) {
    if (arg0->unk318 == 1) {
        Audio_PlayActorSound2(arg0, 0x38F2U);
    }
}

void func_80BF4964(EnRg *arg0) {
    void *sp3C;
    Vec3f sp30;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s32 temp_v0_2;
    s32 temp_v0_7;
    s32 temp_v1;
    u16 temp_v0_6;
    void *temp_v0;

    temp_v0 = arg0->unk234;
    if (temp_v0 != 0) {
        sp3C = Lib_SegmentedToVirtual(temp_v0->unk4);
        if (func_8013BD40(arg0, arg0->unk234, arg0->unk33C) != 0) {
            temp_v1 = arg0->unk33C + 1;
            temp_v0_2 = arg0->unk234->unk0 - 1;
            if (temp_v0_2 < temp_v1) {
                arg0->unk33C = temp_v0_2;
            } else {
                arg0->unk33C = temp_v1;
            }
        }
        temp_v0_3 = arg0->unk322;
        if (temp_v0_3 != 0) {
            arg0->unk322 = temp_v0_3 - 1;
        }
        temp_v0_4 = arg0->unk324;
        if (temp_v0_4 != 0) {
            arg0->unk324 = temp_v0_4 - 1;
        }
        temp_v0_5 = arg0->unk326;
        if (temp_v0_5 != 0) {
            arg0->unk326 = temp_v0_5 - 1;
        }
        temp_v0_6 = arg0->unk310;
        if (((temp_v0_6 & 0x400) == 0) && ((temp_v0_6 & 0x1000) == 0) && (arg0->unk322 == 0) && (arg0->unk324 == 0) && ((arg0->actor.bgCheckFlags & 1) != 0)) {
            temp_v0_7 = arg0->unk18C;
            if (temp_v0_7 == 0) {
                Math_Vec3s_ToVec3f(&sp30, (arg0->unk33C * 6) + sp3C);
            } else {
                Math_Vec3f_Copy(&sp30, temp_v0_7 + 0x24);
            }
            Math_ApproachS(arg0 + 0x32, Math_Vec3f_Yaw(arg0 + 0x24, &sp30), 0xA, 0x71C);
        }
    }
}

void func_80BF4AB8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    Actor *temp_a2_2;
    Actor *temp_s3;
    Actor *temp_v0;
    f32 temp_f0;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v1;
    s16 temp_v1_2;
    u16 temp_t5;
    void *temp_v0_2;
    Actor *phi_s0;
    Actor *phi_s0_2;
    Actor *phi_s0_3;

    temp_s3 = arg1->actorCtx.actorList[2].first;
    phi_s0 = NULL;
    phi_s0_3 = NULL;
    if ((arg0->unk310 & 0x800) == 0) {
        if (arg0->unk320 == 0) {
loop_2:
            temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 6, 0x82);
            phi_s0_2 = temp_v0;
            phi_s0_3 = temp_v0;
            if (temp_v0 != 0) {
                if ((func_80BF4220(arg0, arg1, temp_v0) != 0) && (temp_v0->update != 0)) {
                    arg0->unk18C = temp_v0;
                    arg0->unk310 = (u16) (arg0->unk310 | 0x800);
                } else {
                    phi_s0_2 = temp_v0->next;
                    goto block_7;
                }
            } else {
block_7:
                phi_s0 = phi_s0_2;
                phi_s0_3 = phi_s0_2;
                if (phi_s0_2 != 0) {
                    goto loop_2;
                }
            }
        }
        if ((phi_s0_3 == 0) && (D_80BF5C10 == 0) && (arg0->unk326 == 0) && (temp_s3->unkA74 & 0x80000) && (temp_s3->unkD5C == 0) && (func_80BF4220(arg0, arg1, temp_s3) != 0)) {
            arg0->unk18C = temp_s3;
            arg0->unk310 = (u16) (arg0->unk310 | 0x800);
            D_80BF5C10 = 1;
        }
    } else {
        temp_a2 = arg0->unk18C;
        if ((temp_a2 != 0) && (func_80BF4220(arg0, arg1, temp_a2) == 0)) {
            if (arg0->unk18C->id == 0) {
                D_80BF5C10 = 0;
            }
            arg0->unk18C = NULL;
            arg0->unk310 = (u16) (arg0->unk310 & 0xF7FF);
        }
    }
    if ((arg0->unk310 & 0x20) != 0) {
        temp_v0_2 = arg0->unk1E0;
        if (temp_v0_2 != 0) {
            temp_v1 = temp_v0_2->unk0;
            if (temp_v1 == 0x82) {
                temp_v0_2->unk1C = (s16) (temp_v0_2->unk1C | 0x3F);
                arg0->unk320 = (s16) (arg0->unk320 + 0x190);
                temp_v1_2 = arg0->unk320;
                if ((s32) temp_v1_2 >= 0x191) {
                    arg0->unk320 = 0x190;
                } else {
                    arg0->unk320 = temp_v1_2;
                }
            } else if (temp_v1 == 0) {
                arg0->unk326 = 0x28;
                if ((temp_s3->unkA74 & 0x1000) != 0) {
                    temp_v0_3 = temp_s3->unkAD4;
                    temp_s3->unkAD0 = (f32) (temp_s3->unkAD0 * 0.5f);
                    temp_f0 = temp_s3->unkAD0;
                    temp_s3->unkB08 = temp_f0;
                    temp_s3->unkB0C = (f32) (temp_s3->unkB0C + (temp_f0 * 0.05f));
                    if ((s32) (s16) (arg0->yawTowardsPlayer - temp_v0_3) > 0) {
                        temp_s3->unkAD4 = (s16) (temp_v0_3 + 0x2000);
                    } else {
                        temp_s3->unkAD4 = (s16) (temp_v0_3 - 0x2000);
                    }
                    temp_v0_4 = temp_s3->world.rot.y;
                    temp_s3->unkB8C = 4;
                    temp_s3->unkD5C = 0x14;
                    temp_s3->home.rot.y = temp_v0_4;
                    temp_s3->shape.rot.y = temp_v0_4;
                }
                temp_a2_2 = arg0->unk18C;
                if ((temp_a2_2 != 0) && (temp_a2_2->id == 0)) {
                    D_80BF5C10 = 0;
                }
            }
        }
        arg0->unk18C = NULL;
        temp_t5 = arg0->unk310 & 0xF7FF;
        arg0->unk310 = temp_t5;
        arg0->unk310 = (u16) (temp_t5 & 0xFFDF);
    }
}

void func_80BF4D64(PosRot *arg0) {
    Math3D_XZBoundCheck(-1261.0f, -901.0f, -1600.0f, -1520.0f, arg0->pos.x, arg0->pos.z);
}

s32 func_80BF4DA8(Actor *arg0) {
    s32 sp3C;
    Vec3f *temp_s0;
    f32 temp_f20;
    s16 *temp_v0;
    s16 temp_a0;
    s16 temp_v1;
    Vec3f *phi_s0;
    s32 phi_v0;

    sp3C = 0;
    phi_s0 = &D_80BF596C;
loop_1:
    temp_f20 = Actor_XZDistanceToPoint(arg0, phi_s0);
    temp_a0 = arg0->world.rot.y;
    temp_s0 = phi_s0 + 0xC;
    temp_v1 = Actor_YawToPoint(arg0, phi_s0) - temp_a0;
    phi_s0 = temp_s0;
    if (temp_f20 < 100.0f) {
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0xC00) {
            if ((s32) temp_v1 > 0) {
                arg0->world.rot.y = temp_a0 - 0x1600;
            } else {
                arg0->world.rot.y = temp_a0 + 0x1600;
            }
            temp_v0 = arg0->unk18C;
            arg0->unk324 = 0x14;
            arg0->unk310 = (u16) (arg0->unk310 & 0xF7FF);
            if ((temp_v0 != 0) && (*temp_v0 == 0)) {
                D_80BF5C10 = 0;
            }
            arg0->unk18C = NULL;
            sp3C = 1;
        } else {
            goto block_12;
        }
    } else {
block_12:
        if (temp_s0 != &D_80BF59F0) {
            goto loop_1;
        }
    }
    return sp3C;
}

void func_80BF4EBC(EnRg *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    u16 temp_t0;
    u16 temp_t0_2;
    u16 temp_t8;
    s16 phi_v1;

    if ((this->unk310 & 0x100) != 0) {
        if (func_801378B8(&this->unk144, this->unk154) != 0) {
            temp_t0 = this->unk310 & 0xFEFF;
            this->unk310 = temp_t0;
            this->unk310 = temp_t0 | 0x10;
            this->unk320 = 0;
            this->actionFunc = func_80BF4FC4;
            this->actor.shape.yOffset = 14.0f;
        }
    } else if ((gSaveContext.weekEventReg[12] & 2) != 0) {
        temp_v0 = this->unk318;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            this->unk318 = temp_v0 - 1;
            phi_v1 = this->unk318;
        }
        if (phi_v1 == 0) {
            func_80BF409C(this, 1);
            temp_t8 = this->unk310 & 0xFFF7;
            temp_t0_2 = temp_t8 & 0xFFEF;
            this->unk310 = temp_t8;
            this->unk310 = temp_t0_2;
            this->unk310 = temp_t0_2 | 0x100;
            this->actor.shape.yOffset = 0.0f;
            this->unk318 = Rand_S16Offset(0, 0x14);
        }
    }
    func_8013D9C8(globalCtx, &this->unk32E, &this->unk328, 3);
}

void func_80BF4FC4(EnRg *this, GlobalContext *globalCtx) {
    s16 temp_v0_5;
    s32 temp_v0_3;
    u16 temp_v0;
    u16 temp_v0_2;
    void *temp_v0_4;
    s16 phi_v1;

    this->unk344 = func_80BF4560(this, globalCtx);
    if (func_801690CC(globalCtx) == 0) {
        temp_v0 = this->actor.bgCheckFlags;
        if ((temp_v0 & 2) != 0) {
            temp_v0_2 = this->unk310;
            if ((temp_v0_2 & 0x400) != 0) {
                this->unk310 = temp_v0_2 & 0xFBFF;
                this->actor.speedXZ = 0.0f;
            }
            if (this->unk344 != -1) {
                temp_v0_3 = func_80BF43FC(this);
                this->unk33C = temp_v0_3;
                if (temp_v0_3 >= 0) {
                    this->unk33C = temp_v0_3 + 1;
                }
            }
        } else if (((temp_v0 & 1) != 0) && ((this->unk310 & 0x1000) == 0) && (func_80BF4D64(&this->actor.world) != 0)) {
            this->unk310 |= 0x1000;
        }
        temp_v0_4 = this->unk18C;
        if ((temp_v0_4 != 0) && (temp_v0_4->unk138 == 0)) {
            this->unk18C = NULL;
            this->unk310 &= 0xF7FF;
        }
        if ((gSaveContext.eventInf[1] & 1) != 0) {
            temp_v0_5 = this->unk318;
            if (temp_v0_5 == 0) {
                phi_v1 = 0;
            } else {
                this->unk318 = temp_v0_5 - 1;
                phi_v1 = this->unk318;
            }
            if (phi_v1 == 0) {
                func_80BF47AC(this, globalCtx);
                if ((this->unk324 == 0) && (func_80BF4DA8(&this->actor) == 0)) {
                    func_80BF4AB8(&this->actor, globalCtx);
                }
                if (func_80BF45B4(&this->actor) != 0) {
                    this->unk310 |= 0x400;
                    this->actor.velocity.y = 7.0f;
                }
                func_80BF4964(this);
                Actor_SetVelocityYRotationAndGravity(&this->actor);
                Actor_ApplyMovement(&this->actor);
                func_80BF416C(&this->actor, globalCtx);
                return;
            }
            goto block_25;
        }
block_25:
        func_80BF4934(&this->actor);
        // Duplicate return node #26. Try simplifying control flow for better match
    }
}

void EnRg_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnRg *this = (EnRg *) thisx;
    void *temp_v0;

    if (gSaveContext.entranceIndex == 0xD010) {
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
        SkelAnime_InitSV(globalCtx, &this->unk144, &D_06011AC8, NULL, &this->unk238, &this->unk2A4, 0x12);
        this->unk334 = -1;
        func_80BF409C(this, 0);
        this->unk144.animCurrentFrame = this->unk144.animFrameCount;
        Collider_InitAndSetSphere(globalCtx, &this->unk1DC, &this->actor, &D_80BF5760);
        Collider_InitAndSetCylinder(globalCtx, &this->unk190, &this->actor, &D_80BF578C);
        this->unk1DC.dim.worldSphere.radius = this->unk1DC.dim.modelSphere.radius;
        CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80BF57C4, &D_80BF57B8);
        Effect_Add(globalCtx, &this->unk340, 4, 0U, (u8) 0, &D_80BF59F0);
        temp_v0 = func_8013BEDC(globalCtx, ((s32) (this->actor.params & 0x7F80) >> 7) & 0xFF, 0xFF, &this->unk33C);
        this->unk234 = temp_v0;
        if (temp_v0 != 0) {
            this->unk33C = 1;
        }
        this->actor.flags &= -2;
        this->unk310 = 8;
        this->actor.gravity = -1.0f;
        func_8013AED4(&this->unk310, 3U, 7U);
        if ((gSaveContext.weekEventReg[12] & 2) == 0) {
            this->unk318 = Rand_S16Offset(0x1E, 0x1E);
        }
        this->unk31C = 0;
        this->unk31E = 0;
        this->actionFunc = func_80BF4EBC;
        return;
    }
    Actor_MarkForDeath(&this->actor);
}

void EnRg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnRg *this = (EnRg *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk190);
    Collider_DestroySphere(globalCtx, &this->unk1DC);
    Effect_Destroy(globalCtx, this->unk340);
}

void EnRg_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnRg *this = (EnRg *) thisx;
    func_80BF3F14(this, globalCtx);
    this->actionFunc(this, globalCtx);
    this->actor.shape.rot.y = this->actor.world.rot.y;
    if ((this->unk310 & 0x10) == 0) {
        func_80BF40F4(this);
        func_80BF3FF8(this);
        func_80BF4024(&this->actor, globalCtx);
    }
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 20.0f, 0.0f, 0x1DU);
    if (this->actor.floorHeight <= -32000.0f) {
        Math_Vec3f_Copy(&this->actor.world.pos, &this->actor.prevPos);
    }
    func_80BF3ED4(this, globalCtx);
    if (func_801690CC(globalCtx) == 0) {
        func_80BF3C64(this);
    }
}

void func_80BF547C(EnRg *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = *arg1;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(arg0->actor.world.pos.x, arg0->actor.world.pos.y + arg0->actor.shape.yOffset, arg0->actor.world.pos.z, 0);
    Matrix_RotateY(arg0->actor.shape.rot.y, 1U);
    SysMatrix_InsertTranslation(0.0f, -arg0->actor.shape.yOffset, 0.0f, 1);
    SysMatrix_InsertZRotation_s(arg0->actor.shape.rot.z, 1);
    SysMatrix_InsertTranslation(0.0f, arg0->actor.shape.yOffset, 0.0f, 1);
    Matrix_Scale(arg0->actor.scale.x, arg0->actor.scale.y, arg0->actor.scale.z, 1);
    SysMatrix_InsertXRotation_s(arg0->actor.shape.rot.x, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_060091A8;
}

s32 func_80BF5588(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp1C;
    void *temp_v1;
    s32 phi_v0;

    if (arg1 != 0xA) {
        if (arg1 != 0xB) {
            phi_v0 = 2;
            if (arg1 != 0xE) {
                phi_v0 = 9;
            }
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (((arg5->unk310 & 8) != 0) && (phi_v0 < 9)) {
        temp_v1 = arg5 + (phi_v0 * 2);
        sp1C = temp_v1;
        arg4->y += (s32) (Math_SinS(temp_v1->unk32E) * 200.0f);
        arg4->z += (s32) (Math_CosS(temp_v1->unk328) * 200.0f);
    }
    return 0;
}

void EnRg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnRg *this = (EnRg *) thisx;
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    if ((this->unk310 & 0x10) == 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp38 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp38->polyOpa.p;
        sp38->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp30 = temp_v0;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80BF59F8 + (this->unk31E * 4)));
        SkelAnime_DrawSV(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BF5588, NULL, &this->actor);
    } else {
        func_80BF547C(this, &globalCtx->state.gfxCtx);
    }
    func_80BF3DA0((GraphicsContext **) this, globalCtx);
}

