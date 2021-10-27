typedef struct DmStk {
    /* 0x000 */ Actor actor;
    /* 0x144 */ ObjectContext unk_144;              /* inferred */
    /* 0x290 */ void (*actionFunc)(DmStk *, GlobalContext *); /* overlap */
    /* 0x294 */ ColliderCylinder unk_294;           /* overlap; inferred */
    /* 0x2E0 */ s16 unk_2E0;                        /* overlap; inferred */
    /* 0x2E4 */ s32 unk_2E4;                        /* overlap; inferred */
    /* 0x2E8 */ s32 unk_2E8;                        /* overlap; inferred */
    /* 0x2EC */ s32 unk_2EC;                        /* overlap; inferred */
    /* 0x2F0 */ s32 unk_2F0;                        /* overlap; inferred */
    /* 0x2F8 */ s32 unk_2F8;                        /* overlap; inferred */
    /* 0x2FC */ s32 unk_2FC;                        /* overlap; inferred */
    /* 0x300 */ f32 unk_300;                        /* overlap; inferred */
    /* 0x328 */ u16 unk_328;                        /* overlap; inferred */
    /* 0x32C */ s8 unk_32C;                         /* overlap; inferred */
    /* 0x32D */ s8 unk_32D;                         /* overlap; inferred */
    /* 0x32E */ s8 unk_32E;                         /* overlap; inferred */
    /* 0x32F */ s8 unk_32F;                         /* overlap; inferred */
    /* 0x330 */ s32 unk_330;                        /* overlap; inferred */
    /* 0x334 */ s8 unk_334;                         /* overlap; inferred */
    /* 0x335 */ s8 unk_335;                         /* overlap; inferred */
    /* 0x336 */ s8 unk_336;                         /* overlap; inferred */
    /* 0x337 */ s8 unk_337;                         /* overlap; inferred */
    /* 0x338 */ s8 unk_338;                         /* overlap; inferred */
    /* 0x339 */ u8 unk_339;                         /* overlap; inferred */
    /* 0x33A */ u8 unk_33A;                         /* overlap; inferred */
    /* 0x33B */ u8 unk_33B;                         /* overlap; inferred */
} DmStk;                                            /* size = 0x33C */

struct _mips2c_stack_DmStk_Destroy {};              /* size 0x0 */

struct _mips2c_stack_DmStk_Draw {
    /* 0x00 */ char pad_0[0x38];
};                                                  /* size = 0x38 */

struct _mips2c_stack_DmStk_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ ObjectContext *sp34;                 /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_DmStk_Update {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A9FDB0 {};              /* size 0x0 */

struct _mips2c_stack_func_80A9FE3C {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A9FED8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA00CC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA0100 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA0158 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA01C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA0264 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA0420 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Actor *sp18;                         /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA05F0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA0634 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA066C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA071C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA076C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
    /* 0x20 */ char pad_20[0x8];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AA09DC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA0B08 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA0DA8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA0E1C {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA0E90 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Actor *sp18;                         /* inferred */
    /* 0x1C */ char pad_1C[0x4];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA16F4 {};              /* size 0x0 */

struct _mips2c_stack_func_80AA1704 {};              /* size 0x0 */

struct _mips2c_stack_func_80AA1714 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AA17F8 {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ s16 sp18;                            /* inferred */
    /* 0x1A */ char pad_1A[0x2];
    /* 0x1C */ s16 sp1C;                            /* inferred */
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA18D8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA192C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA1998 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA19EC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA1A50 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA1AC8 {};              /* size 0x0 */

struct _mips2c_stack_func_80AA1AF8 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AA1B9C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AA1C64 {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ObjectContext *sp2C;                 /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AA1D1C {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ u32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80AA26CC {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ CollisionCheckContext *sp1C;         /* inferred */
    /* 0x20 */ ColliderCylinder *sp20;              /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80AA2720 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Actor *sp1C;                         /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80AA27EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AA2B14 {};              /* size 0x0 */

struct _mips2c_stack_func_80AA2BC0 {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0x4];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ Gfx *sp38;                           /* inferred */
    /* 0x3C */ char pad_3C[0x18];                   /* maybe part of sp38[7]? */
    /* 0x54 */ Gfx *sp54;                           /* inferred */
    /* 0x58 */ char pad_58[0x4];
    /* 0x5C */ GraphicsContext *sp5C;               /* inferred */
    /* 0x60 */ char pad_60[0x28];                   /* maybe part of sp5C[11]? */
    /* 0x88 */ Gfx *sp88;                           /* inferred */
    /* 0x8C */ char pad_8C[0x4];
    /* 0x90 */ GraphicsContext *sp90;               /* inferred */
    /* 0x94 */ char pad_94[0xC];
};                                                  /* size = 0xA0 */

struct _mips2c_stack_func_80AA33A4 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

s32 func_800B8718(DmStk *, GlobalContext *);        /* extern */
? func_800B874C(DmStk *, GlobalContext *, f32, f32); /* extern */
? func_8019FE74(? *, ?, ?, Actor *);                /* extern */
? func_801A0654(s32, ?, ?, Actor *);                /* extern */
? func_801A479C(Vec3f *, ?, ?, Actor *);            /* extern */
? func_801A4A28(?, Actor *);                        /* extern */
void func_80A9FDB0(DmStk *arg0, GlobalContext *arg1); /* static */
void func_80A9FE3C(SkelAnime *arg2, GlobalContext *arg3, u16 arg4, void *, s32); /* static */
void func_80A9FED8(Actor *arg0, void *arg1);        /* static */
void func_80AA00CC(Actor *arg0, void *arg1);        /* static */
void func_80AA0100(Actor *arg0, void *arg1);        /* static */
void func_80AA0158(Actor *arg0, void *arg1);        /* static */
void func_80AA01C0(Actor *arg0, void *arg1);        /* static */
void func_80AA0264(Actor *arg0, Actor *arg1);       /* static */
void func_80AA0420(Actor *arg0, void *arg1);        /* static */
void func_80AA05F0(Actor *arg0, void *arg1);        /* static */
void func_80AA0634(Actor *arg0, void *arg1);        /* static */
void func_80AA066C(Actor *arg0, void *arg1);        /* static */
void func_80AA071C(Actor *arg0, void *arg1);        /* static */
void func_80AA076C(Actor *arg0, void *arg1);        /* static */
void func_80AA09DC(Actor *arg0, void *arg1);        /* static */
void func_80AA0B08(Actor *arg0, void *arg1);        /* static */
void func_80AA0DA8(Actor *arg0, void *arg1);        /* static */
void func_80AA0E1C(Actor *arg0, void *arg1);        /* static */
void func_80AA0E90(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AA1AF8(Actor *arg0, GlobalContext *arg1, DmStk *, GlobalContext *); /* static */
void func_80AA1D1C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AA26CC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80AA2B14(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80AA2BC0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
void func_80AA33A4(GlobalContext *arg4, s32 limbIndex, Gfx **dList, Vec3s *rot, Actor *actor); /* static */
extern ? D_060046B0;
extern ? D_060053C0;
extern ? D_06005870;
extern Gfx D_06006BB0;
extern Gfx D_06007840;
extern ? D_060079F0;
extern ? D_060084C0;
extern void D_06008658;
extern ? D_060087B0;
extern ? D_06008A80;
extern ? D_060090C0;
extern ? D_06009710;
extern ? D_06009AC0;
extern ? D_06009DA0;
extern ? D_0600A530;
extern ? D_0600A5C0;
extern ? D_0600AE30;
extern ? D_0600AEC0;
extern ? D_0600CAD0;
extern FlexSkeletonHeader D_06013328;
extern ? D_06016620;
extern ? D_801D6654;
static ColliderCylinderInit D_80AA35A0 = {
    {1, 0, 0x1D, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0xE, 0x26, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80AA35CC = {1, 0, 0, 0, 0xFF};
static DamageTable D_80AA35D8 = {
    {
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
        0xF1,
    },
};
static ? D_80AA35F8;                                /* unable to generate initializer */
static s32 D_80AA3CB8 = 0;
static s32 D_80AA3CBC = 0;

void func_80A9FDB0(DmStk *arg0, GlobalContext *arg1) {
    s16 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk_2E0;
    if ((((s32) temp_v0 >= 0) && ((s32) temp_v0 < 6)) || (temp_v0 == 0x20) || (temp_v0 == 0x21) || (temp_v0 == 0x28) || (temp_v0 == 0x29)) {
        phi_v0 = (s32) arg0->unk_336;
    } else if ((s32) temp_v0 >= 0x41) {
        phi_v0 = (s32) arg0->unk_338;
    } else {
        phi_v0 = (s32) arg0->unk_337;
    }
    if (phi_v0 >= 0) {
        gSegments[6] = (arg1 + (phi_v0 * 0x44))->unk_17D98 + 0x80000000;
    }
}

void func_80A9FE3C(SkelAnime *arg2, GlobalContext *arg3, u16 arg4) {
    f32 temp_f0;
    void *temp_s0;
    f32 phi_f2;

    func_80A9FDB0();
    temp_s0 = arg3 + (arg4 * 0x18);
    temp_f0 = temp_s0->unk_C;
    if (temp_f0 < 0.0f) {
        phi_f2 = (f32) SkelAnime_GetFrameCount(temp_s0->unk_0);
    } else {
        phi_f2 = temp_f0;
    }
    SkelAnime_ChangeAnim(arg2, (AnimationHeader *) temp_s0->unk_0, temp_s0->unk_4, temp_s0->unk_8, phi_f2, (u8) (s32) temp_s0->unk_10, temp_s0->unk_14);
}

void func_80A9FED8(Actor *arg0, void *arg1) {
    s32 temp_v0;

    temp_v0 = arg1->unk_1F34 + 0x14;
    if (temp_v0 >= 0x644) {
        if (temp_v0 >= 0x88F) {
            if (temp_v0 >= 0x8A7) {
                switch (temp_v0) {                  /* switch 1 */
                case 2250:                          /* switch 1 */
                    Audio_PlayActorSound2(arg0, 0x3A7AU);
                    Audio_PlayActorSound2(arg0, 0x3A84U);
                    return;
                case 2255:                          /* switch 1 */
                case 2266:                          /* switch 1 */
                case 2277:                          /* switch 1 */
                case 2288:                          /* switch 1 */
                case 2299:                          /* switch 1 */
                case 2310:                          /* switch 1 */
                case 2321:                          /* switch 1 */
                case 2332:                          /* switch 1 */
                case 2343:                          /* switch 1 */
                case 2354:                          /* switch 1 */
                case 2365:                          /* switch 1 */
                case 2376:                          /* switch 1 */
                case 2387:                          /* switch 1 */
                case 2398:                          /* switch 1 */
                case 2409:                          /* switch 1 */
                case 2420:                          /* switch 1 */
                case 2431:                          /* switch 1 */
                case 2442:                          /* switch 1 */
                case 2453:                          /* switch 1 */
                case 2464:                          /* switch 1 */
                case 2475:                          /* switch 1 */
                case 2486:                          /* switch 1 */
                case 2497:                          /* switch 1 */
                case 2508:                          /* switch 1 */
                case 2519:                          /* switch 1 */
                case 2530:                          /* switch 1 */
                    Audio_PlayActorSound2(arg0, 0x3916U);
                    /* Duplicate return node #37. Try simplifying control flow for better match */
                    return;
                }
            } else {
                if (temp_v0 != 0x8A4) {
                    if (temp_v0 != 0x8A6) {
                        return;
                    }
                    Audio_PlayActorSound2(arg0, 0x3A76U);
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x390CU);
            }
        } else {
            if (temp_v0 != 0x64A) {
                if (temp_v0 != 0x82F) {
                    if (temp_v0 != 0x88E) {
                        return;
                    }
                    Audio_PlayActorSound2(arg0, 0x3908U);
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x390DU);
                return;
            }
            Audio_PlayActorSound2(arg0, 0x390FU);
        }
    } else {
        if (temp_v0 >= 0x506) {
            if (temp_v0 != 0x53F) {
                if (temp_v0 != 0x582) {
                    if (temp_v0 != 0x643) {
                        return;
                    }
                    Audio_PlayActorSound2(arg0, 0x390EU);
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x3913U);
                return;
            }
            Audio_PlayActorSound2(arg0, 0x3915U);
            return;
        }
        if (temp_v0 >= 0x4EA) {
            if (temp_v0 != 0x505) {
                return;
            }
            Audio_PlayActorSound2(arg0, 0x3A77U);
            return;
        }
        if (temp_v0 >= 0x4AC) {
            switch (temp_v0) {                      /* switch 2 */
            case 1232:                              /* switch 2 */
            case 1241:                              /* switch 2 */
            case 1252:                              /* switch 2 */
            case 1255:                              /* switch 2 */
            case 1257:                              /* switch 2 */
                Audio_PlayActorSound2(arg0, 0x390BU);
                return;
            }
        } else {
            if (temp_v0 == 0x4AB) {
                Audio_PlayActorSound2(arg0, 0x3873U);
                return;
            }
        default:                                    /* switch 2 */
        default:                                    /* switch 1 */
        }
    }
}

void func_80AA00CC(Actor *arg0, void *arg1) {
    if (arg1->unk_1F34 == 0x217) {
        func_8019F128(0x2915U);
    }
}

void func_80AA0100(Actor *arg0, void *arg1) {
    u16 temp_t6;

    temp_t6 = arg1->unk_1F34;
    switch (temp_t6) {
    case 78:
    case 89:
    case 100:
    case 111:
    case 122:
    case 133:
    case 144:
    case 155:
    case 166:
    case 177:
    case 188:
    case 199:
    case 210:
    case 221:
    case 232:
    case 243:
    case 254:
        Audio_PlayActorSound2(arg0, 0x3916U);
        return;
    case 173:
        Audio_PlayActorSound2(arg0, 0x3A77U);
        /* fallthrough */
    default:
        return;
    }
}

void func_80AA0158(Actor *arg0, void *arg1) {
    u16 temp_v0;

    temp_v0 = arg1->unk_1F34;
    if (temp_v0 != 0x12) {
        if (temp_v0 != 0x5A) {
            if (temp_v0 != 0x8E) {
                return;
            }
            Audio_PlayActorSound2(arg0, 0x3A8DU);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x3913U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x3A8FU);
}

void func_80AA01C0(Actor *arg0, void *arg1) {
    u16 temp_v0;

    temp_v0 = arg1->unk_1F34;
    if (temp_v0 != 0x19F) {
        if (temp_v0 != 0x230) {
            if (temp_v0 != 0x311) {
                if (temp_v0 != 0x37A) {
                    return;
                }
                Audio_PlayActorSound2(arg0, 0x3A83U);
                return;
            }
            func_8019F128(0x4851U);
            func_8019FE74(&D_801D6654, 0, 0x96);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x3A76U);
        return;
    }
    func_801A479C(arg0 + 0xEC, 0x3910, 0x64, arg0);
}

void func_80AA0264(Actor *arg0, Actor *arg1) {
    Actor *sp1C;
    Actor *temp_a3;
    u16 temp_v1;
    s32 phi_v1;

    temp_a3 = arg1;
    sp1C = temp_a3[22].projectedPos.z;
    temp_v1 = temp_a3->unk_1F34;
    phi_v1 = (s32) temp_v1;
    if ((s32) temp_v1 >= 0xD0) {
        if (temp_v1 != 0xD9) {
            if (temp_v1 != 0x109) {
                if (temp_v1 != 0x16D) {
                    if (temp_v1 != 0x28A) {

                    } else {
                        arg1 = temp_a3;
                        func_8019FE74(&D_801D6654, 0, 0x50, temp_a3);
                        goto block_21;
                    }
                } else {
                    arg1 = temp_a3;
                    func_801A0654(arg0 + 0xEC, 0x3910, 0, temp_a3);
                    goto block_21;
                }
            } else {
                arg1 = temp_a3;
                Audio_PlayActorSound2(arg0, 0x3A77U);
                goto block_21;
            }
        } else {
            arg1 = temp_a3;
            Audio_PlayActorSound2(sp1C, 0x6888U);
            goto block_21;
        }
    } else if (temp_v1 != 0xA) {
        if (temp_v1 != 0x47) {
            if (temp_v1 != 0x7E) {
                if (temp_v1 != 0xC5) {
                    if (temp_v1 != 0xCF) {

                    } else {
                        arg1 = temp_a3;
                        Audio_PlayActorSound2(sp1C, 0x6887U);
                        goto block_21;
                    }
                } else {
                    arg1 = temp_a3;
                    Audio_PlayActorSound2(sp1C, 0x6886U);
                    goto block_21;
                }
            } else {
                arg1 = temp_a3;
                Audio_PlayActorSound2(sp1C, 0x6896U);
                goto block_21;
            }
        } else {
            arg1 = temp_a3;
            Audio_PlayActorSound2(arg0, 0x3A9AU);
            goto block_21;
        }
    } else {
        arg1 = temp_a3;
        func_801A479C(&arg0->projectedPos, 0x3910, 0x32, temp_a3);
block_21:
        phi_v1 = (s32) arg1->unk_1F34;
    }
    if ((phi_v1 >= 0x107) && (phi_v1 < 0x2BA)) {
        Audio_PlayActorSound2(sp1C, 0x329BU);
    }
}

void func_80AA0420(Actor *arg0, void *arg1) {
    Actor *sp18;
    Actor *temp_a0;
    s32 temp_v0_2;
    s32 temp_v1;
    u16 temp_v0;
    s32 phi_v1;

    temp_v0 = arg1->unk_1F34;
    if (temp_v0 != 0x8C) {
        if (temp_v0 != 0x102) {
            if (temp_v0 != 0x20C) {
                if (temp_v0 != 0x216) {
                    if (temp_v0 != 0x2A6) {

                    } else {
                        Audio_PlayActorSound2(arg0, 0x3924U);
                    }
                } else {
                    Audio_PlayActorSound2(arg0, 0x38EEU);
                }
            } else {
                Audio_PlayActorSound2(arg0, 0x3920U);
                Audio_PlayActorSound2(arg0, 0x3A78U);
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x3920U);
        }
    } else {
        func_801A479C(arg0 + 0xEC, 0x3910, 0x50);
    }
    if (arg0->unk_2E0 == 0x1F) {
        temp_a0 = &arg0[1];
        if ((s32) arg1->unk_1F34 < 0x2BC) {
            sp18 = temp_a0;
            if ((func_801378B8((SkelAnime *) temp_a0, 5.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 25.0f) != 0)) {
                Audio_PlayActorSound2(arg0, 0x392AU);
            } else if ((func_801378B8((SkelAnime *) sp18, 17.0f) != 0) || (func_801378B8((SkelAnime *) sp18, 40.0f) != 0)) {
                Audio_PlayActorSound2(arg0, 0x3923U);
            }
        }
    }
    if ((s32) arg1->unk_1F34 >= 0x2BC) {
        temp_v1 = D_80AA3CB8;
        temp_v0_2 = temp_v1 & 0x1F;
        phi_v1 = temp_v1;
        if (temp_v1 < 0x80) {
            if (temp_v0_2 == 0) {
                Audio_PlayActorSound2(arg0, 0x3A81U);
                goto block_25;
            }
            if (temp_v0_2 == 0x10) {
                Audio_PlayActorSound2(arg0, 0x3A82U);
block_25:
                phi_v1 = D_80AA3CB8;
            }
            D_80AA3CB8 = phi_v1 + 1;
            return;
        }
        /* Duplicate return node #28. Try simplifying control flow for better match */
        return;
    }
    D_80AA3CB8 = 0;
}

void func_80AA05F0(Actor *arg0, void *arg1) {
    if (arg1->unk_1F34 == 3) {
        Audio_PlayActorSound2(arg0, 0x3A7AU);
        Audio_PlayActorSound2(arg0, 0x3A84U);
    }
}

void func_80AA0634(Actor *arg0, void *arg1) {
    u16 temp_v0;

    temp_v0 = arg1->unk_1F34;
    if (((s32) temp_v0 >= 0x282) && ((s32) temp_v0 < 0x34D)) {
        Audio_PlayActorSound2(arg0, 0x328EU);
    }
}

void func_80AA066C(Actor *arg0, void *arg1) {
    u16 temp_v0;

    temp_v0 = arg1->unk_1F34;
    if ((s32) temp_v0 >= 0xBB) {
        if (temp_v0 != 0xE6) {
            return;
        }
        Audio_PlayActorSound2(arg0, 0x3A8CU);
        /* Duplicate return node #11. Try simplifying control flow for better match */
        return;
    }
    if ((s32) temp_v0 >= 0x50) {
        if (temp_v0 != 0xBA) {
            return;
        }
        Audio_PlayActorSound2(arg0, 0x387CU);
        return;
    }
    switch (temp_v0) {
    case 58:
    case 61:
    case 68:
    case 72:
    case 77:
    case 79:
        Audio_PlayActorSound2(arg0, 0x806U);
        Audio_PlayActorSound2(arg0, 0x390EU);
        return;
    default:
        return;
    }
}

void func_80AA071C(Actor *arg0, void *arg1) {
    u16 temp_v0;

    temp_v0 = arg1->unk_1F34;
    if (temp_v0 != 5) {
        if (temp_v0 != 0x294) {
            return;
        }
        Audio_PlayActorSound2(arg0, 0x390BU);
        return;
    }
    func_801A4A28(0xC);
}

void func_80AA076C(Actor *arg0, void *arg1) {
    Actor *sp1C;
    Actor *temp_a0;
    Actor *temp_a0_2;
    Actor *temp_a0_3;
    Actor *temp_a2;
    s16 temp_v0_2;
    u16 temp_v0;

    temp_v0 = arg1->unk_1F34;
    temp_a2 = arg1->unk_1CCC;
    if ((s32) temp_v0 >= 0x148) {
        if (temp_v0 != 0x1C7) {
            if (temp_v0 != 0x573) {
                if (temp_v0 != 0x6C2) {
                    if (temp_v0 != 0x73A) {
                        if (temp_v0 != 0x7D0) {

                        } else {
                            func_801A5BD0(0x7F);
                        }
                    } else {
                        func_801A89A8(0x42320000);
                    }
                } else {
                    func_801A89A8(0x141400FF);
                }
            } else {
                func_800B8E58(temp_a2, 0x6822U);
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x3916U);
        }
    } else if (temp_v0 != 5) {
        if (temp_v0 != 0x2D) {
            if (temp_v0 != 0x5D) {
                if (temp_v0 != 0xF5) {
                    if (temp_v0 != 0x10D) {
                        if (temp_v0 != 0x147) {

                        } else {
                            Audio_PlayActorSound2(arg0, 0x390BU);
                        }
                    } else {
                        Audio_PlayActorSound2(arg0, 0x3A7FU);
                    }
                } else {
                    Audio_PlayActorSound2(arg0, 0x3916U);
                }
            } else {
                Audio_PlayActorSound2(arg0, 0x3915U);
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x3916U);
        }
    } else {
        func_801A4A28(0xC, temp_a2);
    }
    temp_v0_2 = arg0->unk_2E0;
    temp_a0 = &arg0[1];
    if (temp_v0_2 == 0) {
        sp1C = temp_a0;
        if ((func_801378B8((SkelAnime *) temp_a0, 8.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 17.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x3915U);
        }
        if (func_801378B8((SkelAnime *) sp1C, 28.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x3916U);
            return;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0_2 == 0x47) {
        temp_a0_2 = &arg0[1];
        sp1C = temp_a0_2;
        if ((func_801378B8((SkelAnime *) temp_a0_2, 2.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0_2, 6.0f) != 0) || (func_801378B8((SkelAnime *) sp1C, 12.0f) != 0) || (func_801378B8((SkelAnime *) sp1C, 18.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x3915U);
            return;
        }
        /* Duplicate return node #41. Try simplifying control flow for better match */
        return;
    }
    if ((temp_v0_2 == 0x46) && ((temp_a0_3 = &arg0[1], sp1C = temp_a0_3, (func_801378B8((SkelAnime *) temp_a0_3, 16.0f) != 0)) || (func_801378B8((SkelAnime *) temp_a0_3, 23.0f) != 0))) {
        Audio_PlayActorSound2(arg0, 0x3ADCU);
    }
}

void func_80AA09DC(Actor *arg0, void *arg1) {
    s32 temp_v0;
    s32 temp_v1_2;
    u16 temp_v1;
    s32 phi_v1;
    s32 phi_v1_2;

    temp_v1 = arg1->unk_1F34;
    phi_v1 = (s32) temp_v1;
    if (temp_v1 != 0x28) {
        if (temp_v1 != 0xEA) {
            if (temp_v1 != 0xF4) {
                if (temp_v1 != 0x184) {

                } else {
                    Audio_PlayActorSound2(arg0, 0x3924U);
                    phi_v1 = (s32) arg1->unk_1F34;
                }
            } else {
                Audio_PlayActorSound2(arg0, 0x38EEU);
                phi_v1 = (s32) arg1->unk_1F34;
            }
        } else {
            Audio_PlayActorSound2(arg0, 0x3920U);
            Audio_PlayActorSound2(arg0, 0x3A78U);
            phi_v1 = (s32) arg1->unk_1F34;
        }
    } else {
        func_801A479C(arg0 + 0xEC, 0x3910, 0x50);
        phi_v1 = (s32) arg1->unk_1F34;
    }
    if (phi_v1 >= 0x198) {
        temp_v1_2 = D_80AA3CBC;
        temp_v0 = temp_v1_2 & 0x1F;
        phi_v1_2 = temp_v1_2;
        if (temp_v1_2 < 0x80) {
            if (temp_v0 == 0) {
                Audio_PlayActorSound2(arg0, 0x3A81U);
                goto block_15;
            }
            if (temp_v0 == 0x10) {
                Audio_PlayActorSound2(arg0, 0x3A82U);
block_15:
                phi_v1_2 = D_80AA3CBC;
            }
            D_80AA3CBC = phi_v1_2 + 1;
            return;
        }
        /* Duplicate return node #18. Try simplifying control flow for better match */
        return;
    }
    D_80AA3CBC = 0;
}

void func_80AA0B08(Actor *arg0, void *arg1) {
    s32 temp_v0;
    u16 temp_v1;
    u16 temp_v1_2;
    s32 phi_v1;
    void *phi_a2;
    void *phi_a2_2;
    s32 phi_v1_2;

    arg0[2].floorHeight = arg0->projectedPos.x;
    arg0[2].yDistToWater = arg0->projectedPos.y;
    arg0->unk_318 = (f32) arg0->projectedPos.z;
    temp_v1 = arg1->unk_1F34;
    phi_v1 = (s32) temp_v1;
    phi_a2 = arg1;
    if ((s32) temp_v1 >= 0x1E7) {
        if (temp_v1 != 0x1F0) {
            if (temp_v1 != 0x24E) {
                if (temp_v1 != 0x250) {
                    if (temp_v1 != 0x252) {

                    } else {
                        arg1 = arg1;
                        func_8019F1C0(arg0 + 0x310, 0x3A9DU);
                        goto block_23;
                    }
                } else {
                    arg1 = arg1;
                    Audio_PlayActorSound2(arg0, 0x3916U);
                    goto block_23;
                }
            } else {
                arg1 = arg1;
                Audio_PlayActorSound2(arg0, 0x3915U);
                goto block_23;
            }
        } else {
            arg1 = arg1;
            func_8019F1C0(arg0 + 0x310, 0x3A7DU);
            goto block_23;
        }
    } else if ((s32) temp_v1 >= 0x170) {
        if (temp_v1 != 0x1D6) {
            if (temp_v1 != 0x1E6) {

            } else {
                arg1 = arg1;
                Audio_PlayActorSound2(arg0, 0x3915U);
                func_8019F1C0((Vec3f *) &arg0[2].floorHeight, 0x3A7CU);
                goto block_23;
            }
        } else {
            arg1 = arg1;
            Audio_PlayActorSound2(arg0, 0x3AC3U);
            goto block_23;
        }
    } else if ((s32) temp_v1 >= 0x41) {
        switch (temp_v1) {
        case 327:
        case 332:
        case 335:
        case 344:
            arg1 = arg1;
            Audio_PlayActorSound2(arg0, 0x3915U);
            goto block_23;
        case 367:
            arg1 = arg1;
            Audio_PlayActorSound2(arg0, 0x3A9BU);
            goto block_23;
        }
    } else if (temp_v1 == 0x40) {
        arg1 = arg1;
        func_8019F1C0((Vec3f *) &arg0[2].floorHeight, 0x3A7AU);
block_23:
        phi_v1 = (s32) arg1->unk_1F34;
        phi_a2 = arg1;
    }
    phi_a2_2 = phi_a2;
    if ((phi_v1 >= 0x3E) && (phi_v1 < 0x111)) {
        arg1 = phi_a2;
        phi_a2_2 = arg1;
        if ((Rand_ZeroOne() < 0.75f) && ((arg1->unk_9C & 1) != 0)) {
            arg1 = arg1;
            Audio_PlayActorSound2(arg0, 0x3A9EU);
            phi_a2_2 = arg1;
        }
    }
    temp_v1_2 = phi_a2_2->unk_1F34;
    phi_v1_2 = (s32) temp_v1_2;
    if (((s32) temp_v1_2 >= 0x1F2) && ((s32) temp_v1_2 < 0x241)) {
        temp_v0 = phi_a2_2->unk_9C;
        if ((temp_v0 & 3) == 0) {
            if ((temp_v0 & 4) != 0) {
                arg1 = phi_a2_2;
                Audio_PlayActorSound2(arg0, 0x3A9BU);
            } else {
                arg1 = phi_a2_2;
                Audio_PlayActorSound2(arg0, 0x3915U);
            }
            phi_v1_2 = (s32) arg1->unk_1F34;
        }
    }
    if (phi_v1_2 >= 0x122) {
        func_8019F128(0x214CU);
    }
}

void func_80AA0DA8(Actor *arg0, void *arg1) {
    u16 temp_v0;

    temp_v0 = arg1->unk_1F34;
    if (temp_v0 != 0x227) {
        if (temp_v0 != 0x2C7) {
            if (temp_v0 != 0x2CC) {
                return;
            }
            Audio_PlayActorSound2(arg0, 0x3913U);
            Audio_PlayActorSound2(arg0, 0x390CU);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x3915U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x3AA0U);
}

void func_80AA0E1C(Actor *arg0, void *arg1) {
    u16 temp_v0;

    temp_v0 = arg1->unk_1F34;
    if (temp_v0 != 0x137) {
        if (temp_v0 != 0x16D) {
            if (temp_v0 != 0x174) {
                return;
            }
            Audio_PlayActorSound2(arg0, 0x3913U);
            Audio_PlayActorSound2(arg0, 0x390CU);
            return;
        }
        Audio_PlayActorSound2(arg0, 0x3915U);
        return;
    }
    Audio_PlayActorSound2(arg0, 0x3AA0U);
}

void func_80AA0E90(Actor *arg0, GlobalContext *arg1) {
    Actor *sp18;
    Actor *temp_a0;
    Actor *temp_a0_2;
    Actor *temp_a0_3;
    s16 temp_v0;
    s16 temp_v0_10;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_7;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v0_8;
    u16 temp_v0_9;

    if (arg1->csCtx.state != 0) {
        temp_v0 = arg1->sceneNum;
        if (temp_v0 != 0x19) {
            if (temp_v0 != 0x1A) {
                if (temp_v0 != 0x2D) {
                    if (temp_v0 != 0x65) {
                        if (temp_v0 != 0x6F) {

                        } else if (gSaveContext.sceneSetupIndex == 1) {
                            func_80AA00CC(arg0);
                        }
                    } else {
                        temp_v0_2 = gSaveContext.sceneSetupIndex;
                        if (temp_v0_2 == 1) {
                            func_80A9FED8(arg0);
                        } else if (temp_v0_2 == 0) {
                            func_80AA0100(arg0);
                        } else if ((temp_v0_2 == 2) && (arg1->csCtx.unk_12 == 0)) {
                            func_80AA0158(arg0);
                        }
                    }
                } else {
                    temp_v0_3 = gSaveContext.sceneSetupIndex;
                    if (temp_v0_3 == 3) {
                        temp_v0_4 = arg1->csCtx.unk_12;
                        if (temp_v0_4 == 0) {
                            func_80AA0634(arg0);
                        } else if (temp_v0_4 == 2) {
                            func_80AA066C(arg0);
                        }
                    } else if (temp_v0_3 == 7) {
                        temp_v0_5 = arg1->csCtx.unk_12;
                        if (temp_v0_5 == 0) {
                            func_80AA071C(arg0);
                        } else if (temp_v0_5 == 1) {
                            func_80AA076C(arg0);
                        }
                    }
                }
            } else if (gSaveContext.sceneSetupIndex == 0) {
                temp_v0_6 = arg1->csCtx.unk_12;
                if (temp_v0_6 == 0) {
                    func_80AA01C0(arg0);
                } else if (temp_v0_6 == 1) {
                    func_80AA0264(arg0);
                }
            }
        } else {
            temp_v0_7 = gSaveContext.sceneSetupIndex;
            if (temp_v0_7 == 0) {
                temp_v0_8 = arg1->csCtx.unk_12;
                if (temp_v0_8 == 0) {
                    func_80AA0420(arg0);
                } else if (temp_v0_8 == 1) {
                    func_80AA05F0(arg0);
                } else if (temp_v0_8 == 2) {
                    func_80AA09DC(arg0);
                } else if (temp_v0_8 == 3) {
                    func_80AA0B08(arg0);
                }
            } else if (temp_v0_7 == 2) {
                temp_v0_9 = arg1->csCtx.unk_12;
                if (temp_v0_9 == 0) {
                    func_80AA0DA8(arg0);
                } else if (temp_v0_9 == 1) {
                    func_80AA0E1C(arg0);
                }
            }
        }
    }
    temp_v0_10 = arg0->unk_2E0;
    temp_a0 = &arg0[1];
    if (temp_v0_10 == 1) {
        sp18 = temp_a0;
        if ((func_801378B8((SkelAnime *) temp_a0, 2.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0, 6.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x390EU);
            return;
        }
        /* Duplicate return node #63. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0_10 == 0x13) {
        temp_a0_2 = &arg0[1];
        sp18 = temp_a0_2;
        if ((func_801378B8((SkelAnime *) temp_a0_2, 0.0f) != 0) || (func_801378B8((SkelAnime *) temp_a0_2, 13.0f) != 0) || (func_801378B8((SkelAnime *) sp18, 20.0f) != 0) || (func_801378B8((SkelAnime *) sp18, 27.0f) != 0)) {
            Audio_PlayActorSound2(arg0, 0x871U);
            return;
        }
        /* Duplicate return node #63. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0_10 == 0xE) {
        if (func_801378B8((SkelAnime *) &arg0[1], 3.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x877U);
            return;
        }
        /* Duplicate return node #63. Try simplifying control flow for better match */
        return;
    }
    if (temp_v0_10 == 0xF) {
        temp_a0_3 = &arg0[1];
        sp18 = temp_a0_3;
        if (func_801378B8((SkelAnime *) temp_a0_3, 14.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x2923U);
        }
        if (func_801378B8((SkelAnime *) sp18, 45.0f) != 0) {
            Audio_PlayActorSound2(arg0, 0x3A75U);
        }
    }
}

void DmStk_Init(Actor *thisx, GlobalContext *globalCtx) {
    ObjectContext *sp34;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    ObjectContext *temp_a0;
    ObjectContext *temp_a1_2;
    s16 temp_v0;
    s32 temp_v0_2;
    DmStk *this = (DmStk *) thisx;

    this->unk_33B = 1;
    if (this->actor.params != 1) {
        this->unk_33A = 0;
        temp_a0 = &globalCtx->objectCtx;
        sp34 = temp_a0;
        this->unk_336 = Object_GetIndex(temp_a0, 0x192);
        this->unk_337 = Object_GetIndex(temp_a0, 0x1BE);
        this->unk_338 = Object_GetIndex(temp_a0, 0x277);
        if ((s32) this->unk_336 < 0) {
            Actor_MarkForDeath((Actor *) this);
        }
        this->unk_328 = 0;
        this->unk_339 = 0;
        this->unk_32C = 1;
        this->unk_2E0 = 3;
        this->unk_2E8 = (s32) globalCtx->lightCtx.unk7;
        this->unk_2EC = (s32) globalCtx->lightCtx.unk8;
        this->unk_2F0 = (s32) globalCtx->lightCtx.unk9;
        temp_v0 = globalCtx->sceneNum;
        if ((temp_v0 == 0x65) && (gSaveContext.sceneSetupIndex == 1)) {
            this->unk_2E4 = 0;
            this->unk_2F8 = 0;
            this->unk_2FC = 0x3E8;
            this->actionFunc = func_80AA1704;
            this->unk_300 = 1.0f;
        } else if (temp_v0 == 0x19) {
            this->unk_2E4 = 0xFF;
            this->unk_2F8 = 0x3E4;
            this->unk_2FC = 0x3E8;
            this->unk_335 = 0;
            temp_a1 = &this->unk_294;
            this->unk_300 = 0.7f;
            sp30 = temp_a1;
            Collider_InitCylinder(globalCtx, temp_a1);
            if (gSaveContext.entranceIndex == 0x2C00) {
                temp_v0_2 = gSaveContext.sceneSetupIndex;
                if (temp_v0_2 == 0) {
                    if (gSaveContext.unk_3DD0[3] == 0) {
                        func_8010E9F0(3, 0x12C);
                        gGameInfo->data[1424] = 0xC8;
                        gGameInfo->data[1425] = 0x73;
                    }
                    if (gSaveContext.inventory.items[0] == 0xFF) {
                        D_80AA35A0.base.colType = 0xB;
                        this->actionFunc = func_80AA18D8;
                    } else {
                        D_80AA35A0.base.colType = 0xB;
                        this->actionFunc = func_80AA1998;
                    }
                } else if (temp_v0_2 == 3) {
                    this->unk_2E0 = 0x26;
                    if (gSaveContext.unk_3DD0[3] == 0) {
                        func_8010E9F0(3, 0x3C);
                        gGameInfo->data[1424] = 0xC8;
                        gGameInfo->data[1425] = 0x73;
                    }
                    this->actor.world.pos.y = 120.0f;
                    D_80AA35A0.base.colType = 0xB;
                    this->actionFunc = func_80AA27EC;
                } else {
                    this->unk_2E0 = 0x26;
                    this->actionFunc = func_80AA16F4;
                }
            } else {
                this->unk_33A = 1;
                this->unk_2E0 = 0x26;
                this->actor.world.pos.y = 120.0f;
                D_80AA35A0.base.colType = 0xB;
                this->actionFunc = func_80AA27EC;
            }
            Collider_SetCylinder(globalCtx, sp30, (Actor *) this, &D_80AA35A0);
            CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80AA35D8, &D_80AA35CC);
        } else if ((temp_v0 == 0x2D) && (gSaveContext.sceneSetupIndex == 0)) {
            if ((globalCtx->actorCtx.unk5 & 2) == 0) {
                Actor_MarkForDeath((Actor *) this);
            }
            this->unk_32C = 2;
            this->unk_2E4 = 0xFF;
            this->unk_2F8 = 0x3E4;
            this->unk_2FC = 0x3E8;
            this->unk_2E0 = 5;
            this->actionFunc = func_80AA1714;
            this->unk_300 = 0.7f;
        } else {
            if ((temp_v0 == 0x65) && (func_800EE2F4(globalCtx) == 0)) {
                Actor_MarkForDeath((Actor *) this);
            }
            this->unk_32C = 2;
            this->unk_2E4 = 0xFF;
            this->unk_2F8 = 0x3E4;
            this->unk_2FC = 0x3E8;
            this->actionFunc = func_80AA1704;
            this->unk_300 = 0.7f;
        }
        this->unk_32D = 9;
        this->unk_32E = 0;
        this->unk_32F = 0;
        this->unk_330 = 0;
        this->unk_2E4 = this->unk_2E4;
        this->unk_334 = 0x63;
        this->actor.targetArrowOffset = 1100.0f;
        ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 24.0f);
        temp_a1_2 = &this->unk_144;
        sp34 = temp_a1_2;
        SkelAnime_InitSV(globalCtx, (SkelAnime *) temp_a1_2, &D_06013328, NULL, NULL, NULL, 0);
        func_80A9FE3C((SkelAnime *) this, globalCtx, (u16) sp34, (this->unk_2E0 * 0x18) + &D_80AA35F8, 0);
    }
    Actor_SetScale((Actor *) this, 0.01f);
    if ((globalCtx->sceneNum == 0x2D) && (gSaveContext.sceneSetupIndex == 3) && ((s32) globalCtx->csCtx.unk_12 > 0)) {
        globalCtx->envCtx.unk_17 = 0xF;
        globalCtx->envCtx.unk_18 = 0xF;
    }
}

void DmStk_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmStk *this = (DmStk *) thisx;

}

void func_80AA16F4(DmStk *this, GlobalContext *globalCtx) {

}

void func_80AA1704(DmStk *this, GlobalContext *globalCtx) {

}

void func_80AA1714(DmStk *this, GlobalContext *globalCtx) {
    f32 sp1C;

    if ((gSaveContext.weekEventReg[74] & 0x20) == 0) {
        func_80169474(globalCtx, (Vec3f *) &this->actor.world, (Vec3f *) &sp1C);
        if ((globalCtx->view.fovy < 25.0f) && (sp1C >= 70.0f) && (sp1C < 250.0f) && (sp20 >= 30.0f) && (sp20 < 210.0f)) {
            func_800FE484();
            this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA17F8;
        }
    }
}

void func_80AA17F8(DmStk *this, GlobalContext *globalCtx) {
    s16 sp1E;
    s16 sp1C;
    s16 sp18;
    s16 temp_v0;
    s32 temp_a0_2;
    s32 temp_v1;
    s8 temp_a0;
    s16 phi_a0;

    temp_a0 = this->actor.cutscene;
    sp1E = (s16) temp_a0;
    temp_v0 = ActorCutscene_GetAdditionalCutscene((s16) temp_a0);
    temp_a0_2 = temp_v0 << 0x10;
    sp1C = temp_v0;
    temp_v1 = gSaveContext.day;
    if (temp_v1 < 3) {
        phi_a0 = sp1E;
    } else if (((gSaveContext.weekEventReg[8] & 0x40) != 0) || (((temp_v1 % 5) == 3) && ((s32) gSaveContext.time < 0x4000))) {
        phi_a0 = ActorCutscene_GetAdditionalCutscene((s16) (temp_a0_2 >> 0x10));
    } else {
        phi_a0 = sp1C;
    }
    sp18 = phi_a0;
    if (ActorCutscene_GetCanPlayNext(phi_a0) != 0) {
        ActorCutscene_Start(phi_a0, (Actor *) this);
        func_800FE498();
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA1704;
        return;
    }
    ActorCutscene_SetIntentToPlay(phi_a0);
}

void func_80AA18D8(DmStk *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext(9) != 0) {
        ActorCutscene_Start(9, (Actor *) this);
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA192C;
        return;
    }
    ActorCutscene_SetIntentToPlay(9);
}

void func_80AA192C(DmStk *this, GlobalContext *globalCtx) {
    if (globalCtx->csCtx.state == 0) {
        this->unk_2E0 = 0x21;
        this->unk_32D = 3;
        func_80A9FE3C((SkelAnime *) &this->unk_144, (this->unk_2E0 * 0x18) + &D_80AA35F8, (u16) 0);
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA2720;
    }
}

void func_80AA1998(DmStk *this, GlobalContext *globalCtx) {
    if (ActorCutscene_GetCanPlayNext(0xB) != 0) {
        ActorCutscene_Start(0xB, (Actor *) this);
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA19EC;
        return;
    }
    ActorCutscene_SetIntentToPlay(0xB);
}

void func_80AA19EC(DmStk *this, GlobalContext *globalCtx) {
    if (globalCtx->csCtx.state == 0) {
        this->unk_2E0 = 0x26;
        func_80A9FE3C((SkelAnime *) &this->unk_144, (this->unk_2E0 * 0x18) + &D_80AA35F8, (u16) 0);
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA27EC;
    }
}

void func_80AA1A50(DmStk *this, GlobalContext *globalCtx) {
    s16 temp_v1;

    if (ActorCutscene_GetCanPlayNext(0xA) != 0) {
        Audio_PlayActorSound2((Actor *) this, 0x3921U);
        ActorCutscene_Start(0xA, (Actor *) this);
        this->actor.shape.rot.x = 0;
        temp_v1 = this->actor.shape.rot.x;
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA1AC8;
        this->actor.world.rot.x = temp_v1;
        this->actor.shape.rot.y = temp_v1;
        this->actor.world.rot.y = temp_v1;
        return;
    }
    ActorCutscene_SetIntentToPlay(0xA);
}

void func_80AA1AC8(DmStk *this, GlobalContext *globalCtx) {
    if ((globalCtx->csCtx.state != 0) && ((s32) globalCtx->csCtx.frames >= 0x15)) {
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA27EC;
    }
}

void func_80AA1AF8(Actor *arg0, GlobalContext *arg1) {
    Actor *sp2C;

    sp2C = arg1->actorCtx.actorList[2].first;
    arg0->unk_32A = (u16) (arg0->unk_32A + 0x4B0);
    Math_SmoothStepToF(arg0 + 0x28, 160.0f + (Math_SinS((s16) arg0->unk_32A) * 10.0f), 0.2f, 1.0f, 0.0001f);
    arg0->world.rot.y = Actor_YawBetweenActors(arg0, sp2C);
    arg0->world.rot.x = 0x1B58;
    arg0->shape.rot.y = arg0->world.rot.y;
    arg0->shape.rot.x = arg0->world.rot.x;
}

void func_80AA1B9C(DmStk *this, GlobalContext *globalCtx) {
    Actor *sp2C;
    u8 temp_t8;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    func_80AA1AF8((Actor *) this);
    temp_t8 = this->unk_339 + 1;
    this->unk_339 = temp_t8;
    if ((temp_t8 & 0xFF) >= 3) {
        this->unk_339 = 0;
        if ((sp2C->unk_A70 * 0x10) >= 0) {
            func_801518B0(globalCtx, 0x2013U, (Actor *) this);
        }
    }
    this->unk_2E0 = 0x27;
    func_80A9FE3C((SkelAnime *) this, globalCtx, (u16) &this->unk_144, (this->unk_2E0 * 0x18) + &D_80AA35F8, 0);
    Audio_PlayActorSound2((Actor *) this, 0x3A84U);
    this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA1C64;
}

void func_80AA1C64(DmStk *this, GlobalContext *globalCtx) {
    ObjectContext *sp2C;
    ObjectContext *temp_a2;

    func_80AA1AF8((Actor *) this, globalCtx);
    temp_a2 = &this->unk_144;
    sp2C = temp_a2;
    if (func_801378B8((SkelAnime *) temp_a2, (bitwise f32) this->unk_144.status[0].segment) != 0) {
        this->unk_2E0 = 0x26;
        func_80A9FE3C((SkelAnime *) this, globalCtx, (u16) temp_a2, (this->unk_2E0 * 0x18) + &D_80AA35F8, 0);
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA27EC;
    }
    if (((this->unk_294.base.acFlags & 2) != 0) && (this->actor.colChkInfo.damageEffect == 0xF)) {
        this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA1B9C;
    }
}

void func_80AA1D1C(Actor *arg0, GlobalContext *arg1) {
    u32 sp30;
    Actor *sp2C;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f8;
    f32 temp_v0_3;
    f32 temp_v0_4;
    s16 temp_v0_5;
    s16 temp_v0_6;
    s32 temp_t0_2;
    s32 temp_t5;
    s32 temp_t7;
    s32 temp_t7_3;
    s32 temp_t8;
    u16 temp_a0;
    u16 temp_t7_2;
    u32 temp_v0;
    u8 temp_t0;
    u8 temp_t3;
    u8 temp_t6;
    u8 temp_v0_2;
    void *temp_a1;
    void *temp_v1;
    f32 phi_f16;
    f32 phi_f10;
    f32 phi_f8;
    s32 phi_v0;
    s32 phi_v0_2;

    if (func_800EE29C(arg1, 0x6BU) != 0) {
        temp_v0 = func_800EE200(arg1, 0x6BU);
        temp_t7 = temp_v0 * 4;
        sp30 = temp_v0;
        temp_a1 = arg1 + temp_t7;
        temp_v1 = temp_a1->unk_1F4C;
        if (arg1->csCtx.frames == temp_v1->unk_2) {
            temp_a0 = temp_v1->unk_0;
            if (arg0->unk_334 != temp_a0) {
                arg0->unk_334 = (u8) temp_a0;
                if (arg1->sceneNum == 0x6F) {
                    arg0->unk_32D = 6;
                } else {
                    arg0->unk_32D = 9;
                }
                temp_t7_2 = temp_a1->unk_1F4C->unk_0;
                switch (temp_t7_2) {                /* switch 1 */
                case 0:                             /* switch 1 */
                case 1:                             /* switch 1 */
                    arg0->unk_2E0 = 3;
                    break;
                case 2:                             /* switch 1 */
                    arg0->unk_2E0 = 1;
                    break;
                case 3:                             /* switch 1 */
                    arg0->unk_2E0 = 0x14;
                    break;
                case 4:                             /* switch 1 */
                    arg0->unk_2E0 = 0x12;
                    break;
                case 6:                             /* switch 1 */
                    arg0->unk_2E0 = 0x10;
                    arg0->unk_32D = 3;
                    break;
                case 7:                             /* switch 1 */
                    arg0->unk_2E0 = 0xE;
                    arg0->unk_32D = 3;
                    break;
                case 8:                             /* switch 1 */
                default:                            /* switch 1 */
                    arg0->unk_2E0 = 0;
                    break;
                case 9:                             /* switch 1 */
                    arg0->unk_2E0 = 3;
                    arg0->unk_32E = 1U;
                    break;
                case 12:                            /* switch 1 */
                    arg0->unk_2E0 = 0xC;
                    arg0->unk_32D = 3;
                    break;
                case 13:                            /* switch 1 */
                    arg0->unk_2E0 = 0x1B;
                    arg0->unk_32D = 3;
                    break;
                case 14:                            /* switch 1 */
                    arg0->unk_2E0 = 0x16;
                    break;
                case 15:                            /* switch 1 */
                    arg0->unk_2E0 = 0x17;
                    break;
                case 16:                            /* switch 1 */
                    arg0->unk_2E0 = 0x1C;
                    break;
                case 17:                            /* switch 1 */
                    arg0->unk_2E0 = 7;
                    break;
                case 18:                            /* switch 1 */
                    arg0->unk_2E0 = 8;
                    break;
                case 19:                            /* switch 1 */
                    arg0->unk_2E0 = 0xA;
                    break;
                case 20:                            /* switch 1 */
                    arg0->unk_2E0 = 0x18;
                    break;
                case 21:                            /* switch 1 */
                    arg0->unk_2E0 = 0x1A;
                    break;
                case 22:                            /* switch 1 */
                    arg0->unk_2E0 = 0x1D;
                    if (gSaveContext.inventory.items[0] == 0xFF) {
                        arg0->unk_32D = 3;
                    }
                    break;
                case 23:                            /* switch 1 */
                    arg0->unk_2E0 = 0x1E;
                    arg0->unk_32D = 4;
                    break;
                case 24:                            /* switch 1 */
                    arg0->unk_2E0 = 0x20;
                    if (gSaveContext.inventory.items[0] == 0xFF) {
                        arg0->unk_32D = 3;
                    }
                    break;
                case 25:                            /* switch 1 */
                    Actor_MarkForDeath(arg0);
                    break;
                case 26:                            /* switch 1 */
                    arg0->unk_2E0 = 0x22;
                    if (gSaveContext.inventory.items[0] == 0xFF) {
                        arg0->unk_32D = 3;
                    }
                    break;
                case 27:                            /* switch 1 */
                    arg0->unk_2E0 = 0x24;
                    if (gSaveContext.inventory.items[0] == 0xFF) {
                        arg0->unk_32D = 3;
                    }
                    break;
                case 28:                            /* switch 1 */
                    arg0->unk_2E0 = 0x25;
                    arg0->unk_32D = 4;
                    break;
                case 30:                            /* switch 1 */
                    arg0->unk_2E0 = 0x26;
                    break;
                case 31:                            /* switch 1 */
                    arg0->unk_2E0 = 0x27;
                    break;
                case 32:                            /* switch 1 */
                    arg0->unk_2E0 = 0x2A;
                    break;
                case 33:                            /* switch 1 */
                    arg0->unk_2E0 = 0x2C;
                    break;
                case 34:                            /* switch 1 */
                    arg0->unk_2E0 = 0x2E;
                    break;
                case 35:                            /* switch 1 */
                    arg0->unk_2E0 = 0x30;
                    break;
                case 36:                            /* switch 1 */
                    arg0->unk_2E0 = 0x32;
                    break;
                case 37:                            /* switch 1 */
                    arg0->unk_2E0 = 0x33;
                    break;
                case 38:                            /* switch 1 */
                    arg0->unk_2E0 = 0x34;
                    break;
                case 39:                            /* switch 1 */
                    arg0->unk_2E0 = 0x36;
                    break;
                case 40:                            /* switch 1 */
                    arg0->unk_2E0 = 0x37;
                    break;
                case 41:                            /* switch 1 */
                    arg0->unk_2E0 = 0x28;
                    break;
                case 42:                            /* switch 1 */
                    arg0->unk_2E0 = 5;
                    break;
                case 43:                            /* switch 1 */
                    arg0->unk_2E0 = 0x38;
                    break;
                case 44:                            /* switch 1 */
                    arg0->unk_2E0 = 0x39;
                    break;
                case 45:                            /* switch 1 */
                    arg0->unk_2E0 = 0x3A;
                    arg0->unk_32F = 1U;
                    break;
                case 46:                            /* switch 1 */
                    arg0->unk_32D = 6;
                    arg0->unk_2E0 = 0x3B;
                    break;
                case 47:                            /* switch 1 */
                    arg0->unk_2E0 = 0x3C;
                    break;
                case 48:                            /* switch 1 */
                    arg0->unk_2E0 = 0x3C;
                    break;
                case 49:                            /* switch 1 */
                    arg0->unk_2E0 = 0x41;
                    break;
                case 50:                            /* switch 1 */
                    arg0->unk_2E0 = 0x42;
                    break;
                case 51:                            /* switch 1 */
                    arg0->unk_2E0 = 0x44;
                    break;
                case 52:                            /* switch 1 */
                    arg0->unk_2E0 = 0x46;
                    break;
                case 53:                            /* switch 1 */
                    arg0->unk_2E0 = 0x3C;
                    break;
                case 54:                            /* switch 1 */
                    arg0->unk_2E0 = 0x3D;
                    break;
                case 55:                            /* switch 1 */
                    arg0->unk_2E0 = 0x3E;
                    break;
                case 56:                            /* switch 1 */
                    arg0->unk_2E0 = 0x40;
                    break;
                case 57:                            /* switch 1 */
                    arg0->unk_2E0 = 0x41;
                    break;
                case 58:                            /* switch 1 */
                    arg0->unk_2E0 = 0x42;
                    break;
                case 59:                            /* switch 1 */
                    arg0->unk_2E0 = 0x44;
                    break;
                case 60:                            /* switch 1 */
                    arg0->unk_2E0 = 0x46;
                    break;
                }
                func_80A9FE3C((SkelAnime *) arg0, arg1, (u16) &arg0[1], (arg0->unk_2E0 * 0x18) + &D_80AA35F8, 0);
            }
        }
        sp2C = &arg0[1];
        func_800EDF24(arg0, arg1, sp30);
    } else {
        arg0->unk_334 = 0x63U;
        sp2C = &arg0[1];
    }
    temp_v0_2 = arg0->unk_32E;
    if (temp_v0_2 == 1) {
        Math_SmoothStepToF(&arg0[2].minVelocityY, 0.7f, 0.1f, 0.007f, 0.005f);
        if (arg0[2].minVelocityY < 0.71f) {
            arg0[2].speedXZ = 1.121e-42f;
            arg0[2].minVelocityY = 0.7f;
            arg0->unk_32E = (u8) (arg0->unk_32E + 1);
        }
        temp_t6 = arg1->lightCtx.unk7;
        temp_f16 = (f32) temp_t6;
        phi_f16 = temp_f16;
        if ((s32) temp_t6 < 0) {
            phi_f16 = temp_f16 + 4294967296.0f;
        }
        arg0[2].scale.z = (bitwise f32) (u32) (phi_f16 * arg0[2].minVelocityY);
        temp_t0 = arg1->lightCtx.unk8;
        temp_f10 = (f32) temp_t0;
        phi_f10 = temp_f10;
        if ((s32) temp_t0 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        arg0[2].velocity.x = (bitwise f32) (u32) (phi_f10 * arg0[2].minVelocityY);
        temp_t3 = arg1->lightCtx.unk9;
        temp_f8 = (f32) temp_t3;
        phi_f8 = temp_f8;
        if ((s32) temp_t3 < 0) {
            phi_f8 = temp_f8 + 4294967296.0f;
        }
        arg0[2].velocity.y = (bitwise f32) (u32) (phi_f8 * arg0[2].minVelocityY);
    } else if (temp_v0_2 == 2) {
        temp_v0_3 = arg0[2].speedXZ;
        temp_t7_3 = (bitwise s32) temp_v0_3 + 0xA;
        phi_v0 = (bitwise s32) temp_v0_3;
        if ((bitwise s32) temp_v0_3 < 0x3E4) {
            arg0[2].speedXZ = (bitwise f32) temp_t7_3;
            phi_v0 = temp_t7_3;
        }
        if (phi_v0 >= 0x3E5) {
            arg0[2].speedXZ = 1.396e-42f;
            arg0->unk_32E = (u8) (arg0->unk_32E + 1);
        }
    } else if (temp_v0_2 == 3) {
        temp_v0_4 = arg0[2].scale.y;
        temp_t0_2 = (bitwise s32) temp_v0_4 + 3;
        phi_v0_2 = (bitwise s32) temp_v0_4;
        if ((bitwise s32) temp_v0_4 < 0x80) {
            arg0[2].scale.y = (bitwise f32) temp_t0_2;
            phi_v0_2 = temp_t0_2;
        }
        if (phi_v0_2 < 0xFF) {
            arg0[2].scale.y = (bitwise f32) (phi_v0_2 + 0x14);
        } else {
            arg0[2].scale.y = 3.57e-43f;
            arg0->unk_32E = 0U;
        }
    }
    if (arg0->unk_32F == 1) {
        if ((bitwise s32) arg0[2].colChkInfo.displacement.y >= 0x29) {
            arg0->unk_32C = 3;
        }
        temp_t5 = (bitwise s32) arg0[2].colChkInfo.displacement.y + 1;
        arg0[2].colChkInfo.displacement.y = (bitwise f32) temp_t5;
        if (temp_t5 >= 0x2C) {
            temp_t8 = (bitwise s32) arg0[2].scale.y - 0x23;
            arg0[2].scale.y = (bitwise f32) temp_t8;
            if (temp_t8 < 0) {
                arg0[2].scale.y = 0.0f;
                arg0->unk_32F = 0U;
                gSaveContext.weekEventReg[12] = gSaveContext.weekEventReg[12] | 4;
                if ((arg1->actorCtx.unk5 & 2) == 0) {
                    Actor_MarkForDeath(arg0);
                } else {
                    arg0->unk_33B = 0;
                }
            }
        }
    }
    if (func_801378B8((SkelAnime *) sp2C, arg0[1].home.pos.z) != 0) {
        temp_v0_5 = arg0->unk_2E0;
        switch (temp_v0_5) {                        /* switch 2 */
        case 2:                                     /* switch 2 */
        case 8:                                     /* switch 2 */
        case 10:                                    /* switch 2 */
        case 12:                                    /* switch 2 */
        case 14:                                    /* switch 2 */
        case 16:                                    /* switch 2 */
        case 18:                                    /* switch 2 */
        case 20:                                    /* switch 2 */
        case 22:                                    /* switch 2 */
        case 24:                                    /* switch 2 */
        case 30:                                    /* switch 2 */
        case 32:                                    /* switch 2 */
        case 34:                                    /* switch 2 */
        case 40:                                    /* switch 2 */
        case 42:                                    /* switch 2 */
        case 44:                                    /* switch 2 */
        case 46:                                    /* switch 2 */
        case 48:                                    /* switch 2 */
        case 52:                                    /* switch 2 */
        case 62:                                    /* switch 2 */
        case 66:                                    /* switch 2 */
        case 68:                                    /* switch 2 */
        case 70:                                    /* switch 2 */
            arg0->unk_2E0 = (s16) (temp_v0_5 + 1);
            func_80A9FE3C((SkelAnime *) arg0, arg1, (u16) sp2C, (arg0->unk_2E0 * 0x18) + &D_80AA35F8, 0);
            break;
        case 26:                                    /* switch 2 */
            arg0->unk_2E0 = 3;
            arg0->unk_32C = 1;
            arg0->unk_32D = 9;
            func_80A9FE3C((SkelAnime *) arg0, arg1, (u16) sp2C, (arg0->unk_2E0 * 0x18) + &D_80AA35F8, 0);
            break;
        }
    }
    temp_v0_6 = arg0->unk_2E0;
    if (((temp_v0_6 == 0x18) && (arg0->unk_15C >= 16.0f)) || (temp_v0_6 == 0x19) || (temp_v0_6 == 0x1A)) {
        arg0->unk_32C = 9;
        arg0->unk_32D = 2;
        goto block_120;
    }
    if (((((s32) temp_v0_6 >= 0x32) && ((s32) temp_v0_6 < 0x38)) || (((s32) temp_v0_6 >= 0x3B) && ((s32) temp_v0_6 < 0x3D)) || ((arg1->sceneNum == 0x2D) && (gSaveContext.sceneSetupIndex == 7))) && ((arg0->unk_32C = 0, (temp_v0_6 == 0x34)) || (temp_v0_6 == 0x35))) {
        arg0->unk_32D = 5;
block_120:
    }
    if (arg0->unk_2E0 == 0x40) {
        arg0->unk_32C = 0;
    }
}

void func_80AA26CC(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp20;
    CollisionCheckContext *sp1C;
    ColliderCylinder *temp_a1;
    CollisionCheckContext *temp_a1_2;

    temp_a1 = arg0 + 0x294;
    sp20 = temp_a1;
    Collider_UpdateCylinder(arg0, temp_a1);
    temp_a1_2 = arg1 + 0x18884;
    sp1C = temp_a1_2;
    CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp20);
    CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp20);
}

void func_80AA2720(DmStk *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    Actor *temp_v0;
    DmStk *temp_a0;
    DmStk *temp_a2;
    DmStk *temp_a2_2;
    GlobalContext *temp_a1;
    GlobalContext *temp_a3;
    u16 temp_t0;
    DmStk *phi_a2;

    temp_a2 = this;
    temp_a3 = globalCtx;
    temp_v0 = temp_a3->actorCtx.actorList[2].first;
    temp_a0 = temp_a2;
    temp_a1 = temp_a3;
    if (temp_a3->csCtx.state == 0) {
        sp1C = temp_v0;
        this = temp_a2;
        globalCtx = temp_a3;
        func_80AA1AF8((Actor *) temp_a0, temp_a1, temp_a2, temp_a3);
        temp_a2_2 = this;
        temp_t0 = temp_a2_2->unk_328 + 1;
        temp_a2_2->actor.flags |= 1;
        temp_a2_2->unk_328 = temp_t0;
        phi_a2 = temp_a2_2;
        if ((temp_t0 & 0xFFFF) >= 0x321) {
            temp_a2_2->unk_328 = 0;
            if ((temp_v0->unk_A70 * 0x10) >= 0) {
                this = temp_a2_2;
                func_801518B0(globalCtx, 0x2014U, (Actor *) temp_a2_2);
                phi_a2 = this;
            }
        }
        if (((phi_a2->unk_294.base.acFlags & 2) != 0) && (phi_a2->actor.colChkInfo.damageEffect == 0xF)) {
            phi_a2->unk_335 = 1;
            phi_a2->unk_144.status[4].loadQueue.validCount = func_80AA1A50;
        }
    }
}

void func_80AA27EC(DmStk *this, GlobalContext *globalCtx) {
    if (globalCtx->csCtx.state == 0) {
        func_80AA1AF8();
        this->actor.flags |= 1;
        if (this->unk_2E0 == 0x21) {
            this->actor.targetArrowOffset = 3100.0f;
        } else {
            this->actor.targetArrowOffset = 200.0f;
        }
        if (((this->unk_294.base.acFlags & 2) != 0) && (this->actor.colChkInfo.damageEffect == 0xF)) {
            this->unk_335 = 1;
            this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA1B9C;
        }
    }
}

void DmStk_Update(Actor *thisx, GlobalContext *globalCtx) {
    GameInfo *temp_v0_2;
    u16 temp_t3;
    u8 temp_v0;
    DmStk *this = (DmStk *) thisx;

    if (this->actor.params != 1) {
        if (this->unk_2E0 == 0x21) {
            Actor_SetHeight((Actor *) this, 40.0f);
        } else {
            Actor_SetHeight((Actor *) this, 6.0f);
        }
        func_80A9FDB0(this, globalCtx);
        if (this->unk_2E0 != 0x3D) {
            SkelAnime_FrameUpdateMatrix((SkelAnime *) &this->unk_144);
        }
        this->unk_144.status[5].loadMsg = this->unk_144.status[5].loadMsg;
        ((? (*)(DmStk *, GlobalContext *)) this->unk_144.status[4].loadQueue.validCount)(this, globalCtx);
        if (globalCtx->sceneNum == 0x19) {
            func_80AA26CC((Actor *) this, globalCtx);
        }
        func_80AA1D1C((Actor *) this, globalCtx);
        func_80AA0E90((Actor *) this, globalCtx);
        temp_v0 = this->unk_33A;
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {

                } else if (globalCtx->csCtx.state == 0) {
                    this->unk_33A = 4;
                }
            } else if (ActorCutscene_GetCanPlayNext(0x10) != 0) {
                this->unk_33A = 3;
                ActorCutscene_Start(0x10, (Actor *) this);
                this->unk_144.status[4].loadQueue.validCount = (s32) func_80AA27EC;
            } else {
                ActorCutscene_SetIntentToPlay(0x10);
            }
        } else if (func_800B8718(this, globalCtx) != 0) {
            this->unk_33A = 2;
        } else {
            func_800B874C(this, globalCtx, this->actor.xzDistToPlayer, fabsf(this->actor.yDistToPlayer));
        }
        if (((globalCtx->actorCtx.unk5 & 2) != 0) && (globalCtx->msgCtx.unk11F22 != 0) && (globalCtx->msgCtx.unk11F04 == 0x5E6) && (FrameAdvance_IsEnabled(globalCtx) == 0) && (globalCtx->sceneLoadFlag == 0) && (ActorCutscene_GetCurrentIndex() == -1) && (globalCtx->csCtx.state == 0)) {
            temp_v0_2 = gGameInfo;
            temp_t3 = (u16) temp_v0_2->data[15] + gSaveContext.time;
            gSaveContext.time = temp_t3;
            if (temp_v0_2->data[15] != 0) {
                gSaveContext.time = gSaveContext.unk_16 + temp_t3;
            }
        }
    }
    if ((globalCtx->sceneNum == 0x2D) && (gSaveContext.sceneSetupIndex == 3) && ((s32) globalCtx->csCtx.unk_12 > 0)) {
        globalCtx->envCtx.unk_17 = 0xF;
        globalCtx->envCtx.unk_18 = 0xF;
    }
}

s32 func_80AA2B14(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    u8 temp_t6;
    u8 temp_v1;

    if (arg1 == 0xF) {
        temp_v1 = arg5->unk_32D;
        if ((temp_v1 == 0) || (temp_v1 == 1) || (temp_v1 == 3)) {
            goto block_12;
        }
    } else if (arg1 == 0xC) {
        temp_t6 = arg5->unk_32D;
        switch (temp_t6) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 6:
            goto block_12;
        case 9:
            if (arg5->unk_2E4 == 0xFF) {
                goto block_12;
            }
            break;
        }
    } else if (arg1 == 0x11) {
block_12:
        *arg2 = NULL;
    }
    return 0;
}

void func_80AA2BC0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    GraphicsContext *sp90;
    Gfx *sp88;
    GraphicsContext *sp5C;
    Gfx *sp54;
    Gfx *sp38;
    GraphicsContext *sp30;
    Gfx *sp28;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_21;
    Gfx *temp_v0_22;
    Gfx *temp_v0_23;
    Gfx *temp_v0_24;
    Gfx *temp_v0_25;
    Gfx *temp_v0_26;
    Gfx *temp_v0_27;
    Gfx *temp_v0_28;
    Gfx *temp_v0_29;
    Gfx *temp_v0_30;
    Gfx *temp_v0_31;
    Gfx *temp_v0_32;
    Gfx *temp_v0_33;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a1;
    GraphicsContext *temp_t0;
    GraphicsContext *temp_t0_2;
    s16 temp_v0_2;
    s32 temp_v0_12;
    s32 temp_v1;
    u8 temp_t6;
    u8 temp_v0_7;
    u8 temp_v1_2;
    s32 phi_v1;
    u8 phi_v1_2;

    if (arg1 == 0x11) {
        SysMatrix_GetStateTranslation(arg4 + 0x304);
        temp_t0 = arg0->state.gfxCtx;
        temp_v0 = temp_t0->polyOpa.p;
        temp_t0->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp90 = temp_t0;
        sp88 = temp_v0;
        sp88->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
        temp_v0_2 = arg4->unk_2E0;
        if ((temp_v0_2 == 0x45) || (temp_v0_2 == 0xB) || (temp_v0_2 == 0x47)) {
            temp_v0_5 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_5[1];
            temp_v0_5->words.w1 = (u32) &D_0600AEC0;
            temp_v0_5->words.w0 = 0xDE000000;
            temp_v0_6 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_6[1];
            temp_v0_6->words.w1 = (u32) &D_0600AE30;
            temp_v0_6->words.w0 = 0xDE000000;
        } else {
            temp_v0_3 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_3[1];
            temp_v0_3->words.w1 = (u32) &D_0600A5C0;
            temp_v0_3->words.w0 = 0xDE000000;
            temp_v0_4 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_4[1];
            temp_v0_4->words.w1 = (u32) &D_0600A530;
            temp_v0_4->words.w0 = 0xDE000000;
        }
        temp_v0_7 = arg4->unk_32C;
        if (temp_v0_7 != 0) {
            if (temp_v0_7 != 1) {
                if (temp_v0_7 != 2) {
                    return;
                }
                temp_v0_8 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v0_8[1];
                temp_v0_8->words.w1 = (u32) &D_06006BB0;
                temp_v0_8->words.w0 = 0xDE000000;
                temp_v0_9 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v0_9[1];
                temp_v0_9->words.w1 = (u32) &D_06005870;
                temp_v0_9->words.w0 = 0xDE000000;
                sp90 = temp_t0;
                if ((func_800EE29C(arg0, 0x201U) != 0) && (sp90 = temp_t0, (arg0->csCtx.npcActions[func_800EE200(arg0, 0x201U)]->unk0 == 2)) && ((s32) arg4->unk_337 >= 0)) {
                    sp90 = temp_t0;
                    SysMatrix_StatePush();
                    Matrix_Scale(2.0f, 2.0f, 2.0f, 1);
                    gSegments[6] = (u32) (arg0->objectCtx.status[arg4->unk_337].segment + 0x80000000);
                    temp_v0_10 = temp_t0->polyOpa.p;
                    temp_t0->polyOpa.p = &temp_v0_10[1];
                    temp_v0_10->words.w0 = 0xDB060018;
                    temp_v0_10->words.w1 = (u32) arg0->objectCtx.status[arg4->unk_337].segment;
                    sp90 = temp_t0;
                    AnimatedMat_Draw(arg0, Lib_SegmentedToVirtual(&D_06008658));
                    func_800BDFC0(arg0, &D_06007840);
                    gSegments[6] = (u32) (arg0->objectCtx.status[arg4->unk_336].segment + 0x80000000);
                    temp_v0_11 = temp_t0->polyOpa.p;
                    temp_t0->polyOpa.p = &temp_v0_11[1];
                    temp_v0_11->words.w0 = 0xDB060018;
                    temp_v0_11->words.w1 = (u32) arg0->objectCtx.status[arg4->unk_336].segment;
                    SysMatrix_StatePop();
                    return;
                }
                /* Duplicate return node #48. Try simplifying control flow for better match */
                return;
            }
            if ((arg0->sceneNum == 0x65) && (gSaveContext.sceneSetupIndex == 1) && ((s32) arg0->csCtx.frames < 0x578)) {
                temp_v1 = arg4[2].gravity;
                temp_v0_12 = arg4[2].speedXZ;
                phi_v1 = temp_v1;
                if (temp_v1 == temp_v0_12) {
                    arg4[2].gravity = temp_v0_12;
                    phi_v1 = temp_v0_12;
                }
                sp90 = temp_t0;
                temp_t0->polyOpa.p = Gfx_SetFog(temp_t0->polyOpa.p, arg4[2].scale.z, arg4[2].velocity.x, arg4[2].velocity.y, arg4[2].velocity.z, temp_v0_12, phi_v1);
                temp_v0_13 = temp_t0->polyOpa.p;
                temp_t0->polyOpa.p = &temp_v0_13[1];
                temp_v0_13->words.w1 = (u32) &D_06006BB0;
                temp_v0_13->words.w0 = 0xDE000000;
                sp90 = temp_t0;
                temp_t0->polyOpa.p = func_801660B8(arg0, temp_t0->polyOpa.p);
                return;
            }
            temp_v0_14 = temp_t0->polyOpa.p;
            temp_t0->polyOpa.p = &temp_v0_14[1];
            temp_v0_14->words.w1 = (u32) &D_06006BB0;
            temp_v0_14->words.w0 = 0xDE000000;
            return;
        }
        /* Duplicate return node #48. Try simplifying control flow for better match */
        return;
    }
    if (arg1 == 0xF) {
        temp_v1_2 = arg4->unk_32D;
        temp_t0_2 = arg0->state.gfxCtx;
        phi_v1_2 = temp_v1_2;
        if (temp_v1_2 != 5) {
            temp_v0_15 = temp_t0_2->polyOpa.p;
            temp_t0_2->polyOpa.p = &temp_v0_15[1];
            temp_v0_15->words.w0 = 0xDA380003;
            sp5C = temp_t0_2;
            sp54 = temp_v0_15;
            sp54->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
            phi_v1_2 = arg4->unk_32D;
        }
        if (phi_v1_2 != 0) {
            if (phi_v1_2 != 1) {
                if (phi_v1_2 != 3) {
                    if (phi_v1_2 != 5) {
                        return;
                    }
                    sp5C = arg0->state.gfxCtx;
                    SysMatrix_InsertTranslation(-20.0f, -660.0f, 860.0f, 1);
                    Matrix_RotateY(0x6142, 1U);
                    SysMatrix_InsertXRotation_s(-0x1988, 1);
                    temp_v0_16 = arg0->state.gfxCtx->polyOpa.p;
                    arg0->state.gfxCtx->polyOpa.p = &temp_v0_16[1];
                    temp_v0_16->words.w0 = 0xDA380003;
                    sp5C = arg0->state.gfxCtx;
                    sp38 = temp_v0_16;
                    sp38->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
                    temp_v0_17 = arg0->state.gfxCtx->polyOpa.p;
                    arg0->state.gfxCtx->polyOpa.p = &temp_v0_17[1];
                    temp_v0_17->words.w1 = (u32) &D_06006BB0;
                    temp_v0_17->words.w0 = 0xDE000000;
                    return;
                }
                temp_v0_18 = arg0->state.gfxCtx->polyOpa.p;
                arg0->state.gfxCtx->polyOpa.p = &temp_v0_18[1];
                temp_v0_18->words.w1 = (u32) &D_06009DA0;
                temp_v0_18->words.w0 = 0xDE000000;
                if ((arg0->sceneNum == 0x65) && (gSaveContext.sceneSetupIndex == 1)) {
                    temp_v0_19 = arg0->state.gfxCtx->polyOpa.p;
                    arg0->state.gfxCtx->polyOpa.p = &temp_v0_19[1];
                    temp_v0_19->words.w1 = (u32) &D_0600CAD0;
                    temp_v0_19->words.w0 = 0xDE000000;
                    return;
                }
                /* Duplicate return node #48. Try simplifying control flow for better match */
                return;
            }
            temp_v0_20 = arg0->state.gfxCtx->polyOpa.p;
            arg0->state.gfxCtx->polyOpa.p = &temp_v0_20[1];
            temp_v0_20->words.w1 = (u32) &D_06009710;
            temp_v0_20->words.w0 = 0xDE000000;
            temp_v0_21 = arg0->state.gfxCtx->polyOpa.p;
            arg0->state.gfxCtx->polyOpa.p = &temp_v0_21[1];
            temp_v0_21->words.w1 = (u32) &D_060053C0;
            temp_v0_21->words.w0 = 0xDE000000;
            return;
        }
        temp_v0_22 = arg0->state.gfxCtx->polyOpa.p;
        arg0->state.gfxCtx->polyOpa.p = &temp_v0_22[1];
        temp_v0_22->words.w1 = (u32) &D_06009AC0;
        temp_v0_22->words.w0 = 0xDE000000;
        temp_v0_23 = arg0->state.gfxCtx->polyOpa.p;
        arg0->state.gfxCtx->polyOpa.p = &temp_v0_23[1];
        temp_v0_23->words.w1 = (u32) &D_060046B0;
        temp_v0_23->words.w0 = 0xDE000000;
        return;
    }
    if (arg1 == 0xC) {
        temp_a1 = arg0->state.gfxCtx;
        temp_v0_24 = temp_a1->polyOpa.p;
        temp_a1->polyOpa.p = &temp_v0_24[1];
        temp_v0_24->words.w0 = 0xDA380003;
        sp30 = temp_a1;
        sp28 = temp_v0_24;
        sp28->words.w1 = Matrix_NewMtx(arg0->state.gfxCtx);
        temp_t6 = arg4->unk_32D;
        switch (temp_t6) {
        case 1:
            temp_v0_25 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_25[1];
            temp_v0_25->words.w1 = (u32) &D_060084C0;
            temp_v0_25->words.w0 = 0xDE000000;
            return;
        case 2:
            temp_v0_26 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_26[1];
            temp_v0_26->words.w1 = (u32) &D_060090C0;
            temp_v0_26->words.w0 = 0xDE000000;
            temp_v0_27 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_27[1];
            temp_v0_27->words.w1 = (u32) &D_060079F0;
            temp_v0_27->words.w0 = 0xDE000000;
            return;
        case 3:
            if ((arg0->sceneNum != 0x65) || (gSaveContext.sceneSetupIndex != 1)) {
                temp_v0_28 = temp_a1->polyOpa.p;
                temp_a1->polyOpa.p = &temp_v0_28[1];
                temp_v0_28->words.w1 = (u32) &D_0600CAD0;
                temp_v0_28->words.w0 = 0xDE000000;
            }
            temp_v0_29 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_29[1];
            temp_v0_29->words.w1 = (u32) &D_060090C0;
            temp_v0_29->words.w0 = 0xDE000000;
            return;
        case 4:
            temp_v0_30 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_30[1];
            temp_v0_30->words.w1 = (u32) &D_060090C0;
            temp_v0_30->words.w0 = 0xDE000000;
            return;
        case 6:
            temp_v0_31 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_31[1];
            temp_v0_31->words.w1 = (u32) &D_06008A80;
            temp_v0_31->words.w0 = 0xDE000000;
            temp_v0_32 = temp_a1->polyOpa.p;
            temp_a1->polyOpa.p = &temp_v0_32[1];
            temp_v0_32->words.w1 = (u32) &D_06016620;
            temp_v0_32->words.w0 = 0xDE000000;
            return;
        case 9:
            if (arg4[2].scale.y == 0xFF) {
                temp_v0_33 = temp_a1->polyOpa.p;
                temp_a1->polyOpa.p = &temp_v0_33[1];
                temp_v0_33->words.w1 = (u32) &D_060087B0;
                temp_v0_33->words.w0 = 0xDE000000;
            }
            /* Duplicate return node #48. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_80AA33A4(GlobalContext *arg4) {
    func_80AA2BC0(arg4, 0);
}

void DmStk_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_s1;
    DmStk *this = (DmStk *) thisx;

    if (this->unk_33B != 0) {
        if (this->actor.params == 1) {
            func_800BDFC0(globalCtx, &D_06006BB0);
            return;
        }
        gSegments[6] = (u32) (globalCtx->objectCtx.status[this->unk_336].segment + 0x80000000);
        temp_s1 = globalCtx->state.gfxCtx;
        this->unk_144.status[5].loadMsg = this->unk_144.status[5].loadMsg;
        func_8012C28C(globalCtx->state.gfxCtx);
        if ((s32) this->unk_144.status[5].loadMsg < 0xFF) {
            func_8012C2DC(globalCtx->state.gfxCtx);
            Scene_SetRenderModeXlu(globalCtx, 1, 2U);
            temp_v1 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = &temp_v1[1];
            temp_v1->words.w1 = 0;
            temp_v1->words.w0 = 0xE7000000;
            temp_v1_2 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = &temp_v1_2[1];
            temp_v1_2->words.w0 = 0xFB000000;
            temp_v1_2->words.w1 = (s32) this->unk_144.status[5].loadMsg & 0xFF;
            temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, (void **) this->unk_144.spaceEnd, (Vec3s *) this->unk_144.status[0].dmaReq.filename, (s32) this->unk_146, NULL, func_80AA2BC0, (Actor *) this, temp_s1->polyXlu.p);
            return;
        }
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_v1_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1_3[1];
        temp_v1_3->words.w1 = 0;
        temp_v1_3->words.w0 = 0xE7000000;
        temp_v1_4 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = &temp_v1_4[1];
        temp_v1_4->words.w1 = -1;
        temp_v1_4->words.w0 = 0xFB000000;
        SkelAnime_DrawSV(globalCtx, (void **) this->unk_144.spaceEnd, (Vec3s *) this->unk_144.status[0].dmaReq.filename, (s32) this->unk_146, func_80AA2B14, func_80AA33A4, (Actor *) this);
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}
