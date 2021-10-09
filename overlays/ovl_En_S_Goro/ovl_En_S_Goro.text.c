s16 func_80BBCA80(GlobalContext *arg0, GlobalContext *arg1); /* static */
u16 func_80BBD348(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BBD8F0(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BBD93C(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80BBD98C(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BBDACC(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BBDC34(GlobalContext *arg0, GlobalContext *arg1); /* static */
s32 func_80BBDCFC(GlobalContext *arg0, GlobalContext *); /* static */
void func_80BBDDF8(Actor *arg0);                    /* static */
void func_80BBDE78(Actor *arg0);                    /* static */
void func_80BBDF28(Actor *arg0);                    /* static */
void func_80BBDFA8(EnSGoro *arg0, GlobalContext *arg1); /* static */
void func_80BBE05C(EnSGoro *arg0);                  /* static */
void func_80BBE0E4(EnSGoro *arg0);                  /* static */
? func_80BBE144(Actor *arg0, Actor *arg1);          /* static */
? func_80BBE374(Actor *arg0, Actor *arg1);          /* static */
void func_80BBE498(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBE73C(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80BBE844(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80BBE904(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80BBE9F8(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80BBEAD8(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80BBEBF8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBECBC(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBEEB4(GlobalContext *arg0, GlobalContext *arg1); /* static */
void func_80BBEF34(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBEFA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBF01C(Actor *arg0, GlobalContext *arg1); /* static */
? func_80BBF298(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5); /* static */
s32 func_80BBF3D0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *rot, Actor *actor); /* static */
void func_80BBF3EC(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
void func_80BBF5F0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BBF6BC(void *arg0, GraphicsContext **arg1); /* static */
extern ? D_060091A8;
extern FlexSkeletonHeader D_06011AC8;
extern AnimationHeader D_06012DE0;
static ColliderCylinderInit D_80BBF820 = {
    {1, 0, 9, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 1, 1, 1},
    {0, 0, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BBF84C = {0, 0, 0, 0, 0xFF};
static DamageTable D_80BBF858 = {
    {
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
        1,
    },
};
static ActorAnimationEntryS D_80BBF878 = {
    {(AnimationHeader *)0x6011D98, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6011D98, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6012DE0, 2.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6012DE0, 2.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6012DE0, -2.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6003E28, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003E28, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6004DD4, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x600283C, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6007764, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6005790, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6003650, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6002C48, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6013DB0, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x60143AC, 1.0f, 0, 0xFFFF, 2, 0xFFFC},
    {(AnimationHeader *)0x6014CE0, 1.0f, 0, 0xFFFF, 0, 0xFFF8},
};
static ? D_80BBF978;                                /* unable to generate initializer */

typedef struct EnSGoro {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char pad144[0x4];
    /* 0x0148 */ SkelAnime unk148;                  /* inferred */
    /* 0x018C */ void (*actionFunc)(EnSGoro *, GlobalContext *);
    /* 0x0190 */ ColliderCylinder unk190;           /* inferred */
    /* 0x01DC */ u16 unk1DC;                        /* inferred */
    /* 0x01DE */ char pad1DE[0xE];                  /* maybe part of unk1DC[8]? */
    /* 0x01EC */ s16 unk1EC;                        /* inferred */
    /* 0x01EE */ s16 unk1EE;                        /* inferred */
    /* 0x01F0 */ char pad1F0[0x4];                  /* maybe part of unk1EE[3]? */
    /* 0x01F4 */ s32 unk1F4;                        /* inferred */
    /* 0x01F8 */ Vec3s unk1F8;                      /* inferred */
    /* 0x01FE */ char pad1FE[0x66];                 /* maybe part of unk1F8[18]? */
    /* 0x0264 */ Vec3s unk264;                      /* inferred */
    /* 0x026A */ char pad26A[0x9E];
    /* 0x0308 */ s32 unk308;                        /* inferred */
    /* 0x030C */ char pad30C[0x4];                  /* maybe part of unk308[2]? */
} EnSGoro;                                          /* size 0x310 */

typedef struct GameAllocNode {
    /* 0x0000 */ GameAllocNode *next;
    /* 0x0004 */ GameAllocNode *prev;
    /* 0x0008 */ u32 size;
    /* 0x000C */ char padC[0x2];
    /* 0x000E */ s16 unkE;                          /* inferred */
} GameAllocNode;                                    /* size 0x10 */

typedef struct GameState {
    /* 0x0000 */ GraphicsContext *gfxCtx;
    /* 0x0004 */ void (*main)(GameState *);
    /* 0x0008 */ void (*destroy)(GameState *);
    /* 0x000C */ void (*nextGameStateInit)(GameState *);
    /* 0x0010 */ u32 nextGameStateSize;
    /* 0x0014 */ Input input[4];
    /* 0x0074 */ TwoHeadArena heap;
    /* 0x0084 */ GameAlloc alloc;
    /* 0x0098 */ f32 unk98;                         /* inferred */
    /* 0x009B */ u8 running;                        /* overlap */
    /* 0x009C */ u32 frames;
    /* 0x00A0 */ char padA0[0x2];
    /* 0x00A2 */ u8 framerateDivisor;
    /* 0x00A3 */ char padA3[0x1];                   /* maybe part of framerateDivisor[2]? */
} GameState;                                        /* size 0xA4 */

s16 func_80BBCA80(GlobalContext *arg0, GlobalContext *arg1) {
    void *sp1C;
    s16 temp_v0;
    s32 temp_a1;
    u16 temp_v0_2;
    u16 temp_v0_3;
    u16 temp_v0_4;
    u16 temp_v0_5;
    u16 temp_v0_6;
    u16 temp_v0_7;
    u16 temp_v0_8;
    u16 temp_v0_9;
    u32 temp_t7;
    u8 temp_v1_10;
    u8 temp_v1_11;
    u8 temp_v1_2;
    u8 temp_v1_3;
    u8 temp_v1_4;
    u8 temp_v1_5;
    u8 temp_v1_6;
    u8 temp_v1_7;
    u8 temp_v1_8;
    u8 temp_v1_9;
    void *temp_v1;

    temp_v0 = arg0->unk1C;
    temp_t7 = temp_v0 & 0xF;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    switch (temp_t7) {
    case 0:
        temp_a1 = (s32) (temp_v0 & 0x7F0) >> 4;
        if ((gSaveContext.weekEventReg[22] & 4) == 0) {
            if (temp_v1->unk14B == 1) {
                temp_v1_2 = gSaveContext.weekEventReg[36];
                if ((temp_v1_2 & 2) == 0) {
                    temp_v0_2 = arg0->unk304;
                    if (temp_v0_2 != 0xCFB) {
                        if (temp_v0_2 != 0xCFC) {
                            if (temp_v0_2 != 0xCFD) {
                                return 0xCFB;
                            }
                            gSaveContext.weekEventReg[36] = temp_v1_2 | 2;
                            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                            return 0xCFE;
                        }
                        return 0xCFD;
                    }
                    return 0xCFC;
                }
                arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                return 0xCFE;
            }
            temp_v1_3 = gSaveContext.weekEventReg[36];
            if ((temp_v1_3 & 1) == 0) {
                gSaveContext.weekEventReg[36] = temp_v1_3 | 1;
                return 0xCF9;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xCFA;
        }
        sp1C = temp_v1;
        arg0 = arg0;
        if (Flags_GetSwitch(arg1, temp_a1) == 0) {
            if (temp_v1->unk14B == 1) {
                temp_v1_4 = gSaveContext.weekEventReg[36];
                if ((temp_v1_4 & 8) == 0) {
                    if (arg0->unk304 == 0xD02) {
                        gSaveContext.weekEventReg[36] = temp_v1_4 | 8;
                        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                        return 0xD03;
                    }
                    return 0xD02;
                }
                arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                return 0xD04;
            }
            if ((gSaveContext.weekEventReg[36] & 4) == 0) {
                if (arg0->unk304 == 0xCFF) {
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    gSaveContext.weekEventReg[36] |= 4;
                    return 0xD00;
                }
                return 0xCFF;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xD01;
        }
        temp_v1_5 = gSaveContext.weekEventReg[36];
        if ((temp_v1_5 & 0x10) == 0) {
            if (arg0->unk304 == 0xD05) {
                gSaveContext.weekEventReg[36] = temp_v1_5 | 0x10;
                arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                return 0xD06;
            }
            return 0xD05;
        }
        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
        return 0xD07;
    case 1:
        if ((gSaveContext.weekEventReg[22] & 4) == 0) {
            if (temp_v1->unk14B == 1) {
                temp_v1_6 = gSaveContext.weekEventReg[36];
                if ((temp_v1_6 & 0x40) == 0) {
                    temp_v0_3 = arg0->unk304;
                    if (temp_v0_3 != 0xD15) {
                        if (temp_v0_3 != 0xD16) {
                            return 0xD15;
                        }
                        gSaveContext.weekEventReg[36] = temp_v1_6 | 0x40;
                        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                        return 0xD17;
                    }
                    return 0xD16;
                }
                arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                return 0xD17;
            }
            temp_v1_7 = gSaveContext.weekEventReg[36];
            if ((temp_v1_7 & 0x20) == 0) {
                gSaveContext.weekEventReg[36] = temp_v1_7 | 0x20;
                return 0xD13;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xD14;
        }
        if (temp_v1->unk14B == 1) {
            temp_v1_8 = gSaveContext.weekEventReg[37];
            if ((temp_v1_8 & 1) == 0) {
                temp_v0_4 = arg0->unk304;
                if (temp_v0_4 != 0xD1E) {
                    if (temp_v0_4 != 0xD1F) {
                        return 0xD1E;
                    }
                    gSaveContext.weekEventReg[37] = temp_v1_8 | 1;
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0xD20;
                }
                return 0xD1F;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xD21;
        }
        temp_v1_9 = gSaveContext.weekEventReg[36];
        if ((temp_v1_9 & 0x80) == 0) {
            temp_v0_5 = arg0->unk304;
            if (temp_v0_5 != 0xD18) {
                if (temp_v0_5 != 0xD19) {
                    if (temp_v0_5 != 0xD1A) {
                        if (temp_v0_5 != 0xD1B) {
                            return 0xD18;
                        }
                        gSaveContext.weekEventReg[36] = temp_v1_9 | 0x80;
                        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                        return 0xD1C;
                    }
                    return 0xD1B;
                }
                return 0xD1A;
            }
            return 0xD19;
        }
        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
        return 0xD1D;
    case 2:
        if ((gSaveContext.weekEventReg[22] & 4) == 0) {
            if (temp_v1->unk14B == 1) {
                temp_v1_10 = gSaveContext.weekEventReg[37];
                if ((temp_v1_10 & 2) == 0) {
                    temp_v0_6 = arg0->unk304;
                    if (temp_v0_6 != 0xD09) {
                        if (temp_v0_6 != 0xD0A) {
                            if (temp_v0_6 != 0xD0B) {
                                return 0xD09;
                            }
                            gSaveContext.weekEventReg[37] = temp_v1_10 | 2;
                            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                            return 0xD0C;
                        }
                        return 0xD0B;
                    }
                    return 0xD0A;
                }
                arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                return 0xD0D;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xD08;
        }
        if (temp_v1->unk14B == 1) {
            temp_v1_11 = gSaveContext.weekEventReg[37];
            if ((temp_v1_11 & 4) == 0) {
                temp_v0_7 = arg0->unk304;
                if (temp_v0_7 != 0xD0E) {
                    if (temp_v0_7 != 0xD0F) {
                        return 0xD0E;
                    }
                    gSaveContext.weekEventReg[37] = temp_v1_11 | 4;
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0xD10;
                }
                return 0xD0F;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xD11;
        }
        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
        return 0xD12;
    case 3:
        if (temp_v1->unk14B == 1) {
            if ((gSaveContext.weekEventReg[77] & 0x80) != 0) {
                if (arg0->unk304 == 0xDE3) {
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0xDE4;
                }
                return 0xDE3;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDE2;
        }
        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
        return 0xDE1;
    case 4:
        if (temp_v1->unk14B == 1) {
            if ((gSaveContext.weekEventReg[77] & 0x80) != 0) {
                if (arg0->unk304 == 0xDE7) {
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0xDE8;
                }
                return 0xDE7;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDE6;
        }
        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
        return 0xDE5;
    case 5:
        if (temp_v1->unk14B == 1) {
            if ((gSaveContext.weekEventReg[77] & 0x80) != 0) {
                if (arg0->unk304 == 0xDEB) {
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0xDEC;
                }
                return 0xDEB;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDEA;
        }
        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
        return 0xDE9;
    case 6:
        if (temp_v1->unk14B == 1) {
            if ((gSaveContext.weekEventReg[77] & 0x80) != 0) {
                if (arg0->unk304 == 0xDF1) {
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0xDF2;
                }
                return 0xDF1;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDF0;
        }
        temp_v0_8 = arg0->unk304;
        if (temp_v0_8 != 0xDED) {
            if (temp_v0_8 != 0xDEE) {
                return 0xDED;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDEF;
        }
        return 0xDEE;
    case 7:
        if (temp_v1->unk14B == 1) {
            if ((gSaveContext.weekEventReg[77] & 0x80) != 0) {
                if (arg0->unk304 == 0xDF6) {
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0xDF7;
                }
                return 0xDF6;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDF5;
        }
        if (arg0->unk304 == 0xDF3) {
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDF4;
        }
        return 0xDF3;
    case 8:
        if (temp_v1->unk14B == 1) {
            if ((gSaveContext.weekEventReg[77] & 0x80) != 0) {
                temp_v0_9 = arg0->unk304;
                if (temp_v0_9 != 0xDFB) {
                    if (temp_v0_9 != 0xDFC) {
                        return 0xDFB;
                    }
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0xDFD;
                }
                return 0xDFC;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDFA;
        }
        if (arg0->unk304 == 0xDF8) {
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0xDF9;
        }
        return 0xDF8;
    default:
        return 0;
    }
}

u16 func_80BBD348(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t0;
    u16 temp_t2;
    u16 temp_t6;
    u16 temp_t8;
    u16 temp_t8_2;
    u16 temp_v0;
    u16 temp_v1;
    u16 temp_v1_10;
    u16 temp_v1_2;
    u16 temp_v1_3;
    u16 temp_v1_4;
    u16 temp_v1_5;
    u16 temp_v1_6;
    u16 temp_v1_7;
    u16 temp_v1_8;
    u16 temp_v1_9;
    u8 temp_v0_2;

    temp_v0 = arg0->unk304;
    if ((s32) temp_v0 > 0) {
        switch (temp_v0) {
        case 1637:
            arg0->unk1DC = (u16) (arg0->unk1DC & 0xFDFF);
            return 0x666U;
        case 1638:
            temp_t0 = arg0->unk1DC | 0x20;
            arg0->unk1DC = temp_t0;
            arg0->unk1DC = (u16) (temp_t0 | 0x400);
            return 0x667U;
        case 1640:
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x200);
            return 0x669U;
        case 1641:
            arg0->unk1DC = (u16) (arg0->unk1DC & 0xFDFF);
            return 0x66AU;
        case 1642:
            temp_t8 = arg0->unk1DC | 0x20;
            arg0->unk1DC = temp_t8;
            arg0->unk1DC = (u16) (temp_t8 | 0x400);
            return 0x66BU;
        case 1655:
            arg0->unk1DC = (u16) (arg0->unk1DC & 0xFDFF);
            return 0x678U;
        case 1656:
            return 0x670U;
        case 1646:
            arg0->unk1DC = (u16) (arg0->unk1DC & 0xFDFF);
            return 0x66FU;
        case 1647:
            return 0x670U;
        case 1657:
            return 0x670U;
        case 1658:
            return 0x670U;
        case 1662:
            arg0->unk1DC = (u16) (arg0->unk1DC & 0xFDFF);
            return 0x67FU;
        case 1663:
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0x680U;
        case 1659:
            arg0->unk1DC = (u16) (arg0->unk1DC & 0xFDFF);
            return 0x67CU;
        case 1660:
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0x67DU;
        case 1665:
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0x682U;
        case 1667:
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0x684U;
        case 1648:
            if ((arg0->unk1DE & 0x400) != 0) {
                if (gSaveContext.inventory.ammo[gItemSlots[0xC]] != 0) {
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    play_sound(0x4806U);
                    return 0x673U;
                }
                arg0->unk30C = (s16) arg1->msgCtx.unk1206C;
                if ((s32) gSaveContext.rupees < (s32) arg0->unk30C) {
                    temp_t8_2 = arg0->unk1DC | 0x20;
                    arg0->unk1DC = temp_t8_2;
                    arg0->unk1DC = (u16) (temp_t8_2 | 0x400);
                    play_sound(0x4806U);
                    return 0x674U;
                }
                if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    func_8019F208();
                    return 0x676U;
                }
                arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                func_8019F208();
                return 0x675U;
            }
            if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
                arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                return 0x672U;
            }
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
            return 0x671U;
        }
    } else {
        if (temp_v0 == 0) {
            temp_v0_2 = arg1->actorCtx.actorList[2].first->unk14B;
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 3) {
                        if (temp_v0_2 != 4) {
                        case 1636:
                            arg0->unk1DC = (u16) (arg0->unk1DC | 0x200);
                            return 0x665U;
                        }
                        if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
                            temp_v1 = arg0->unk1DE;
                            if ((temp_v1 & 0x10) == 0) {
                                arg0->unk1DE = (u16) (temp_v1 | 0x10);
                                return 0x668U;
                            }
                            arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                            return 0x66DU;
                        }
                        temp_v1_2 = arg0->unk1DE;
                        if ((temp_v1_2 & 1) == 0) {
                            arg0->unk1DE = (u16) (temp_v1_2 | 1);
                            return 0x664U;
                        }
                        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                        return 0x66CU;
                    }
                    if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
                        temp_v1_3 = arg0->unk1DE;
                        if ((temp_v1_3 & 0x40) == 0) {
                            arg0->unk1DE = (u16) (temp_v1_3 | 0x40);
                            return 0x668U;
                        }
                        arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                        return 0x66DU;
                    }
                    temp_v1_4 = arg0->unk1DE;
                    if ((temp_v1_4 & 4) == 0) {
                        arg0->unk1DE = (u16) (temp_v1_4 | 4);
                        return 0x664U;
                    }
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x20);
                    return 0x66CU;
                }
                if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
                    temp_v1_5 = arg0->unk1DE;
                    if ((temp_v1_5 & 0x80) == 0) {
                        arg0->unk1DE = (u16) (temp_v1_5 | 0x80);
                        return 0x668U;
                    }
                    temp_t6 = arg0->unk1DC | 0x20;
                    arg0->unk1DC = temp_t6;
                    arg0->unk1DC = (u16) (temp_t6 | 0x400);
                    return 0x66DU;
                }
                temp_v1_6 = arg0->unk1DE;
                if ((temp_v1_6 & 8) == 0) {
                    arg0->unk1DE = (u16) (temp_v1_6 | 8);
                    return 0x664U;
                }
                temp_t2 = arg0->unk1DC | 0x20;
                arg0->unk1DC = temp_t2;
                arg0->unk1DC = (u16) (temp_t2 | 0x400);
                return 0x66CU;
            }
            if (gSaveContext.inventory.items[gItemSlots[0xC]] == 0xC) {
                if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
                    temp_v1_7 = arg0->unk1DE;
                    if ((temp_v1_7 & 0x20) == 0) {
                        arg0->unk1DE = (u16) (temp_v1_7 | 0x20);
                        arg0->unk1DC = (u16) (arg0->unk1DC | 0x200);
                        return 0x677U;
                    }
                    return 0x67AU;
                }
                temp_v1_8 = arg0->unk1DE;
                if ((temp_v1_8 & 2) == 0) {
                    arg0->unk1DE = (u16) (temp_v1_8 | 2);
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x200);
                    return 0x66EU;
                }
                return 0x679U;
            }
            if ((gSaveContext.day == 3) && (gSaveContext.isNight != 0)) {
                temp_v1_9 = arg0->unk1DE;
                if ((temp_v1_9 & 0x200) == 0) {
                    arg0->unk1DE = (u16) (temp_v1_9 | 0x200);
                    arg0->unk1DC = (u16) (arg0->unk1DC | 0x200);
                    return 0x67EU;
                }
                return 0x683U;
            }
            temp_v1_10 = arg0->unk1DE;
            if ((temp_v1_10 & 0x100) == 0) {
                arg0->unk1DE = (u16) (temp_v1_10 | 0x100);
                arg0->unk1DC = (u16) (arg0->unk1DC | 0x200);
                return 0x67BU;
            }
            return 0x681U;
        }
    default:
        return 0U;
    }
}

s32 func_80BBD8F0(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    temp_v0 = func_ActorCategoryIterateById(arg1, arg0->unk144, 4, 0x213);
    arg0->unk144 = temp_v0;
    if (temp_v0 != 0) {
        return 1;
    }
    return 0;
}

s32 func_80BBD93C(GlobalContext *arg0, GlobalContext *arg1) {
    Actor *temp_v0;

    arg0->view.projection.m[2][3] = NULL;
    temp_v0 = func_ActorCategoryIterateById(arg1, NULL, 4, 0x201);
    arg0->view.projection.m[2][3] = temp_v0;
    if (temp_v0 != 0) {
        return 1;
    }
    return 0;
}

void func_80BBD98C(Actor *arg0, GlobalContext *arg1) {
    s16 sp26;
    f32 temp_f12;
    f32 temp_f2;
    u16 temp_t7;
    u16 temp_v0;
    u16 phi_v0;

    sp26 = (s16) (s32) arg0->unk160;
    arg0->unk306 = (s16) (arg0->unk306 + 0x400);
    temp_v0 = arg0->unk1DC;
    temp_f2 = Math_SinS(arg0->unk306) * 0.01f * 0.1f;
    temp_f12 = 0.01f - temp_f2;
    arg0->unk2D0 = temp_f2;
    arg0->scale.y = temp_f12;
    arg0->scale.z = temp_f12;
    arg0->scale.x = temp_f2 + 0.01f;
    phi_v0 = temp_v0;
    if ((temp_v0 & 0x800) == 0) {
        if (arg0->unk306 == 0) {
            if ((temp_v0 & 0x80) != 0) {
                arg0->unk1DC = (u16) (temp_v0 & 0xFF7F);
                Audio_PlayActorSound2(arg0, 0x3A1BU);
                phi_v0 = arg0->unk1DC;
            } else {
                arg0->unk1DC = (u16) (temp_v0 | 0x80);
                Audio_PlayActorSound2(arg0, 0x3A1AU);
                phi_v0 = arg0->unk1DC;
            }
        }
    } else {
        temp_t7 = temp_v0 & 0xF7FF;
        if ((gSaveContext.weekEventReg[22] & 4) != 0) {
            arg0->unk1DC = temp_t7;
            phi_v0 = temp_t7 & 0xFFFF;
        }
    }
    if (((phi_v0 & 1) == 0) && (sp26 == 0)) {
        arg0->unk1DC = (u16) (phi_v0 | 1);
        arg0->shape.yOffset = 14.0f;
    }
    arg0->shape.yOffset = (arg0->scale.y / 0.01f) * 14.0f;
}

s32 func_80BBDACC(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a3;
    s32 temp_t1;
    s32 temp_t1_2;
    s32 temp_v0;
    s32 temp_v0_2;
    s32 temp_v0_3;

    temp_v0 = arg0->unk308;
    if (temp_v0 == 0xF) {
        if (((arg0->unk144->unk3CC & 1) != 0) && (arg0 = arg0, temp_v0_2 = Object_GetIndex(arg1 + 0x17D88, 0x1D8), temp_t1 = temp_v0_2 * 0x10, arg0->unk1F4 = temp_v0_2, (temp_v0_2 >= 0))) {
            *(gSegments + 0x18) = (arg1 + ((temp_t1 + temp_v0_2) * 4))->unk17D98 + 0x80000000;
            arg0->unk308 = 0xC;
            func_8013BC6C(arg0 + 0x148, &D_80BBF878, 0xC);
            return 1;
        }
        goto block_8;
    }
    if ((temp_v0 == 0xC) && ((arg0->unk144->unk3CC & 1) == 0) && (arg0 = arg0, temp_v0_3 = Object_GetIndex(arg1 + 0x17D88, 0xA1), temp_a3 = arg0, temp_t1_2 = temp_v0_3 * 0x10, temp_a3->unk1F4 = temp_v0_3, (temp_v0_3 >= 0))) {
        *(gSegments + 0x18) = (arg1 + ((temp_t1_2 + temp_v0_3) * 4))->unk17D98 + 0x80000000;
        temp_a3->unk308 = 0xF;
        arg0 = temp_a3;
        func_8013BC6C(temp_a3 + 0x148, &D_80BBF878, 0xF);
        arg0->unk160 = (f32) arg0->unk158;
        return 1;
    }
block_8:
    return 0;
}

s32 func_80BBDC34(GlobalContext *arg0, GlobalContext *arg1) {
    SkelAnime *temp_a0;
    s32 temp_v0;

    if ((arg1->actorCtx.actorList[2].first->unk14B == 1) && (arg1->msgCtx.unk1202A == 3) && (temp_a0 = arg0 + 0x148, (arg1->msgCtx.unk1202E == 1))) {
        arg0->mainCamera.posOffset.y = 6e-45.0f;
        arg0 = arg0;
        func_8013BC6C(temp_a0, &D_80BBF878, 4);
        temp_v0 = arg0->unk1C & 0xF;
        arg0->unk306 = (s16) (0x400 << (temp_v0 + 1));
        if ((temp_v0 % 2) == 0) {
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x80);
        }
        arg0->view.viewing.m[3][1] = func_80BBEFA0;
        return 1;
    }
    return 0;
}

s32 func_80BBDCFC(GlobalContext *arg0) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a3;
    s32 *temp_a0_2;
    s32 temp_v1;
    u16 temp_v0;

    temp_a3 = arg0;
    temp_a0 = temp_a3;
    arg0 = temp_a3;
    if (func_80BBD93C(temp_a0, temp_a3) == 0) {
        goto block_8;
    }
    temp_v0 = arg0->unk1DC;
    if (((temp_v0 & 0x40) == 0) && ((temp_a0_2 = arg0->view.projection.m[3], ((arg0->view.projection.m[2][3]->unk1E4 & 0x80) != 0)) || ((gSaveContext.weekEventReg[22] & 4) != 0))) {
        arg0->unk1DC = (u16) (temp_v0 | 0x40);
        arg0->mainCamera.posOffset.y = 6e-45.0f;
        arg0 = arg0;
        func_8013BC6C((SkelAnime *) temp_a0_2, &D_80BBF878, 4);
        temp_v1 = arg0->unk1C & 0xF;
        arg0->unk306 = (s16) (0x400 << (temp_v1 + 1));
        if ((temp_v1 % 2) == 0) {
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x80);
        }
        arg0->view.viewing.m[3][1] = (s32) func_80BBEFA0;
        arg0->unk1DC = (u16) (arg0->unk1DC | 0x800);
        return 1;
    }
block_8:
    return 0;
}

void func_80BBDDF8(Actor *arg0) {
    s16 sp1E;
    s32 temp_t8;

    sp1E = (s16) (s32) arg0->unk160;
    temp_t8 = arg0->unk308;
    arg0 = arg0;
    if ((arg0->unk308 != 0xD) && (sp1E == SkelAnime_GetFrameCount(&(&D_80BBF878)[temp_t8].animationSeg->common))) {
        arg0->unk308 = 0xD;
        func_8013BC6C(arg0 + 0x148, &D_80BBF878, 0xD);
    }
}

void func_80BBDE78(Actor *arg0) {
    s16 sp1E;
    AnimationHeader *temp_a0;
    s16 temp_v0;
    s32 temp_v1;

    temp_a0 = (&D_80BBF878)[arg0->unk308].animationSeg;
    temp_v1 = (s32) arg0->unk160;
    arg0 = arg0;
    sp1E = (s16) temp_v1;
    temp_v0 = SkelAnime_GetFrameCount(&temp_a0->common);
    if (arg0->unk308 != 0xE) {
        if ((s16) temp_v1 == temp_v0) {
            arg0->unk308 = 0xE;
            func_8013BC6C(arg0 + 0x148, &D_80BBF878, 0xE);
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    if ((s16) temp_v1 == temp_v0) {
        arg0->unk308 = 0xF;
        arg0->unk1DC = (u16) (arg0->unk1DC & 0xFBFF);
        func_8013BC6C(arg0 + 0x148, &D_80BBF878, 0xF);
    }
}

void func_80BBDF28(Actor *arg0) {
    s16 sp1E;
    s32 temp_t8;

    sp1E = (s16) (s32) arg0->unk160;
    temp_t8 = arg0->unk308;
    arg0 = arg0;
    if ((arg0->unk308 != 0xF) && (sp1E == SkelAnime_GetFrameCount(&(&D_80BBF878)[temp_t8].animationSeg->common))) {
        arg0->unk308 = 0xF;
        func_8013BC6C(arg0 + 0x148, &D_80BBF878, 0xF);
    }
}

void func_80BBDFA8(EnSGoro *arg0, GlobalContext *arg1) {
    f32 sp24;

    sp24.unk0 = arg0->actor.world.pos.x;
    sp24.unk4 = (s32) arg0->actor.world.pos.y;
    sp24.unk8 = (s32) arg0->actor.world.pos.z;
    arg0->unk190.dim.pos.x = (s16) (s32) sp24;
    arg0->unk190.dim.pos.y = (s16) (s32) sp28;
    arg0->unk190.dim.radius = (s16) (s32) 24.0f;
    arg0->unk190.dim.height = (s16) (s32) 62.0f;
    arg0->unk190.dim.pos.z = (s16) (s32) sp2C;
    if (arg0 != -0x190) {
        CollisionCheck_SetOC(arg1, arg1 + 0x18884, arg0 + 0x190);
    }
}

void func_80BBE05C(EnSGoro *arg0) {
    s16 temp_v0;
    s16 phi_v1;

    if ((arg0->unk1DC & 4) != 0) {
        temp_v0 = arg0->unk1EE;
        if (temp_v0 == 0) {
            phi_v1 = 0;
        } else {
            arg0->unk1EE = temp_v0 - 1;
            phi_v1 = arg0->unk1EE;
        }
        if (phi_v1 == 0) {
            arg0->unk1EC += 1;
            if ((s32) arg0->unk1EC >= 3) {
                arg0 = arg0;
                arg0->unk1EE = Rand_S16Offset(0x1E, 0x1E);
                arg0->unk1EC = 0;
            }
        }
    }
}

void func_80BBE0E4(EnSGoro *arg0) {
    f32 phi_f0;

    if ((arg0->unk1DC & 1) != 0) {
        phi_f0 = arg0->actor.shape.yOffset;
    } else {
        phi_f0 = 58.0f;
    }
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y + phi_f0;
    arg0->actor.focus.pos.x = arg0->actor.world.pos.x;
    arg0->actor.focus.pos.z = arg0->actor.world.pos.z;
    arg0->actor.focus.rot.x = arg0->actor.world.rot.x;
    arg0->actor.focus.rot.y = arg0->actor.world.rot.y;
    arg0->actor.focus.rot.z = arg0->actor.world.rot.z;
}

? func_80BBE144(Actor *arg0, Actor *arg1) {
    void *sp4C;
    f32 sp44;
    Vec3f sp40;
    f32 sp38;
    Vec3f sp34;
    s16 temp_v1;
    s16 temp_v1_2;
    s16 temp_v1_3;
    s16 temp_v1_4;
    s16 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;
    s16 phi_v0_4;

    sp4C = arg1->unk1CCC;
    Math_SmoothStepToS(arg0 + 0x2D6, (s16) ((arg0->yawTowardsPlayer - arg0->unk2DA) - arg0->shape.rot.y), 4, 0x2AA8, (s16) 1);
    temp_v1 = arg0->unk2D6;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk2D6 = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk2D6 = phi_v0;
    }
    Math_SmoothStepToS(arg0 + 0x2DA, (s16) ((arg0->yawTowardsPlayer - arg0->unk2D6) - arg0->shape.rot.y), 4, 0x2AA8, (s16) 1);
    temp_v1_2 = arg0->unk2DA;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk2DA = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk2DA = phi_v0_2;
    }
    sp40.x = sp4C->unk24;
    sp40.y = sp4C->unk28;
    sp40.z = sp4C->unk2C;
    sp44 = sp4C->unkC44 + 3.0f;
    sp34.x = arg0->world.pos.x;
    sp34.y = arg0->world.pos.y;
    sp34.z = arg0->world.pos.z;
    sp38 += 70.0f;
    Math_SmoothStepToS(arg0 + 0x2D4, (s16) (Math_Vec3f_Pitch(&sp34, &sp40) - arg0->unk2D8), 4, 0x2AA8, (s16) 1);
    temp_v1_3 = arg0->unk2D4;
    if ((s32) temp_v1_3 < -0x1C70) {
        arg0->unk2D4 = -0x1C70;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1C71) {
            phi_v0_3 = 0x1C70;
        }
        arg0->unk2D4 = phi_v0_3;
    }
    Math_SmoothStepToS(arg0 + 0x2D8, (s16) (Math_Vec3f_Pitch(&sp34, &sp40) - arg0->unk2D4), 4, 0x2AA8, (s16) 1);
    temp_v1_4 = arg0->unk2D8;
    if ((s32) temp_v1_4 < -0x1C70) {
        arg0->unk2D8 = -0x1C70;
    } else {
        phi_v0_4 = temp_v1_4;
        if ((s32) temp_v1_4 >= 0x1C71) {
            phi_v0_4 = 0x1C70;
        }
        arg0->unk2D8 = phi_v0_4;
    }
    return 1;
}

? func_80BBE374(Actor *arg0, Actor *arg1) {
    s16 temp_v0;
    u16 temp_t9;
    u16 temp_v1;
    u16 temp_v1_2;
    s16 phi_v1;
    u16 phi_v1_2;

    temp_v0 = arg0->unk1F0;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk1F0 = (s16) (temp_v0 - 1);
        phi_v1 = arg0->unk1F0;
    }
    if (phi_v1 != 0) {
        temp_v1 = arg0->unk1DC;
        phi_v1_2 = temp_v1;
        if ((temp_v1 & 8) != 0) {
            temp_t9 = temp_v1 & 0xFFFB;
            if ((temp_v1 & 4) != 0) {
                arg0->unk1DC = temp_t9;
                arg0->unk1EC = 3;
                phi_v1_2 = temp_t9 & 0xFFFF;
            }
        }
        arg0->unk1DC = (u16) (phi_v1_2 & 0xFFFD);
        arg0->unk2D4 = 0;
        arg0->unk2D6 = 0;
        arg0->unk2D8 = 0;
        arg0->unk2DA = 0;
        return 1;
    }
    temp_v1_2 = arg0->unk1DC;
    if ((temp_v1_2 & 0x10) != 0) {
        arg0->unk1DC = (u16) (temp_v1_2 | 2);
        func_80BBE144(arg1, arg1);
    } else if (((temp_v1_2 & 8) == 0) && (arg1 = arg1, (Actor_IsActorFacingLinkAndWithinRange(arg0, 120.0f, 0x3FFC) != 0))) {
        arg0->unk1DC = (u16) (arg0->unk1DC | 2);
        func_80BBE144(arg0, arg1);
    } else {
        if ((arg0->unk1DC & 2) != 0) {
            arg0->unk1F0 = 0x14;
        }
        arg0->unk1DC = (u16) (arg0->unk1DC & 0xFFFD);
        arg0->unk2D4 = 0;
        arg0->unk2D6 = 0;
        arg0->unk2D8 = 0;
        arg0->unk2DA = 0;
    }
    return 1;
}

void func_80BBE498(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a3;
    u32 temp_t3;
    u32 temp_t5;
    u32 temp_t8;

    temp_a3 = arg1;
    arg1 = temp_a3;
    if (Object_IsLoaded(temp_a3 + 0x17D88, arg0->unk1F4) != 0) {
        arg0->unk1DC = 0U;
        if ((arg0->params & 0xF) < 3) {
            if ((gSaveContext.weekEventReg[22] & 4) != 0) {
                arg0->unk1DC = 0x40U;
                arg0->unk1DC = (u16) (0x40U | 4);
                arg0->unk308 = 5;
                arg1 = arg1;
                func_8013BC6C(arg0 + 0x148, &D_80BBF878, 5);
            } else {
                arg0->unk1EC = 3;
                arg0->unk308 = 0xB;
                arg0->unk1DC = (u16) (arg0->unk1DC | 8);
                arg1 = arg1;
                func_8013BC6C(arg0 + 0x148, &D_80BBF878, 0xB);
            }
        } else {
            arg0->unk308 = 0xF;
            arg0->unk1DC = (u16) (arg0->unk1DC | 4);
            arg1 = arg1;
            func_8013BC6C(arg0 + 0x148, &D_80BBF878, 0xF);
        }
        arg0->unk2D0 = 0.01f;
        arg1 = arg1;
        Actor_SetScale(arg0, 0.01f);
        temp_t3 = arg0->flags | 0x10;
        temp_t5 = temp_t3 | 0x2000000;
        temp_t8 = arg0->params & 0xF;
        arg0->flags = temp_t3;
        arg0->flags = temp_t5;
        arg0->targetMode = 1;
        arg0->gravity = -1.0f;
        switch (temp_t8) {
        case 0:
            arg0->unk18C = func_80BBE73C;
            return;
        case 1:
            arg0->unk18C = func_80BBE73C;
            return;
        case 2:
            arg0->unk18C = func_80BBE73C;
            return;
        case 3:
            if (func_80BBD8F0(arg0, arg1) != 0) {
                arg0->unk18C = func_80BBE904;
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        case 4:
            if (func_80BBD8F0(arg0, arg1) != 0) {
                arg0->unk18C = func_80BBE904;
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        case 5:
            if (func_80BBD8F0(arg0, arg1) != 0) {
                arg0->unk18C = func_80BBE904;
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        case 6:
            if (func_80BBD8F0(arg0, arg1) != 0) {
                arg0->unk18C = func_80BBE904;
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        case 7:
            if (func_80BBD8F0(arg0, arg1) != 0) {
                arg0->unk18C = func_80BBE904;
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        case 8:
            if (func_80BBD8F0(arg0, arg1) != 0) {
                arg0->unk18C = func_80BBE904;
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        case 9:
            arg0->unk1DC = (u16) (arg0->unk1DC | 1);
            arg0->unk18C = func_80BBEAD8;
            arg0->shape.yOffset = 14.0f;
            return;
        default:
            Actor_MarkForDeath(arg0);
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
    }
}

void func_80BBE73C(GlobalContext *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    s32 temp_v0;
    u16 temp_t7;

    if ((func_80BBDC34(arg0, arg1) == 0) && (func_80BBDCFC(arg0, arg1) == 0)) {
        if (func_800B84D0((Actor *) arg0, arg1) != 0) {
            temp_t7 = arg0->unk1DC | 0x10;
            temp_v0 = temp_t7 & 0xFFFF;
            arg0->unk1DC = temp_t7;
            if ((temp_v0 & 8) != 0) {
                arg0->unk1DC = (u16) (temp_v0 | 4);
                arg0->unk1EC = 0;
            }
            temp_v0_2 = func_80BBCA80(arg0, arg1);
            arg0->unk304 = temp_v0_2;
            func_801518B0(arg1, temp_v0_2 & 0xFFFF, (Actor *) arg0);
            arg0->view.viewing.m[3][1] = (s32) func_80BBE844;
        } else if ((arg0->state.unk98 < 250.0f) || (arg0->unk114 != 0)) {
            func_800B863C((Actor *) arg0, arg1);
        }
        Math_SmoothStepToS(arg0 + 0xBE, arg0->unk16, 5, 0x1000, (s16) 0x100);
        arg0->state.input[1].prev.button = (u16) arg0->unkBE;
    }
}

void func_80BBE844(GlobalContext *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    u16 temp_t8;
    u16 temp_v0;

    if ((func_80152498(arg1 + 0x4908) == 6) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg0->unk1DC;
        temp_t8 = temp_v0 & 0xFFDF;
        if ((temp_v0 & 0x20) != 0) {
            arg0->unk1DC = temp_t8;
            arg0->unk1DC = (u16) (temp_t8 & 0xFFEF);
            arg0->view.viewing.m[3][1] = func_80BBE73C;
            return;
        }
        temp_v0_2 = func_80BBCA80(arg0, arg1);
        arg0->unk304 = temp_v0_2;
        func_801518B0(arg1, temp_v0_2 & 0xFFFF, (Actor *) arg0);
        goto block_5;
    }
block_5:
    Math_SmoothStepToS(arg0 + 0xBE, arg0->state.alloc.base.unkE, 5, 0x1000, (s16) 0x100);
    arg0->state.input[1].prev.button = (u16) arg0->unkBE;
}

void func_80BBE904(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    if (((arg0->params & 0xF) == 8) || (func_80BBDACC(arg0, arg1) == 0)) {
        if (func_800B84D0(arg0, arg1) != 0) {
            arg0->unk1DC = (u16) (arg0->unk1DC | 0x10);
            temp_v0 = func_80BBCA80((GlobalContext *) arg0, arg1);
            arg0->unk304 = temp_v0;
            func_801518B0(arg1, temp_v0 & 0xFFFF, arg0);
            arg0->unk18C = func_80BBE9F8;
        } else if ((arg0->xzDistToPlayer < 250.0f) || (arg0->isTargeted != 0)) {
            func_800B863C(arg0, arg1);
        }
        Math_SmoothStepToS(&arg0->shape.rot.y, arg0->home.rot.y, 5, 0x1000, (s16) 0x100);
        arg0->world.rot.y = arg0->shape.rot.y;
    }
}

void func_80BBE9F8(GlobalContext *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    u16 temp_t8;
    u16 temp_v0;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        temp_v0 = arg0->unk1DC;
        temp_t8 = temp_v0 & 0xFFDF;
        if ((temp_v0 & 0x20) != 0) {
            arg0->unk1DC = temp_t8;
            arg0->unk1DC = (u16) (temp_t8 & 0xFFEF);
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->view.viewing.m[3][1] = func_80BBE904;
            return;
        }
        temp_v0_2 = func_80BBCA80(arg0, arg1);
        arg0->unk304 = temp_v0_2;
        func_801518B0(arg1, temp_v0_2 & 0xFFFF, (Actor *) arg0);
        goto block_5;
    }
block_5:
    Math_SmoothStepToS(arg0 + 0xBE, arg0->state.alloc.base.unkE, 5, 0x1000, (s16) 0x100);
    arg0->state.input[1].prev.button = (u16) arg0->unkBE;
}

void func_80BBEAD8(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v1;

    if ((arg0->unk1DC & 1) == 0) {
        func_80BBDF28(arg0);
    }
    if (func_800B84D0(arg0, arg1) != 0) {
        arg0->unk1DC = (u16) (arg0->unk1DC | 0x10);
        temp_v1 = arg0->unk1DC;
        arg0->unk304 = func_80BBD348(arg0, arg1);
        if ((temp_v1 & 1) != 0) {
            arg0->unk1DC = (u16) (temp_v1 & 0xFFFE);
            arg0->unk308 = 2;
            func_8013BC6C(arg0 + 0x148, &D_80BBF878, 2);
            arg0->unk18C = func_80BBEBF8;
        } else {
            func_801518B0(arg1, arg0->unk304, arg0);
            arg0->unk18C = func_80BBECBC;
        }
    } else if ((arg0->xzDistToPlayer < 250.0f) || (arg0->isTargeted != 0)) {
        func_800B863C(arg0, arg1);
    }
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->home.rot.y, 5, 0x1000, (s16) 0x100);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80BBEBF8(Actor *arg0, GlobalContext *arg1) {
    s16 sp2E;

    sp2E = (s16) (s32) arg0->unk160;
    if ((arg0->unk308 == 2) && (sp2E == SkelAnime_GetFrameCount(&(&D_80BBF878)[arg0->unk308].animationSeg->common))) {
        arg0->unk308 = 0xF;
        func_8013BC6C(arg0 + 0x148, &D_80BBF878, 0xF);
        func_801518B0(arg1, arg0->unk304, arg0);
        arg0->unk18C = func_80BBECBC;
    }
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80BBECBC(Actor *arg0, GlobalContext *arg1) {
    u8 sp2F;
    u16 temp_a1;
    u16 temp_t0;
    u16 temp_v0;
    u16 temp_v0_3;
    u16 temp_v1;
    u16 temp_v1_2;
    u8 temp_v0_2;

    sp2F = func_80152498(arg1 + 0x4908);
    temp_v1 = arg0->unk1DC;
    if ((temp_v1 & 0x200) != 0) {
        func_80BBDDF8(arg0);
    } else if ((temp_v1 & 0x400) != 0) {
        func_80BBDE78(arg0);
    } else {
        func_80BBDF28(arg0);
    }
    if (sp2F == 6) {
        if (func_80147624(arg1) != 0) {
            temp_v1_2 = arg0->unk1DC;
            temp_t0 = temp_v1_2 & 0xFFDF;
            if ((temp_v1_2 & 0x20) != 0) {
                arg0->unk1DC = temp_t0;
                arg0->unk1DC = (u16) (temp_t0 & 0xFFEF);
                arg0->unk304 = 0U;
                arg0->unk18C = func_80BBEAD8;
                return;
            }
            temp_v0 = func_80BBD348(arg0, arg1);
            arg0->unk304 = temp_v0;
            func_801518B0(arg1, temp_v0 & 0xFFFF, arg0);
            goto block_21;
        }
        goto block_21;
    }
    if ((sp2F == 4) && (func_80147624(arg1) != 0)) {
        temp_v0_2 = arg1->msgCtx.choiceIndex;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {

            } else {
                func_8019F230();
                arg0->unk1DE = (u16) (arg0->unk1DE & 0xFBFF);
            }
        } else {
            arg0->unk1DE = (u16) (arg0->unk1DE | 0x400);
        }
        temp_v0_3 = func_80BBD348(arg0, arg1);
        temp_a1 = temp_v0_3 & 0xFFFF;
        arg0->unk304 = temp_v0_3;
        if ((temp_a1 == 0x675) || (temp_a1 == 0x676)) {
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            func_800B8A1C(arg0, arg1, 0x34, 300.0f, 300.0f);
            arg0->unk18C = func_80BBEEB4;
        } else {
            func_801518B0(arg1, temp_a1, arg0);
        }
    }
block_21:
    Math_SmoothStepToS(&arg0->shape.rot.y, arg0->yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
    arg0->world.rot.y = arg0->shape.rot.y;
}

void func_80BBEEB4(Actor *arg0, GlobalContext *arg1) {
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        func_801159EC((s16) ((s32) arg0->unk30C * -1));
        arg0->unk18C = func_80BBEF34;
        return;
    }
    func_800B8A1C(arg0, arg1, 0x34, 300.0f, 300.0f);
}

void func_80BBEF34(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        func_801518B0(arg1, arg0->unk304, arg0);
        arg0->unk18C = func_80BBECBC;
        return;
    }
    func_800B85E0(arg0, arg1, 400.0f, -1);
}

void func_80BBEFA0(Actor *arg0, GlobalContext *arg1) {
    if (func_800B84D0(arg0, arg1) != 0) {
        func_801518B0(arg1, 0x23AU, arg0);
        arg0->unk18C = func_80BBF01C;
    } else if (arg0->isTargeted != 0) {
        func_800B863C(arg0, arg1);
    }
    func_80BBD98C(arg0, arg1);
}

void func_80BBF01C(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;

    if (func_80152498(arg1 + 0x4908) == 6) {
        temp_a0 = arg1;
        arg1 = arg1;
        if (func_80147624(temp_a0) != 0) {
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk18C = func_80BBEFA0;
        }
    }
    func_80BBD98C(arg0, arg1);
}

void EnSGoro_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnSGoro *this = (EnSGoro *) thisx;
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    s32 temp_v0;

    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_InitSV(globalCtx, &this->unk148, &D_06011AC8, &D_06012DE0, &this->unk1F8, &this->unk264, 0x12);
    temp_a1 = &this->unk190;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80BBF820);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80BBF858, &D_80BBF84C);
    if (this->actor.update != 0) {
        temp_v0 = Object_GetIndex(&globalCtx->objectCtx, 0xA1);
        this->unk1F4 = temp_v0;
        if (temp_v0 < 0) {
            Actor_MarkForDeath(&this->actor);
        }
    }
    this->actor.draw = EnSGoro_Draw;
    this->actionFunc = (void (*)(EnSGoro *, GlobalContext *)) func_80BBE498;
}

void EnSGoro_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnSGoro *this = (EnSGoro *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk190);
}

void EnSGoro_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnSGoro *this = (EnSGoro *) thisx;
    this->actionFunc(this, globalCtx);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 12.0f, 0.0f, 5U);
    *(gSegments + 0x18) = (u32) (globalCtx->objectCtx.status[this->unk1F4].segment + 0x80000000);
    SkelAnime_FrameUpdateMatrix(&this->unk148);
    if (this->unk308 != 0xE) {
        func_80BBE374(&this->actor, (Actor *) globalCtx);
    }
    func_80BBE05C(this);
    func_80BBE0E4(this);
    func_80BBDFA8(this, globalCtx);
}

? func_80BBF298(s16 arg0, s16 arg1, void *arg2, s16 *arg3, s32 arg4, s32 arg5) {
    Vec3f sp7C;
    Vec3f sp70;
    Vec3s sp68;
    MtxF sp28;

    sp70.x = D_801D15B0.x;
    sp70.y = D_801D15B0.y;
    sp70.z = D_801D15B0.z;
    SysMatrix_MultiplyVector3fByState(&sp70, &sp7C);
    SysMatrix_CopyCurrentState(&sp28);
    func_8018219C(&sp28, &sp68, 0);
    arg2->unk0 = (f32) sp7C.x;
    arg2->unk4 = (f32) sp7C.y;
    arg2->unk8 = (f32) sp7C.z;
    if ((arg4 == 0) && (arg5 == 0)) {
        arg3->unk0 = sp68.x;
        arg3->unk2 = sp68.y;
        arg3->unk4 = sp68.z;
        return 1;
    }
    if (arg5 != 0) {
        sp68.z = arg0;
        sp68.y = arg1;
    }
    Math_SmoothStepToS(arg3, sp68.x, 3, 0x2AA8, (s16) 0xB6);
    Math_SmoothStepToS(arg3 + 2, sp68.y, 3, 0x2AA8, (s16) 0xB6);
    Math_SmoothStepToS(arg3 + 4, sp68.z, 3, 0x2AA8, (s16) 0xB6);
    return 1;
}

s32 func_80BBF3D0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3) {
    return 0;
}

void func_80BBF3EC(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;
    s32 phi_v1_2;

    if (arg1 != 0xA) {
        if ((arg1 == 0x11) && (arg2->unk308 != 0xE)) {
            phi_v1 = 0;
            if ((arg2->unk1DC & 2) != 0) {
                phi_v1 = 1;
            }
            phi_v0 = 0;
            if (arg2->unk1F0 != 0) {
                phi_v0 = 1;
            }
            func_80BBF298((s16) (arg2->unk2D4 + arg2->unk2D8 + 0x4000), (s16) (arg2->unk2D6 + arg2->unk2DA + arg2->shape.rot.y + 0x4000), arg2 + 0x2DC, arg2 + 0x2E8, phi_v0, phi_v1);
            SysMatrix_StatePop();
            SysMatrix_InsertTranslation(arg2->unk2DC, arg2->unk2E0, arg2->unk2E4, 0);
            Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
            Matrix_RotateY(arg2->unk2EA, 1U);
            SysMatrix_InsertXRotation_s(arg2->unk2E8, 1);
            SysMatrix_InsertZRotation_s(arg2->unk2EC, 1);
            SysMatrix_StatePush();
            return;
        }
        // Duplicate return node #14. Try simplifying control flow for better match
        return;
    }
    if (arg2->unk308 != 0xE) {
        phi_v1_2 = 0;
        if ((arg2->unk1DC & 2) != 0) {
            phi_v1_2 = 1;
        }
        phi_v0_2 = 0;
        if (arg2->unk1F0 != 0) {
            phi_v0_2 = 1;
        }
        func_80BBF298((s16) (arg2->unk2D8 + 0x4000), (s16) (arg2->unk2DA + arg2->shape.rot.y + 0x4000), arg2 + 0x2F0, arg2 + 0x2FC, phi_v0_2, phi_v1_2);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk2F0, arg2->unk2F4, arg2->unk2F8, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk2FE, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk2FC, 1);
        SysMatrix_InsertZRotation_s(arg2->unk300, 1);
        SysMatrix_StatePush();
    }
}

void func_80BBF5F0(Actor *arg0, GlobalContext *arg1) {
    GraphicsContext *sp38;
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    temp_a0 = arg1->state.gfxCtx;
    sp38 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDB060020;
    sp38 = sp38;
    sp30 = temp_v0;
    sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_80BBF978 + (arg0->unk1EC * 4)));
    temp_v0_2 = sp38->polyOpa.p;
    sp38->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w1 = 0;
    temp_v0_2->words.w0 = 0xE7000000;
    func_801343C0(arg1, arg0->unk14C, arg0->unk168, (s32) arg0->unk14A, func_80BBF3D0, NULL, func_80BBF3EC, arg0);
}

void func_80BBF6BC(void *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    temp_a0 = *arg1;
    temp_s1 = temp_a0;
    func_8012C28C(temp_a0);
    SysMatrix_InsertTranslation(arg0->unk24, arg0->unk28 + arg0->unkC4, arg0->unk2C, 0);
    Matrix_RotateY(arg0->unkBE, 1U);
    SysMatrix_InsertTranslation(0.0f, -arg0->unkC4, 0.0f, 1);
    SysMatrix_InsertZRotation_s(arg0->unkC0, 1);
    SysMatrix_InsertTranslation(0.0f, arg0->unkC4, 0.0f, 1);
    Matrix_Scale(arg0->unk58, arg0->unk5C, arg0->unk60, 1);
    temp_v0 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(*arg1);
    temp_v0_2 = temp_s1->polyOpa.p;
    temp_s1->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_060091A8;
}

void EnSGoro_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnSGoro *this = (EnSGoro *) thisx;
    if ((this->unk1DC & 1) != 0) {
        func_80BBF6BC();
        return;
    }
    func_80BBF5F0();
}

