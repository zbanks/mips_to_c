? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
Actor *func_80BE04E0(EnTab *arg0, GlobalContext *arg1, s32 arg2, s16 arg3); /* static */
void func_80BE0590(EnTab *arg0);                    /* static */
s32 func_80BE05BC(EnTab *arg0, s32 arg1);           /* static */
void func_80BE0620(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BE0664(EnTab *arg0);                    /* static */
s32 func_80BE06DC(Actor *arg0, GlobalContext *arg1); /* static */
void *func_80BE0778(void *arg0, void *arg1);        /* static */
void func_80BE07A0(EnTab *arg0);                    /* static */
void func_80BE09A8(EnTab *arg0, GlobalContext *);   /* static */
void *func_80BE0A98(Vec3s *arg0, GlobalContext *arg1, s32); /* static */
s32 func_80BE0C04(EnTab *arg0, Actor *arg1, f32 arg2, EnTab *); /* static */
void func_80BE0D38(void *arg0, void *arg1);         /* static */
s32 func_80BE0D60(void *arg0, void *arg1);          /* static */
s32 *func_80BE0E04(EnTab *arg0, GlobalContext *arg1); /* static */
s32 func_80BE0F04(EnTab *arg0, ? arg2);             /* static */
s32 func_80BE0FC4(EnTab *arg0, ? arg1, ? arg2);     /* static */
s32 func_80BE1060(EnTab *arg0, u8 *arg2, struct_80133038_arg2 *, EnTab *); /* static */
? func_80BE10BC(EnTab *arg0, void *arg1);           /* static */
void func_80BE1224(EnTab *arg0, GlobalContext *);   /* static */
s32 func_80BE1648(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor); /* static */
void func_80BE16B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BE1704(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_06007F78;
static void D_80BE18D0;                             /* unable to generate initializer */
static s32 D_80BE1914 = {
    0x3A0200,
    0x80E2AF9,
    0xC113A02,
    0x100E2AFA,
    0xC150900,
    0xE2AFB,
    0xC003401,
    0x90F2A,
    0xFD0C0F2A,
    0xFE0C100F,
    0x2AFC0C10,
};
static s32 D_80BE1940 = {
    0x3F0400,
    0x80E2B3D,
    0xC113F04,
    0x100E2B3E,
    0xC0F2AFA,
    0xC150900,
    0xE2AFB,
    0xC003401,
    0x90F2A,
    0xFD0C0F2A,
    0xFE0C100F,
    0x2AFC0C10,
};
static s32 D_80BE1970 = {0x3A0100, 0x80E2AFF, 0xC113A01, 0x100E2B00, 0xC100000};
static s32 D_80BE1984 = {0x500100, 0x80E2B3F, 0xC115001, 0x100E2B40, 0xC100000};
static s32 D_80BE1998 = {0xE2B090C, 0x10000000};
static s32 D_80BE19A0 = {
    0xE2B0A0C,
    0x5004E00,
    0x4E30,
    0x2800050E,
    0x2B0E0C10,
    0xE2B0B0C,
    0x5000000,
    0x8001008,
    0x140026,
    0x19000E08,
    0xC8000F,
    0x19000631,
    0xE2B0D0C,
    0x10320E2B,
    0xC0C1030,
    0x1214FF38,
    0x6009100,
    0x130091,
    0xC103012,
    0x14FFEC06,
    0x920000,
    0x1300920C,
    0x10300034,
    0x100050E,
    0x2B0F0C10,
    0xE2B110C,
    0x10000000,
};
static s32 D_80BE1A0C = {
    0xE2B0A0C,
    0x5004E00,
    0x4E30,
    0x2800050E,
    0x2B0E0C10,
    0xE2B0B0C,
    0x5000000,
    0x8001008,
    0x140026,
    0x19000E08,
    0xC8000F,
    0x19000631,
    0xE2B0D0C,
    0x10320E2B,
    0xC0C1030,
    0x1214FF38,
    0x6009100,
    0x130091,
    0xC103012,
    0x14FFEC06,
    0x920000,
    0x1300920C,
    0x10300034,
    0x100050E,
    0x2B100C10,
    0xE2B110C,
    0x10000000,
};
static ColliderCylinderInit D_80BE1A98 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xE, 0x3E, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BE1AC4 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80BE1AD0 = {
    {(AnimationHeader *)0x6000758, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x60086AC, 1.0f, 0, 0xFFFF, 0, 0},
};
static Vec3f D_80BE1AF0 = {-28.0f, -8.0f, -195.0f};
static Vec3s D_80BE1AFC = {0, 0, 0};
static Vec3f D_80BE1B04 = {161.0f, 0.0f, -10.0f};
static Vec3s D_80BE1B10 = {0, 0xC000, 0};
static Vec3f D_80BE1B18 = {800.0f, 0.0f, 0.0f};
static ? D_80BE1B24;                                /* unable to generate initializer */

typedef struct EnTab {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnTab *, GlobalContext *);
    /* 0x018C */ ColliderCylinder unk18C;           /* inferred */
    /* 0x01D8 */ u8 unk1D8;                         /* inferred */
    /* 0x01D9 */ char pad1D9[0x3];                  /* maybe part of unk1D8[4]? */
    /* 0x01DC */ s32 unk1DC;                        /* inferred */
    /* 0x01E0 */ void *unk1E0;                      /* inferred */
    /* 0x01E4 */ Actor *unk1E4;                     /* inferred */
    /* 0x01E8 */ char pad1E8[0x24];                 /* maybe part of unk1E4[10]? */
    /* 0x020C */ Vec3s unk20C;                      /* inferred */
    /* 0x0212 */ char pad212[0x72];                 /* maybe part of unk20C[20]? */
    /* 0x0284 */ Vec3s unk284;                      /* inferred */
    /* 0x028A */ char pad28A[0x72];                 /* maybe part of unk284[20]? */
    /* 0x02FC */ u16 unk2FC;                        /* inferred */
    /* 0x02FE */ char pad2FE[0x2];                  /* maybe part of unk2FC[2]? */
    /* 0x0300 */ f32 unk300;                        /* inferred */
    /* 0x0304 */ char pad304[0x8];                  /* maybe part of unk300[3]? */
    /* 0x030C */ s16 unk30C;                        /* inferred */
    /* 0x030E */ char pad30E[0x4];                  /* maybe part of unk30C[3]? */
    /* 0x0312 */ s16 unk312;                        /* inferred */
    /* 0x0314 */ s16 unk314;                        /* inferred */
    /* 0x0316 */ s16 unk316;                        /* inferred */
    /* 0x0318 */ s16 unk318;                        /* inferred */
    /* 0x031A */ s16 unk31A;                        /* inferred */
    /* 0x031C */ s16 unk31C;                        /* inferred */
    /* 0x031E */ s16 unk31E;                        /* inferred */
    /* 0x0320 */ char pad320[0x2];                  /* maybe part of unk31E[2]? */
    /* 0x0322 */ s16 unk322;                        /* inferred */
    /* 0x0324 */ s16 unk324;                        /* inferred */
    /* 0x0326 */ char pad326[0x2];                  /* maybe part of unk324[2]? */
    /* 0x0328 */ void *unk328;                      /* inferred */
    /* 0x032C */ s32 unk32C;                        /* inferred */
    /* 0x0330 */ char pad330[0x8];                  /* maybe part of unk32C[3]? */
    /* 0x0338 */ s32 unk338;                        /* inferred */
} EnTab;                                            /* size 0x33C */

Actor *func_80BE04E0(EnTab *arg0, GlobalContext *arg1, s32 arg2, s16 arg3) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, arg2 & 0xFF & 0xFF, (s32) arg3);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0 == arg0) || (temp_v0->update == 0))) {
        temp_v1 = temp_v0->next;
        if (temp_v1 == 0) {

        } else {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

void func_80BE0590(EnTab *arg0) {
    arg0->unk144.animPlaybackSpeed = arg0->unk300;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80BE05BC(EnTab *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_v1;
    s32 phi_v0;
    s32 phi_v1;

    temp_a0 = arg0 + 0x144;
    phi_v0 = 0;
    phi_v1 = 0;
    if (arg1 != arg0->unk32C) {
        phi_v0 = 1;
    }
    if (phi_v0 != 0) {
        arg0->unk32C = arg1;
        arg0 = arg0;
        temp_v1 = func_8013BC6C(temp_a0, &D_80BE1AD0, arg1);
        arg0->unk300 = arg0->unk144.animPlaybackSpeed;
        phi_v1 = temp_v1;
    }
    return phi_v1;
}

void func_80BE0620(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp18;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x18C;
    sp18 = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
}

void func_80BE0664(EnTab *arg0) {
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

s32 func_80BE06DC(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    Actor *temp_a0;
    u16 *temp_a0_2;
    s32 phi_v1;

    temp_a0 = arg0;
    phi_v1 = 0;
    if ((arg0->unk2FC & 7) != 0) {
        sp1C = 0;
        arg0 = arg0;
        phi_v1 = sp1C;
        if (func_800B84D0(temp_a0, arg1) != 0) {
            temp_a0_2 = arg0 + 0x2FC;
            arg0 = arg0;
            func_8013AED4(temp_a0_2, 0U, 7U);
            arg0->unk320 = 0;
            arg0->unk328 = 0;
            arg0->unk2FC = (u16) (arg0->unk2FC | 8);
            arg0->unk188 = func_80BE1348;
            arg0->child = arg1->actorCtx.actorList[2].first;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

s32 func_80BE0778(void *arg0, void *arg1) {
    s32 phi_v1;

    if (arg0->unk1D8 == 1) {
        phi_v1 = arg0->unk124;
    } else {
        phi_v1 = arg1->unk1CCC;
    }
    return phi_v1;
}

void func_80BE07A0(EnTab *arg0) {
    Vec3f sp40;
    Vec3f sp34;
    s16 sp32;
    s16 temp_v0;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    void *temp_v0_2;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    Math_Vec3f_Copy(&sp40, arg0->unk1E0 + 0x24);
    Math_Vec3f_Copy(&sp34, arg0 + 0x24);
    temp_v0 = Math_Vec3f_Yaw(&sp34, &sp40);
    sp32 = temp_v0;
    Math_ApproachS(arg0 + 0x314, (s16) ((temp_v0 - arg0->unk318) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v1 = arg0->unk314;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk314 = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk314 = phi_v0;
    }
    Math_ApproachS(arg0 + 0x318, (s16) ((sp32 - arg0->unk314) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v1_2 = arg0->unk318;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk318 = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk318 = phi_v0_2;
    }
    Math_Vec3f_Copy(&sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk1E0;
    if (temp_v0_2->unk0 == 0) {
        sp40.y = temp_v0_2->unkC44 + 3.0f;
    } else {
        Math_Vec3f_Copy(&sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x312, (s16) (Math_Vec3f_Pitch(&sp34, &sp40) - arg0->unk316), 4, 0x2AA8);
    temp_v1_3 = arg0->unk312;
    if ((s32) temp_v1_3 < -0x1554) {
        arg0->unk312 = -0x1554;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1555) {
            phi_v0_3 = 0x1554;
        }
        arg0->unk312 = phi_v0_3;
    }
    Math_ApproachS(arg0 + 0x316, (s16) (Math_Vec3f_Pitch(&sp34, &sp40) - arg0->unk312), 4, 0x2AA8);
    temp_v1_4 = arg0->unk316;
    if ((s32) temp_v1_4 < -0xE38) {
        arg0->unk316 = -0xE38;
        return;
    }
    phi_v0_4 = temp_v1_4;
    if ((s32) temp_v1_4 >= 0xE39) {
        phi_v0_4 = 0xE38;
    }
    arg0->unk316 = phi_v0_4;
}

void func_80BE09A8(EnTab *arg0) {
    EnTab *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s32 temp_v0;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_3;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_v0 = func_80BE0778();
    temp_a0 = arg0;
    temp_a0->unk1E0 = temp_v0;
    if (((temp_a0->unk2FC & 8) != 0) && (temp_v0 != 0)) {
        temp_v0_2 = temp_a0->unk324;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            temp_a0->unk324 = temp_v0_2 - 1;
            phi_v1 = temp_a0->unk324;
        }
        if (phi_v1 == 0) {
            arg0 = temp_a0;
            func_80BE07A0(temp_a0);
            arg0->unk316 = 0;
            arg0->unk318 = 0;
            temp_t2 = arg0->unk2FC & 0xFFBF;
            temp_t3 = temp_t2 | 0x10;
            arg0->unk2FC = temp_t2;
            arg0->unk2FC = temp_t3;
            return;
        }
        goto block_7;
    }
block_7:
    temp_v0_3 = temp_a0->unk2FC;
    if ((temp_v0_3 & 0x10) != 0) {
        temp_a0->unk2FC = temp_v0_3 & 0xFFEF;
        temp_a0->unk312 = 0;
        temp_a0->unk314 = 0;
        temp_a0->unk316 = 0;
        temp_a0->unk318 = 0;
        temp_a0->unk324 = 0x14;
        return;
    }
    temp_v0_4 = temp_a0->unk324;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        temp_a0->unk324 = temp_v0_4 - 1;
        phi_v1_2 = temp_a0->unk324;
    }
    if (phi_v1_2 == 0) {
        temp_a0->unk2FC |= 0x40;
    }
}

void *func_80BE0A98(Vec3s *arg0, GlobalContext *arg1) {
    void *sp24;
    s32 sp20;
    f32 temp_f2;
    u16 temp_v0;
    u8 temp_v1;
    f32 phi_f0;
    f32 phi_f0_2;
    void *phi_v0;

    sp24 = arg1->actorCtx.actorList[2].first;
    temp_v1 = func_80152498(arg1 + 0x4908);
    if (arg0->unk304 != 0.0f) {
        phi_f0 = 40.0f;
    } else {
        phi_f0 = -40.0f;
    }
    arg0->unk308 = (f32) (arg0->unk308 + phi_f0);
    temp_f2 = arg0->unk308;
    if (temp_f2 < 0.0f) {
        arg0->unk308 = 0.0f;
    } else {
        if (temp_f2 > 80.0f) {
            phi_f0_2 = 80.0f;
        } else {
            phi_f0_2 = temp_f2;
        }
        arg0->unk308 = phi_f0_2;
    }
    arg1 = arg1;
    sp20 = (s32) temp_v1;
    SysMatrix_InsertTranslation(arg0->unk308, 0.0f, 0.0f, 1);
    phi_v0 = arg1 + 0x10000;
    if ((arg0 == sp24->unkA88) && ((temp_v0 = arg1->msgCtx.unk11F04, (((s32) temp_v0 < 0xFF) != 0)) || (phi_v0 = (void *)3, (((s32) temp_v0 < 0x201) == 0))) && (phi_v0 = (void *)3, phi_v0 = (void *)3, (temp_v1 == (void *)3)) && (phi_v0 = (void *)3, (arg0->unk334 == (void *)3))) {
        if ((arg1->state.frames & 1) == 0) {
            if (arg0->unk304 != 0.0f) {
                phi_v0 = (void *)3;
                goto block_18;
            }
            arg0->unk304 = 1.0f;
        }
    } else {
block_18:
        arg0->unk304 = 0.0f;
    }
    arg0->unk334 = (s32) temp_v1;
    return phi_v0;
}

s32 func_80BE0C04(EnTab *arg0, void *arg1, f32 arg2) {
    Vec3f sp44;
    Vec3f sp38;
    s32 sp34;
    f32 sp30;
    s16 sp2E;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    f32 phi_f2;
    s32 phi_v1;
    s16 phi_v1_2;

    sp34 = 0;
    if (arg1 != 0) {
        arg1 = arg1;
        Math_Vec3f_Copy(&sp38, arg0 + 0x24);
        Math_Vec3f_Copy(&sp44, arg1 + 0x24);
        temp_v0 = Math_Vec3f_Yaw(&sp38, &sp44);
        if (arg0->unk338 != 0) {
            phi_f2 = arg2;
        } else {
            phi_f2 = arg2 * 0.5f;
        }
        sp2E = temp_v0;
        sp30 = phi_f2;
        if (Math_Vec3f_DistXZ(&sp44, &sp38) < phi_f2) {
            temp_v0_2 = temp_v0 - arg0->actor.shape.rot.y;
            phi_v1 = (s32) temp_v0_2;
            if ((s32) temp_v0_2 < 0) {
                phi_v1 = -(s32) temp_v0_2;
            }
            if (phi_v1 < 0x38E0) {
                sp34 = 1;
            }
        }
        temp_v0_3 = arg0->unk322;
        if (temp_v0_3 == 0) {
            phi_v1_2 = 0;
        } else {
            arg0->unk322 = temp_v0_3 - 1;
            phi_v1_2 = arg0->unk322;
        }
        if (phi_v1_2 == 0) {
            arg0->unk338 ^= 1;
            arg0->unk322 = Rand_S16Offset(0x3C, 0x3C);
        }
    }
    return sp34;
}

void func_80BE0D38(void *arg0, void *arg1) {
    func_80114E90();
}

s32 func_80BE0D60(void *arg0, void *arg1) {
    s32 sp18;
    s16 temp_v0;
    void *temp_a3;
    s32 phi_v1;

    temp_a3 = arg0;
    temp_a3->unk320 = (s16) (temp_a3->unk320 + 1);
    temp_v0 = temp_a3->unk320;
    phi_v1 = 0;
    if (temp_v0 == 1) {
        sp18 = 0;
        arg1->unk18798(arg1, &D_0400D568, 2, temp_a3);
        phi_v1 = sp18;
    } else if ((s32) temp_v0 >= 0x15) {
        arg0 = temp_a3;
        arg1->unk18798(arg1, 0, 0, temp_a3);
        arg0->unk320 = 0;
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 *func_80BE0E04(EnTab *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    if (arg1->actorCtx.actorList[2].first->unk14B == 3) {
        return &D_80BE1984;
    }
    temp_v0 = arg0->unk1D8;
    if (temp_v0 != 1) {
        if (temp_v0 == 2) {
            arg0->unk328 = func_80BE0D38;
            if (Player_GetMask(arg1) != 7) {
                return &D_80BE1998;
            }
            if (gSaveContext.day == 3) {
                return &D_80BE1A0C;
            }
            return &D_80BE19A0;
        }
        return NULL;
    }
    arg0->unk328 = (void (*)(void *, void *)) func_80BE0D60;
    if (Player_GetMask(arg1) == 7) {
        return &D_80BE1940;
    }
    if (Player_GetMask(arg1) == 2) {
        return &D_80BE1970;
    }
    return &D_80BE1914;
}

s32 func_80BE0F04(EnTab *arg0, ? arg2) {
    s32 sp2C;
    Actor *sp28;
    Vec3s *sp24;
    Actor *temp_v0;
    Vec3s *temp_a2;
    s32 phi_v1;

    sp2C = 0;
    temp_v0 = func_80BE04E0(arg0, (GlobalContext *)4, 0xA4);
    sp28 = temp_v0;
    phi_v1 = sp2C;
    if (temp_v0 != 0) {
        Math_Vec3f_Copy(arg0 + 0x24, &D_80BE1AF0);
        temp_a2 = arg0 + 0x30;
        sp24 = temp_a2;
        Math_Vec3s_Copy(temp_a2, &D_80BE1AFC);
        Math_Vec3s_Copy(arg0 + 0xBC, sp24);
        arg0->actor.targetMode = 0;
        func_8013AED4(arg0 + 0x2FC, 3U, 7U);
        arg0->unk30C = 0x1E;
        arg0->unk2FC |= 0x60;
        arg0->unk1E4 = sp28;
        func_80BE05BC(arg0, 0);
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80BE0FC4(EnTab *arg0, ? arg1, ? arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80BE1B04);
    temp_a2 = arg0 + 0x30;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80BE1B10);
    Math_Vec3s_Copy(arg0 + 0xBC, sp20);
    arg0->actor.targetMode = 6;
    func_8013AED4(arg0 + 0x2FC, 3U, 7U);
    arg0->unk30C = 0x50;
    arg0->unk2FC |= 0x60;
    func_80BE05BC(arg0, 1);
    return 1;
}

s32 func_80BE1060(EnTab *arg0, u8 *arg2) {
    u8 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    arg0->unk2FC = 0;
    temp_v0 = *arg2;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            phi_v1 = 0;
        } else {
            phi_v0 = func_80BE0FC4();
            goto block_5;
        }
    } else {
        phi_v0 = func_80BE0F04();
block_5:
        phi_v1 = phi_v0;
    }
    return phi_v1;
}

? func_80BE10BC(EnTab *arg0, void *arg1) {
    void *sp18;
    EnTab *temp_a0;
    EnTab *temp_a0_2;
    EnTab *temp_a3;
    EnTab *temp_a3_2;
    u16 temp_v0_2;
    u8 temp_v0;
    void *temp_a1;
    void *temp_v0_3;
    void *temp_v1;
    void *phi_a1;

    temp_a3 = arg0;
    temp_v1 = arg1->unk1CCC;
    sp18 = temp_v1;
    temp_v0 = temp_a3->unk1D8;
    if (temp_v0 != 1) {
        temp_a0 = temp_a3;
        if (temp_v0 != 2) {

        } else {
            arg0 = temp_a3;
            if (func_80BE0C04(temp_a0, sp18, 200.0f, temp_a3) != 0) {
                arg0->unk2FC |= 8;
            } else {
                arg0->unk2FC &= 0xFFF7;
            }
        }
    } else if (((temp_v1->unkA6C & 0x40) != 0) && (temp_v0_2 = arg1->unk1680C, (((s32) temp_v0_2 < 0x2B01) == 0)) && ((s32) temp_v0_2 < 0x2B08)) {
        temp_a3->unk2FC |= 8;
        temp_a3->actor.child = temp_a3->unk1E4;
    } else {
        arg0 = temp_a3;
        arg1 = arg1;
        temp_a3_2 = arg0;
        temp_a0_2 = temp_a3_2;
        if (((gSaveContext.weekEventReg[75] & 1) != 0) || (temp_v0_3 = temp_a3_2->unk1E4, (temp_v0_3->draw == 0)) || (phi_a1 = temp_v0_3, !(Math_Vec3f_DistXYZ(temp_a3 + 0x24, temp_a3->unk1E4 + 0x24) < 160.0f))) {
            temp_a1 = arg1->unk1CCC;
            temp_a3_2->actor.child = temp_a1;
            phi_a1 = temp_a1;
        } else {
            temp_a3_2->actor.child = temp_v0_3;
        }
        arg0 = temp_a3_2;
        if (func_80BE0C04(temp_a0_2, phi_a1, 160.0f, temp_a3_2) != 0) {
            arg0->unk2FC |= 8;
        } else {
            arg0->unk2FC &= 0xFFF7;
        }
    }
    return 0;
}

void func_80BE1224(EnTab *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk1D8;
    if ((temp_v0 == 1) || (temp_v0 == 2)) {
        func_80BE10BC(arg0);
    }
    Math_ApproachS(arg0 + 0xBE, arg0->actor.world.rot.y, 3, 0x2AA8);
}

void func_80BE127C(EnTab *this, GlobalContext *globalCtx) {
    struct_80133038_arg2 sp18;
    EnTab *temp_a0;
    EnTab *temp_a3;
    EnTab *phi_a3;
    EnTab *phi_a3_2;
    EnTab *phi_a3_3;

    this->unk31A = gSaveContext.unk_14 + gGameInfo->data[15];
    this = this;
    temp_a3 = this;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    if ((func_80133038(globalCtx, &D_80BE18D0, &sp18) == 0) || ((temp_a0 = temp_a3, (sp18.unk0 != temp_a3->unk1D8)) && (this = temp_a3, phi_a3 = this, phi_a3_2 = this, (func_80BE1060(temp_a0, (u8 *) globalCtx, &sp18, temp_a3) == 0)))) {
        phi_a3_2->actor.shape.shadowDraw = NULL;
        phi_a3_2->actor.flags &= -2;
        sp18.unk0 = 0;
        phi_a3_3 = phi_a3_2;
    } else {
        phi_a3->actor.shape.shadowDraw = func_800B3FC0;
        phi_a3->actor.flags |= 1;
        phi_a3_3 = phi_a3;
    }
    phi_a3_3->unk1D8 = sp18.unk0;
    func_80BE1224(phi_a3_3, globalCtx);
}

void func_80BE1348(EnTab *this, GlobalContext *globalCtx) {
    Vec3f sp40;
    Vec3f sp34;
    u16 temp_t9;
    void *temp_v0;

    if (func_8010BF58(&this->actor, globalCtx, func_80BE0E04(this, globalCtx), this->unk328, &this->unk1DC) != 0) {
        func_8013AED4(&this->unk2FC, 3U, 7U);
        temp_t9 = this->unk2FC & 0xFFF7;
        this->unk2FC = temp_t9;
        this->unk2FC = temp_t9 | 0x40;
        this->unk324 = 0x14;
        this->unk1DC = 0;
        this->actionFunc = func_80BE127C;
        return;
    }
    temp_v0 = this->unk1E0;
    if (temp_v0 != 0) {
        Math_Vec3f_Copy(&sp40, temp_v0 + 0x24);
        Math_Vec3f_Copy(&sp34, &this->actor.world.pos);
        Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw(&sp34, &sp40), 4, 0x2AA8);
    }
}

void EnTab_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnTab *this = (EnTab *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 14.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06007F78, NULL, &this->unk20C, &this->unk284, 0x14);
    this->unk32C = -1;
    func_80BE05BC(this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk18C, &this->actor, &D_80BE1A98);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BE1AC4);
    Actor_SetScale(&this->actor, 0.01f);
    this->unk2FC = 0;
    this->unk1D8 = 0;
    this->unk328 = NULL;
    this->unk2FC = 0x40;
    this->actionFunc = func_80BE127C;
    this->actor.gravity = -1.0f;
    func_80BE127C(this, globalCtx);
}

void EnTab_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnTab *this = (EnTab *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk18C);
}

void EnTab_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnTab *this = (EnTab *) thisx;
    func_80BE06DC(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    if (this->unk1D8 != 0) {
        func_80BE0590(this);
        func_80BE0664(this);
        func_80BE09A8(this, globalCtx);
        func_8013C964(&this->actor, globalCtx, (f32) (this->unk18C.dim.radius + this->unk30C), (f32) (this->unk18C.dim.height + 0xA), 0, (s16) (this->unk2FC & 7));
        Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
        Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 12.0f, 0.0f, 4U);
        func_80BE0620(&this->actor, globalCtx);
    }
}

s32 func_80BE1648(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    s32 temp_a3;
    s32 phi_a3;

    temp_a3 = arg1;
    phi_a3 = temp_a3;
    if (temp_a3 == 9) {
        arg1 = temp_a3;
        func_80BE0A98(arg5, arg0, temp_a3);
        phi_a3 = arg1;
    }
    if ((arg5->unk32C == 1) && (phi_a3 == 0x12)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80BE16B4(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 9) {
        SysMatrix_MultiplyVector3fByState(&D_80BE1B18, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    }
}

void func_80BE1704(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v0;
    s32 phi_v1;

    temp_v0 = arg2->unk2FC;
    phi_v1 = 0;
    if ((temp_v0 & 0x40) == 0) {
        if ((temp_v0 & 0x10) != 0) {
            phi_v0 = 1;
            phi_v1 = 1;
        } else {
            phi_v0 = 1;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 9) {
        func_8013AD9C((s16) (arg2->unk312 + arg2->unk316 + 0x4000), (s16) (arg2->unk314 + arg2->unk318 + arg2->shape.rot.y + 0x4000), arg2 + 0x1E8, arg2 + 0x200, phi_v0, phi_v1);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk1E8, arg2->unk1EC, arg2->unk1F0, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk202, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk200, 1);
        SysMatrix_InsertZRotation_s(arg2->unk204, 1);
        SysMatrix_StatePush();
    }
}

void EnTab_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnTab *this = (EnTab *) thisx;
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    GraphicsContext *temp_a0;

    if (this->unk1D8 != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp38 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp38->polyOpa.p;
        sp38->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp30 = temp_v0;
        sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80BE1B24 + (this->unk31E * 4)));
        func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BE1648, func_80BE16B4, func_80BE1704, &this->actor);
    }
}

