void func_80AD0830(EnOsn *arg0, GlobalContext *arg1); /* static */
u16 func_80AD08B0(GlobalContext *arg0, Actor *, u16); /* static */
void func_80AD0998(Actor *arg0);                    /* static */
void func_80AD0A24(Actor *arg0);                    /* static */
void func_80AD0AB0(Actor *arg0);                    /* static */
s16 func_80AD0B38(Actor *arg0, GlobalContext *arg1, SaveContext *, Actor *); /* static */
s16 func_80AD0E10(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD10FC(Actor *arg0, GlobalContext *arg1, Actor *); /* static */
void func_80AD1398(EnOsn *arg0, GlobalContext *);   /* static */
void func_80AD144C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD14C8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD1634(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD16A8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD19A0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80AD1A4C(EnOsn *arg0, GlobalContext *arg1); /* static */
s32 func_80AD1DA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void func_80AD1E28(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, s32 **arg5); /* static */
extern ? D_060192A0;
extern AnimationHeader D_060201BC;
extern FlexSkeletonHeader D_060202F0;
static ActorAnimationEntry D_80AD22C0 = {
    {(AnimationHeader *)0x60201BC, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6002F74, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60037C4, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6004320, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6004C8C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60094E4, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6009BB8, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600AC60, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6001614, 1.0f, 1.0f, 39.0f, 0, 0.0f},
    {(AnimationHeader *)0x6001034, 1.0f, 1.0f, 70.0f, 0, 0.0f},
    {(AnimationHeader *)0x600AE9C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6003A1C, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60055F8, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6007220, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600A444, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x60000C4, 0.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x60000C4, 0.0f, 1.0f, 1.0f, 2, 0.0f},
    {(AnimationHeader *)0x6006D48, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6001D6C, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6002634, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6008D80, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6005D78, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x6006564, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600A444, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x6008D80, 0.0f, 77.0f, 0.0f, 2, 0.0f},
};
static ColliderCylinderInit D_80AD2518 = {
    {0xA, 0, 0, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x1E, 0x28, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80AD2544 = {0, 0, 0, 0, 0xFF};
static DamageTable D_80AD2550 = {
    {
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
        0,
        0,
        0,
        0,
    },
};
static InitChainEntry D_80AD2570;                   /* unable to generate initializer */
static ? D_80AD2574;                                /* unable to generate initializer */
static ? D_80AD2580;                                /* unable to generate initializer */
static void *D_80AD2588 = (void *)0x60166F8;
static void *D_80AD258C = (void *)0x6016EF8;
static void *D_80AD2590 = (void *)0x60176F8;
static void *D_80AD2594 = (void *)0x6017EF8;
static void *D_80AD2598 = (void *)0x60182F8;

typedef struct EnOsn {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ SkelAnime unk190;                  /* inferred */
    /* 0x01D4 */ void (*actionFunc)(EnOsn *, GlobalContext *);
    /* 0x01D8 */ Vec3s unk1D8;                      /* inferred */
    /* 0x01DE */ Vec3s unk1DE;                      /* inferred */
    /* 0x01E4 */ char pad1E4[0x6];                  /* maybe part of unk1DE[2]? */
    /* 0x01EA */ u16 unk1EA;                        /* inferred */
    /* 0x01EC */ u8 unk1EC;                         /* inferred */
    /* 0x01ED */ char pad1ED[0x1];                  /* maybe part of unk1EC[2]? */
    /* 0x01EE */ s16 unk1EE;                        /* inferred */
    /* 0x01F0 */ s8 unk1F0;                         /* inferred */
    /* 0x01F1 */ char pad1F1[0xB];                  /* maybe part of unk1F0[12]? */
    /* 0x01FC */ u8 unk1FC;                         /* inferred */
    /* 0x01FD */ char pad1FD[0x3];                  /* maybe part of unk1FC[4]? */
} EnOsn;                                            /* size 0x200 */

void func_80AD0830(EnOsn *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp1C;
    Collider *sp18;
    Collider *temp_a2;
    CollisionCheckContext *temp_a1;

    temp_a2 = arg0 + 0x144;
    arg0->unk144.dim.pos.x = (s16) (s32) arg0->actor.world.pos.x;
    arg0->unk144.dim.pos.y = (s16) (s32) arg0->actor.world.pos.y;
    arg0->unk144.dim.pos.z = (s16) (s32) arg0->actor.world.pos.z;
    sp18 = temp_a2;
    temp_a1 = arg1 + 0x18884;
    sp1C = temp_a1;
    CollisionCheck_SetAC(arg1, temp_a1, temp_a2);
    CollisionCheck_SetOC(arg1, temp_a1, temp_a2);
}

u16 func_80AD08B0(GlobalContext *arg0) {
    u8 temp_v0;
    u16 phi_v0;

    temp_v0 = Player_GetMask(arg0);
    phi_v0 = 0U;
    switch (temp_v0) {
    case 11:
        return 0x1FD6U;
    case 12:
        return 0x1FD8U;
    case 1:
        return 0x1FDAU;
    case 20:
        return 0x1FDCU;
    case 2:
        return 0x1FDEU;
    case 13:
        return 0x1FE0U;
    case 18:
        return 0x1FE2U;
    case 10:
        return 0x1FE4U;
    case 19:
        return 0x1FE6U;
    case 14:
        return 0x1FE8U;
    case 16:
        return 0x1FEAU;
    case 9:
        return 0x1FECU;
    case 4:
        return 0x1FEEU;
    case 15:
        return 0x1FF0U;
    case 17:
        return 0x1FF2U;
    case 8:
        return 0x1FF4U;
    case 5:
        return 0x1FF6U;
    case 6:
        return 0x1FF8U;
    case 3:
        return 0x1FFAU;
    case 7:
        phi_v0 = 0x1FFCU;
        // fallthrough
    default:
        return phi_v0;
    }
}

void func_80AD0998(Actor *arg0) {
    s16 sp1E;
    u8 temp_t8;

    sp1E = (s16) (s32) arg0->unk1A8;
    temp_t8 = arg0->unk1EC;
    arg0 = arg0;
    if ((arg0->unk1EC == 0x12) && (sp1E == SkelAnime_GetFrameCount(*(&D_80AD22C0 + (temp_t8 * 0x18))))) {
        arg0->unk1EC = 0x13U;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80AD22C0, 0x13);
    }
}

void func_80AD0A24(Actor *arg0) {
    s16 sp1E;
    u8 temp_t8;

    sp1E = (s16) (s32) arg0->unk1A8;
    temp_t8 = arg0->unk1EC;
    arg0 = arg0;
    if ((arg0->unk1EC == 0x15) && (sp1E == SkelAnime_GetFrameCount(&(&D_80AD22C0)[temp_t8].animation->common))) {
        arg0->unk1EC = 0x16U;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80AD22C0, 0x16);
    }
}

void func_80AD0AB0(Actor *arg0) {
    s16 sp1E;
    u8 temp_t2;
    u8 temp_t8;

    sp1E = (s16) (s32) arg0->unk1A8;
    temp_t8 = arg0->unk1EC;
    arg0 = arg0;
    if (sp1E == SkelAnime_GetFrameCount(&(&D_80AD22C0)[temp_t8].animation->common)) {
        temp_t2 = arg0->unk1FC - 8;
        arg0->unk1FC = temp_t2;
        if ((temp_t2 & 0xFF) < 8) {
            arg0->unk1FC = 0U;
            Actor_MarkForDeath(arg0);
        }
    }
}

s16 func_80AD0B38(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    s32 temp_v1_10;
    s32 temp_v1_11;
    s32 temp_v1_12;
    s32 temp_v1_13;
    s32 temp_v1_14;
    s32 temp_v1_15;
    s32 temp_v1_16;
    s32 temp_v1_17;
    s32 temp_v1_18;
    s32 temp_v1_19;
    s32 temp_v1_20;
    s32 temp_v1_2;
    s32 temp_v1_3;
    s32 temp_v1_4;
    s32 temp_v1_5;
    s32 temp_v1_6;
    s32 temp_v1_7;
    s32 temp_v1_8;
    s32 temp_v1_9;
    u16 temp_v0_2;
    u8 temp_v0;

    arg0 = arg0;
    temp_v0 = Player_GetMask(arg1);
    switch (temp_v0) {
    case 11:
        temp_v1 = arg0->unk1F8;
        if ((temp_v1 & 1) == 0) {
            arg0->unk1F8 = (s32) (temp_v1 | 1);
            return 0x1FD1;
        }
    default:
block_42:
        arg0->unk1EA = (u16) (arg0->unk1EA | 0x20);
        if ((gSaveContext.day == 3) && (temp_v0_2 = gSaveContext.time, (((s32) temp_v0_2 < 0x3555) == 0)) && ((s32) temp_v0_2 < 0x4000)) {
            return 0x2006;
        }
        return 0x1FCD;
    case 12:
        temp_v1_2 = arg0->unk1F8;
        if ((temp_v1_2 & 2) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_2 | 2);
            return 0x1FD1;
        }
        goto block_42;
    case 1:
        temp_v1_3 = arg0->unk1F8;
        if ((temp_v1_3 & 4) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_3 | 4);
            return 0x1FD1;
        }
        goto block_42;
    case 20:
        temp_v1_4 = arg0->unk1F8;
        if ((temp_v1_4 & 8) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_4 | 8);
            return 0x1FD1;
        }
        goto block_42;
    case 2:
        temp_v1_5 = arg0->unk1F8;
        if ((temp_v1_5 & 0x10) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_5 | 0x10);
            return 0x1FD1;
        }
        goto block_42;
    case 13:
        temp_v1_6 = arg0->unk1F8;
        if ((temp_v1_6 & 0x20) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_6 | 0x20);
            return 0x1FD1;
        }
        goto block_42;
    case 18:
        temp_v1_7 = arg0->unk1F8;
        if ((temp_v1_7 & 0x40) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_7 | 0x40);
            return 0x1FD1;
        }
        goto block_42;
    case 10:
        temp_v1_8 = arg0->unk1F8;
        if ((temp_v1_8 & 0x80) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_8 | 0x80);
            return 0x1FD1;
        }
        goto block_42;
    case 19:
        temp_v1_9 = arg0->unk1F8;
        if ((temp_v1_9 & 0x100) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_9 | 0x100);
            return 0x1FD1;
        }
        goto block_42;
    case 14:
        temp_v1_10 = arg0->unk1F8;
        if ((temp_v1_10 & 0x200) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_10 | 0x200);
            return 0x1FD1;
        }
        goto block_42;
    case 16:
        temp_v1_11 = arg0->unk1F8;
        if ((temp_v1_11 & 0x400) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_11 | 0x400);
            return 0x1FD1;
        }
        goto block_42;
    case 9:
        temp_v1_12 = arg0->unk1F8;
        if ((temp_v1_12 & 0x800) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_12 | 0x800);
            return 0x1FD2;
        }
        goto block_42;
    case 4:
        temp_v1_13 = arg0->unk1F8;
        if ((temp_v1_13 & 0x1000) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_13 | 0x1000);
            return 0x1FD2;
        }
        goto block_42;
    case 15:
        temp_v1_14 = arg0->unk1F8;
        if ((temp_v1_14 & 0x2000) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_14 | 0x2000);
            return 0x1FD1;
        }
        goto block_42;
    case 17:
        temp_v1_15 = arg0->unk1F8;
        if ((temp_v1_15 & 0x4000) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_15 | 0x4000);
            return 0x1FD1;
        }
        goto block_42;
    case 8:
        temp_v1_16 = arg0->unk1F8;
        if ((temp_v1_16 & 0x8000) == 0) {
            arg0->unk1F8 = (s32) (temp_v1_16 | 0x8000);
            return 0x1FD1;
        }
        goto block_42;
    case 5:
        temp_v1_17 = arg0->unk1F8;
        if ((temp_v1_17 << 0xF) >= 0) {
            arg0->unk1F8 = (s32) (temp_v1_17 | 0x10000);
            return 0x1FD1;
        }
        goto block_42;
    case 6:
        temp_v1_18 = arg0->unk1F8;
        if ((temp_v1_18 << 0xE) >= 0) {
            arg0->unk1F8 = (s32) (temp_v1_18 | 0x20000);
            return 0x1FD1;
        }
        goto block_42;
    case 3:
        temp_v1_19 = arg0->unk1F8;
        if ((temp_v1_19 << 0xD) >= 0) {
            arg0->unk1F8 = (s32) (temp_v1_19 | 0x40000);
            return 0x1FD1;
        }
        goto block_42;
    case 7:
        temp_v1_20 = arg0->unk1F8;
        if ((temp_v1_20 << 0xC) >= 0) {
            arg0->unk1F8 = (s32) (temp_v1_20 | 0x80000);
            return 0x1FD1;
        }
        goto block_42;
    }
}

s16 func_80AD0E10(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v0;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v1;
    u16 temp_v1_2;
    u8 temp_a0;
    u8 temp_a0_2;
    u8 temp_v0_2;

    if ((gSaveContext.inventory.items[0] != 0xFF) && ((*(gBitFlags + 0x34) & gSaveContext.inventory.questItems) != 0)) {
        temp_v1 = arg0->unk1EA;
        if ((temp_v1 & 1) != 0) {
            arg0->unk1EA = (u16) (temp_v1 | 0x20);
            if ((gSaveContext.inventory.items[0] != 0xFF) && (gSaveContext.inventory.items[gItemSlots[0x32]] == 0x32)) {
                if ((gSaveContext.day == 3) && (temp_v0 = gSaveContext.time, (((s32) temp_v0 < 0x3555) == 0)) && ((s32) temp_v0 < 0x4000)) {
                    return 0x2006;
                }
                return 0x1FCD;
            }
            return 0x1FAF;
        }
        temp_v0_2 = arg1->actorCtx.actorList[2].first->unk14B;
        if (temp_v0_2 == 3) {
            if ((temp_v1 & 4) != 0) {
                arg0->unk1EA = (u16) (temp_v1 | 0x20);
                if ((gSaveContext.day == 3) && (temp_v0_3 = gSaveContext.time, (((s32) temp_v0_3 < 0x3555) == 0)) && ((s32) temp_v0_3 < 0x4000)) {
                    return 0x2006;
                }
                return 0x1FCD;
            }
            arg0->unk1EA = (u16) (temp_v1 | 4);
            return 0x1FC8;
        }
        if (temp_v0_2 == 1) {
            if ((temp_v1 & 8) != 0) {
                arg0->unk1EA = (u16) (temp_v1 | 0x20);
                if ((gSaveContext.day == 3) && (temp_v0_4 = gSaveContext.time, (((s32) temp_v0_4 < 0x3555) == 0)) && ((s32) temp_v0_4 < 0x4000)) {
                    return 0x2006;
                }
                return 0x1FCD;
            }
            arg0->unk1EA = (u16) (temp_v1 | 8);
            temp_a0 = gSaveContext.weekEventReg[76];
            if ((temp_a0 & 0x20) != 0) {
                return 0x1FC8;
            }
            gSaveContext.weekEventReg[76] = temp_a0 | 0x20;
            return 0x1FCE;
        }
        if (temp_v0_2 == 2) {
            if ((temp_v1 & 0x10) != 0) {
                arg0->unk1EA = (u16) (temp_v1 | 0x20);
                if ((gSaveContext.day == 3) && (temp_v0_5 = gSaveContext.time, (((s32) temp_v0_5 < 0x3555) == 0)) && ((s32) temp_v0_5 < 0x4000)) {
                    return 0x2006;
                }
                return 0x1FCD;
            }
            arg0->unk1EA = (u16) (temp_v1 | 0x10);
            temp_a0_2 = gSaveContext.weekEventReg[76];
            if ((temp_a0_2 & 0x40) != 0) {
                return 0x1FC8;
            }
            gSaveContext.weekEventReg[76] = temp_a0_2 | 0x40;
            return 0x1FD0;
        }
        arg0 = arg0;
        if (Player_GetMask(arg1) == 0) {
            temp_v1_2 = arg0->unk1EA;
            if ((temp_v1_2 & 2) != 0) {
                arg0->unk1EA = (u16) (temp_v1_2 | 0x20);
                if ((gSaveContext.day == 3) && (temp_v0_6 = gSaveContext.time, (((s32) temp_v0_6 < 0x3555) == 0)) && ((s32) temp_v0_6 < 0x4000)) {
                    return 0x2006;
                }
                return 0x1FCD;
            }
            arg0->unk1EA = (u16) (temp_v1_2 | 2);
            return 0x1FC8;
        }
        return func_80AD0B38(arg0, arg1, &gSaveContext, arg0);
    }
    arg0->unk1EA = (u16) (arg0->unk1EA | 0x20);
    if ((gSaveContext.day == 3) && (temp_v0_7 = gSaveContext.time, (((s32) temp_v0_7 < 0x3555) == 0)) && ((s32) temp_v0_7 < 0x4000)) {
        return 0x2004;
    }
    return 0x1FAE;
}

void func_80AD10FC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a2;
    u16 temp_a3;
    u16 temp_a3_2;
    u16 temp_v0;
    u16 temp_v0_2;
    u16 phi_a3;
    Actor *phi_a2;
    s16 phi_t0;

    temp_a2 = arg0;
    temp_a3 = temp_a2->unk1F4;
    phi_a3 = temp_a3;
    phi_a2 = temp_a2;
    switch (temp_a3) {
    case 8136:
        temp_a2->unk1F4 = 0x1FC9U;
        phi_a3 = 0x1FC9U & 0xFFFF;
        break;
    case 8137:
        temp_a2->unk1F4 = 0x1FCAU;
        phi_a3 = 0x1FCAU & 0xFFFF;
        break;
    case 8138:
        if ((gSaveContext.day == 3) && (temp_v0 = gSaveContext.time, (((s32) temp_v0 < 0x3555) == 0)) && ((s32) temp_v0 < 0x4000)) {
            temp_a2->unk1F4 = 0x2007U;
        } else {
            temp_a2->unk1F4 = 0x1FCBU;
        }
        phi_a3 = temp_a2->unk1F4;
        break;
    case 8139:
    case 8199:
        temp_a2->unk1F4 = 0x1FCCU;
        temp_a2->unk1EA = (u16) (temp_a2->unk1EA | 0x20);
        phi_a3 = 0x1FCCU & 0xFFFF;
        break;
    case 8142:
    case 8144:
        temp_a2->unk1F4 = 0x1FCFU;
        phi_a3 = 0x1FCFU & 0xFFFF;
        break;
    case 8143:
        temp_a2->unk1F4 = 0x1FCAU;
        phi_a3 = 0x1FCAU & 0xFFFF;
        break;
    case 8145:
    case 8146:
        arg0 = temp_a2;
        temp_v0_2 = func_80AD08B0(arg1, temp_a2, temp_a3);
        temp_a3_2 = temp_v0_2 & 0xFFFF;
        arg0->unk1F4 = temp_v0_2;
        phi_a3 = temp_a3_2;
        phi_a2 = arg0;
        break;
    case 8150:
        temp_a2->unk1F4 = 0x1FD7;
        phi_a3 = 0x1FD7 & 0xFFFF;
        break;
    case 8152:
        temp_a2->unk1F4 = 0x1FD9;
        phi_a3 = 0x1FD9 & 0xFFFF;
        break;
    case 8154:
        temp_a2->unk1F4 = 0x1FDB;
        phi_a3 = 0x1FDB & 0xFFFF;
        break;
    case 8156:
        temp_a2->unk1F4 = 0x1FDD;
        phi_t0 = 0x1FDD;
block_38:
        phi_a3 = phi_t0 & 0xFFFF;
        break;
    case 8158:
        temp_a2->unk1F4 = 0x1FDF;
        phi_a3 = 0x1FDF & 0xFFFF;
        break;
    case 8160:
        temp_a2->unk1F4 = 0x1FE1;
        phi_a3 = 0x1FE1 & 0xFFFF;
        break;
    case 8162:
        temp_a2->unk1F4 = 0x1FE3;
        phi_a3 = 0x1FE3 & 0xFFFF;
        break;
    case 8164:
        temp_a2->unk1F4 = 0x1FE5;
        phi_a3 = 0x1FE5 & 0xFFFF;
        break;
    case 8166:
        temp_a2->unk1F4 = 0x1FE7;
        phi_a3 = 0x1FE7 & 0xFFFF;
        break;
    case 8168:
        temp_a2->unk1F4 = 0x1FE9;
        phi_a3 = 0x1FE9 & 0xFFFF;
        break;
    case 8170:
        temp_a2->unk1F4 = 0x1FEB;
        phi_a3 = 0x1FEB & 0xFFFF;
        break;
    case 8172:
        temp_a2->unk1F4 = 0x1FED;
        phi_a3 = 0x1FED & 0xFFFF;
        break;
    case 8174:
        temp_a2->unk1F4 = 0x1FEF;
        phi_a3 = 0x1FEF & 0xFFFF;
        break;
    case 8176:
        temp_a2->unk1F4 = 0x1FF1;
        phi_t0 = 0x1FF1;
        goto block_38;
    case 8178:
        temp_a2->unk1F4 = 0x1FF3;
        phi_a3 = 0x1FF3 & 0xFFFF;
        break;
    case 8180:
        temp_a2->unk1F4 = 0x1FF5;
        phi_a3 = 0x1FF5 & 0xFFFF;
        break;
    case 8182:
        temp_a2->unk1F4 = 0x1FF7;
        phi_a3 = 0x1FF7 & 0xFFFF;
        break;
    case 8184:
        temp_a2->unk1F4 = 0x1FF9;
        phi_a3 = 0x1FF9 & 0xFFFF;
        break;
    case 8186:
        temp_a2->unk1F4 = 0x1FFB;
        phi_a3 = 0x1FFB & 0xFFFF;
        break;
    case 8188:
        temp_a2->unk1F4 = 0x1FFD;
        phi_a3 = 0x1FFD & 0xFFFF;
        break;
    case 8151:
    case 8155:
    case 8157:
    case 8159:
    case 8161:
    case 8167:
    case 8177:
    case 8179:
    case 8183:
    case 8185:
    case 8187:
        temp_a2->unk1F4 = 0x1FD3;
        phi_a3 = 0x1FD3 & 0xFFFF;
        break;
    case 8153:
    case 8163:
    case 8169:
    case 8171:
    case 8173:
    case 8175:
    case 8181:
    case 8189:
        temp_a2->unk1F4 = 0x1FD4;
        phi_a3 = 0x1FD4 & 0xFFFF;
        break;
    case 8165:
        temp_a2->unk1F4 = 0x1FFE;
        phi_a3 = 0x1FFE & 0xFFFF;
        break;
    case 8147:
    case 8148:
    case 8190:
        temp_a2->unk1F4 = 0x1FD5;
        temp_a2->unk1EA = (u16) (temp_a2->unk1EA | 0x20);
        phi_t0 = 0x1FD5;
        goto block_38;
    }
    func_801518B0(arg1, phi_a3 & 0xFFFF, phi_a2);
}

void func_80AD1398(EnOsn *arg0) {
    s16 temp_a0;
    s16 temp_a0_2;

    arg0->unk1EE = (s16) arg0->actor.cutscene;
    if (((gSaveContext.inventory.items[0] == 0xFF) || (gSaveContext.inventory.items[gItemSlots[0x32]] == 0x32)) && ((temp_a0 = arg0->unk1EE, arg0 = arg0, arg0->unk1EE = ActorCutscene_GetAdditionalCutscene(temp_a0), (gSaveContext.inventory.items[0] != 0xFF)) || (gSaveContext.inventory.items[gItemSlots[0x32]] == 0x32))) {
        temp_a0_2 = arg0->unk1EE;
        arg0 = arg0;
        arg0->unk1EE = ActorCutscene_GetAdditionalCutscene(temp_a0_2);
    }
}

void func_80AD144C(Actor *arg0, GlobalContext *arg1) {
    u32 sp1C;

    arg0 = arg0;
    sp1C = Flags_GetSwitch(arg1, 0);
    arg0->unk1EE = (s16) arg0->cutscene;
    func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80AD22C0, 0);
    if (sp1C == 0) {
        arg0->unk1D4 = func_80AD16A8;
        return;
    }
    arg0->unk1D4 = func_80AD14C8;
}

void func_80AD14C8(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    s16 temp_v0;
    s16 temp_v1;

    temp_v1 = arg0->yawTowardsPlayer - arg0->shape.rot.y;
    if ((gSaveContext.inventory.items[0] != 0xFF) && ((*(gBitFlags + 0x34) & gSaveContext.inventory.questItems) == 0)) {
        sp26 = temp_v1;
        if (func_800B84D0(arg0, arg1) != 0) {
            arg0->unk1D4 = func_80AD1634;
            return;
        }
        if (((arg0->xzDistToPlayer < 100.0f) || (arg0->isTargeted != 0)) && ((s32) temp_v1 < 0x4000) && ((s32) temp_v1 >= -0x3FFF)) {
            func_800B863C(arg0, arg1);
            arg0->textId = 0xFFFF;
            return;
        }
        // Duplicate return node #16. Try simplifying control flow for better match
        return;
    }
    sp26 = temp_v1;
    if (func_800B84D0(arg0, arg1) != 0) {
        temp_v0 = func_80AD0E10(arg0, arg1);
        arg0->unk1F4 = temp_v0;
        func_801518B0(arg1, temp_v0 & 0xFFFF, arg0);
        arg0->unk1D4 = func_80AD19A0;
        return;
    }
    if (((arg0->xzDistToPlayer < 100.0f) || (arg0->isTargeted != 0)) && ((s32) temp_v1 < 0x4000) && ((s32) temp_v1 >= -0x3FFF)) {
        func_800B863C(arg0, arg1);
    }
}

void func_80AD1634(Actor *arg0, GlobalContext *arg1) {
    if (ActorCutscene_GetCanPlayNext(arg0->unk1EE) != 0) {
        ActorCutscene_Start(arg0->unk1EE, arg0);
        arg0->unk1D4 = func_80AD16A8;
        return;
    }
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
    }
    ActorCutscene_SetIntentToPlay(arg0->unk1EE);
}

void func_80AD16A8(Actor *arg0, GlobalContext *arg1) {
    u32 sp28;
    SkelAnime *sp24;
    SkelAnime *temp_a0_2;
    u16 temp_a0;
    u16 temp_t1;
    u32 temp_v0;
    u8 phi_v0;
    u8 phi_v0_2;
    u8 phi_v0_3;

    if (func_800EE29C(arg1, 0x82U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x82U);
        sp28 = temp_v0;
        arg0->unk1F0 = 0;
        temp_a0 = arg1->csCtx.npcActions[temp_v0]->unk0;
        if (arg0->unk1ED != temp_a0) {
            arg0->unk1ED = (u8) temp_a0;
            temp_t1 = arg1->csCtx.npcActions[temp_v0]->unk0;
            switch (temp_t1) {
            case 1:
                arg0->unk1EC = 2U;
                break;
            case 2:
                arg0->unk1EC = 1U;
                break;
            case 3:
                arg0->unk1EC = 7U;
                break;
            case 4:
                arg0->unk1EC = 3U;
                break;
            case 5:
                arg0->unk1EC = 6U;
                break;
            case 6:
                arg0->unk1EC = 5U;
                break;
            case 7:
                arg0->unk1EC = 4U;
                break;
            case 8:
            default:
                arg0->unk1EC = 0U;
                break;
            case 10:
                arg0->unk1EC = 8U;
                break;
            case 11:
                arg0->unk1EC = 9U;
                break;
            case 13:
                arg0->unk1EC = 0xAU;
                break;
            case 15:
                arg0->unk1EC = 0xBU;
                break;
            case 16:
                arg0->unk1EC = 0xCU;
                break;
            case 17:
                arg0->unk1EC = 0xDU;
                break;
            case 18:
                arg0->unk1EC = 0xEU;
                break;
            case 19:
                arg0->unk1EC = 0x11U;
                break;
            case 20:
                arg0->unk1EC = 0x12U;
                break;
            case 21:
                arg0->unk1EC = 0x14U;
                break;
            case 22:
                arg0->unk1EC = 0x15U;
                break;
            case 23:
                arg0->unk1EC = 0x17U;
                break;
            case 24:
                arg0->unk1EC = 0x18U;
                break;
            }
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80AD22C0, (s32) arg0->unk1EC);
        }
        if ((arg0->unk1EC == 5) && (arg1->sceneNum == 8) && (gSaveContext.sceneSetupIndex == 0xB) && (arg1->csCtx.frames == 0x190)) {
            Audio_PlayActorSound2(arg0, 0x697DU);
        }
        phi_v0 = arg0->unk1EC;
        if (arg0->unk1EC == 0x12) {
            func_80AD0998(arg0);
            phi_v0 = arg0->unk1EC;
        }
        phi_v0_2 = phi_v0;
        if (phi_v0 == 0x15) {
            func_80AD0A24(arg0);
            phi_v0_2 = arg0->unk1EC;
        }
        phi_v0_3 = phi_v0_2;
        if (phi_v0_2 == 0x18) {
            func_80AD0AB0(arg0);
            phi_v0_3 = arg0->unk1EC;
        }
        temp_a0_2 = arg0 + 0x190;
        if ((phi_v0_3 == 0x14) && ((sp24 = temp_a0_2, (func_801378B8(temp_a0_2, 17.0f) != 0)) || (func_801378B8(temp_a0_2, 27.0f) != 0) || (func_801378B8(sp24, 37.0f) != 0) || (func_801378B8(sp24, 47.0f) != 0) || (func_801378B8(sp24, 57.0f) != 0) || (func_801378B8(sp24, 67.0f) != 0))) {
            Audio_PlayActorSound2(arg0, 0x29B3U);
        }
        func_800EDF24(arg0, arg1, sp28);
        return;
    }
    arg0->unk1F0 = 1;
    arg0->unk1ED = 0x63U;
    func_80AD144C(arg0, arg1);
}

void func_80AD19A0(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    u16 temp_v0_2;
    u8 temp_v0;

    arg0 = arg0;
    temp_v0 = func_80152498(arg1 + 0x4908);
    if (((temp_v0 == 6) || (temp_v0 == 5)) && (temp_a0 = arg1, arg1 = arg1, arg0 = arg0, (func_80147624(temp_a0) != 0))) {
        temp_v0_2 = arg0->unk1EA;
        if ((temp_v0_2 & 0x20) != 0) {
            arg0->unk1EA = (u16) (temp_v0_2 & 0xFFDF);
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk1D4 = func_80AD14C8;
            return;
        }
        func_80AD10FC(arg0, arg1, arg0);
        // Duplicate return node #6. Try simplifying control flow for better match
    }
}

void func_80AD1A4C(EnOsn *arg0, GlobalContext *arg1) {

}

void EnOsn_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnOsn *this = (EnOsn *) thisx;
    SkelAnime *sp38;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1_2;
    SkelAnime *temp_a1;
    s32 temp_v0;
    u32 temp_v0_2;
    u32 temp_v0_3;

    Actor_ProcessInitChain(&this->actor, &D_80AD2570);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    temp_a1 = &this->unk190;
    sp38 = temp_a1;
    SkelAnime_InitSV(globalCtx, temp_a1, &D_060202F0, &D_060201BC, NULL, NULL, 0);
    temp_a1_2 = &this->unk144;
    sp34 = temp_a1_2;
    Collider_InitCylinder(globalCtx, temp_a1_2);
    Collider_SetCylinder(globalCtx, temp_a1_2, &this->actor, &D_80AD2518);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80AD2550, &D_80AD2544);
    this->unk1FC = 0xFF;
    temp_v0 = this->actor.params & 3;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    Actor_MarkForDeath(&this->actor);
                    return;
                }
                this->actor.flags &= -2;
                this->actionFunc = (void (*)(EnOsn *, GlobalContext *)) func_80AD16A8;
                return;
            }
            this->unk1EC = 0x10;
            func_800BDC5C(sp38, (ActorAnimationEntry []) &D_80AD22C0, 0x10U & 0xFF);
            this->actionFunc = func_80AD1A4C;
            return;
        }
        this->unk1EC = 0xF;
        func_800BDC5C(sp38, (ActorAnimationEntry []) &D_80AD22C0, 0xFU & 0xFF);
        this->actionFunc = func_80AD1A4C;
        return;
    }
    temp_v0_2 = gSaveContext.entranceIndex;
    if ((temp_v0_2 == 0xC020) || (temp_v0_2 == 0xC030) || (temp_v0_2 == 0xC060)) {
        this->unk1EA |= 1;
    }
    this->unk1F0 = 1;
    if (globalCtx->sceneNum == 0x63) {
        temp_v0_3 = gSaveContext.entranceIndex;
        if ((temp_v0_3 == 0xC020) || (temp_v0_3 == 0xC060)) {
            this->actionFunc = (void (*)(EnOsn *, GlobalContext *)) func_80AD16A8;
            return;
        }
        if (temp_v0_3 == 0xC030) {
            func_80AD1398(this, globalCtx);
            this->actionFunc = (void (*)(EnOsn *, GlobalContext *)) func_80AD1634;
            return;
        }
        func_80AD144C(&this->actor, globalCtx);
        return;
    }
    func_80AD144C(&this->actor, globalCtx);
}

void EnOsn_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnOsn *this = (EnOsn *) thisx;
    SkelAnime_Free(&this->unk190, globalCtx);
    Collider_DestroyCylinder(globalCtx, &this->unk144);
}

void EnOsn_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnOsn *this = (EnOsn *) thisx;
    u32 sp34;

    sp34 = Flags_GetSwitch(globalCtx, 0);
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    SkelAnime_FrameUpdateMatrix(&this->unk190);
    if ((this->actor.params & 3) == 0) {
        if (sp34 != 0) {
            this->actor.flags |= 1;
            func_80AD0830(this, globalCtx);
            this->actor.draw = EnOsn_Draw;
        } else {
            this->actor.draw = NULL;
            this->actor.flags &= -2;
        }
    }
    func_800E9250(globalCtx, &this->actor, &this->unk1D8, &this->unk1DE, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
}

s32 func_80AD1DA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    u8 temp_v0;

    if ((arg5->unk1F0 != 0) && (arg1 == 0xB)) {
        SysMatrix_InsertXRotation_s(arg5->unk1DA, 1);
    }
    temp_v0 = arg5->unk1EC;
    if (((temp_v0 == 9) || (temp_v0 == 8)) && (arg1 == 0xA)) {
        *arg2 = NULL;
    }
    return 0;
}

void func_80AD1E28(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, s32 **arg5) {
    Vec3f sp30;
    s16 sp28;
    s32 *sp24;
    s32 *temp_v0_2;
    s32 *temp_v0_3;
    u8 temp_v0;

    sp30.x = D_80AD2574.unk0;
    sp30.y = D_80AD2574.unk4;
    sp30.z = D_80AD2574.unk8;
    sp28.unk0 = (s32) D_80AD2580.unk0;
    sp28.unk4 = (u16) D_80AD2580.unk4;
    if (arg1 == 0xB) {
        arg1 = arg1;
        SysMatrix_MultiplyVector3fByState(&sp30, arg4 + 0x3C);
    }
    temp_v0 = arg4->unk1EC;
    if (((temp_v0 == 0x11) || (temp_v0 == 0x15) || (temp_v0 == 0x16)) && (arg1 == 6)) {
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation(-400.0f, 1100.0f, -200.0f, 1);
        SysMatrix_InsertXRotation_s(sp28, 1);
        Matrix_RotateY(sp2A, 1U);
        SysMatrix_InsertZRotation_s(sp2C, 1);
        temp_v0_2 = *arg5;
        *arg5 = temp_v0_2 + 8;
        *temp_v0_2 = 0xDA380003;
        sp24 = temp_v0_2;
        sp24->unk4 = Matrix_NewMtx(*arg0);
        temp_v0_3 = *arg5;
        *arg5 = temp_v0_3 + 8;
        temp_v0_3->unk4 = &D_060192A0;
        temp_v0_3->unk0 = 0xDE000000;
        SysMatrix_StatePop();
    }
}

void EnOsn_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnOsn *this = (EnOsn *) thisx;
    Gfx *sp54;
    Gfx *sp50;
    Gfx *sp4C;
    Gfx *sp48;
    Gfx *sp44;
    Gfx *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s0;
    u8 temp_v0;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a2;
    if (this->unk1FC == 0xFF) {
        func_8012C28C(temp_a2);
        temp_v0 = this->unk1EC;
        if ((temp_v0 == 0xB) || (temp_v0 == 0xC) || (temp_v0 == 0x17) || (globalCtx->msgCtx.unk11F04 == 0x1FCA)) {
            temp_v0_6 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDB060020;
            sp54 = temp_v0_6;
            sp54->words.w1 = Lib_SegmentedToVirtual(D_80AD258C);
            temp_v0_7 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDB060024;
            sp50 = temp_v0_7;
            sp50->words.w1 = Lib_SegmentedToVirtual(D_80AD2594);
        } else if ((temp_v0 == 7) || (temp_v0 == 3) || (temp_v0 == 0xD)) {
            temp_v0_4 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_4 + 8;
            temp_v0_4->words.w0 = 0xDB060020;
            sp4C = temp_v0_4;
            sp4C->words.w1 = Lib_SegmentedToVirtual(D_80AD2590);
            temp_v0_5 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDB060024;
            sp48 = temp_v0_5;
            sp48->words.w1 = Lib_SegmentedToVirtual(D_80AD2598);
        } else {
            temp_v0_2 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDB060020;
            sp44 = temp_v0_2;
            sp44->words.w1 = Lib_SegmentedToVirtual(D_80AD2588);
            temp_v0_3 = temp_s0->polyOpa.p;
            temp_s0->polyOpa.p = temp_v0_3 + 8;
            temp_v0_3->words.w0 = 0xDB060024;
            sp40 = temp_v0_3;
            sp40->words.w1 = Lib_SegmentedToVirtual(D_80AD2594);
        }
        temp_v0_8 = temp_s0->polyOpa.p;
        temp_s0->polyOpa.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = -1;
        temp_v0_8->words.w0 = 0xFB000000;
        Scene_SetRenderModeXlu(globalCtx, 0, 1U);
        temp_s0->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80AD1DA8, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80AD1E28, &this->actor, temp_s0->polyOpa.p);
        return;
    }
    func_8012C2DC(temp_a2);
    temp_v0_9 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_9 + 8;
    temp_v0_9->words.w0 = 0xDB060020;
    sp38 = temp_v0_9;
    sp38->words.w1 = Lib_SegmentedToVirtual(D_80AD2588);
    temp_v0_10 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_10 + 8;
    temp_v0_10->words.w0 = 0xDB060024;
    sp34 = temp_v0_10;
    sp34->words.w1 = Lib_SegmentedToVirtual(D_80AD2594);
    temp_v0_11 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = temp_v0_11 + 8;
    temp_v0_11->words.w0 = 0xFB000000;
    temp_v0_11->words.w1 = this->unk1FC | ~0xFF;
    Scene_SetRenderModeXlu(globalCtx, 1, 2U);
    temp_s0->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80AD1DA8, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80AD1E28, &this->actor, temp_s0->polyXlu.p);
}

