? func_8013AD9C(s16, s16, void *, void *, s32, s32); /* extern */
Actor *func_80BD2A30(EnAh *arg0, GlobalContext *arg1, s16 arg2, s16 arg3); /* static */
void func_80BD2AE0(EnAh *arg0);                     /* static */
s32 func_80BD2B0C(EnAh *arg0, s32 arg1);            /* static */
void func_80BD2BA4(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80BD2BE8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BD2C6C(EnAh *arg0);                     /* static */
void *func_80BD2DA0(void *arg0, void *arg1);        /* static */
void func_80BD2DC8(EnAh *arg0);                     /* static */
void func_80BD2FD0(EnAh *arg0, GlobalContext *);    /* static */
? func_80BD30C0(void *arg0, ? arg1);                /* static */
void func_80BD3118(EnAh *arg0, GlobalContext *arg1); /* static */
? func_80BD3198(EnAh *arg0, GlobalContext *arg1);   /* static */
s32 *func_80BD3294(EnAh *arg0, GlobalContext *arg1); /* static */
s32 func_80BD3320(EnAh *arg0, s32 arg2, s16 arg3);  /* static */
s32 func_80BD3374(EnAh *arg0, ? arg1, ? arg2);      /* static */
s32 func_80BD33FC(EnAh *arg0, ? arg1, ? arg2);      /* static */
s32 func_80BD3484(EnAh *arg0, ? arg2);              /* static */
s32 func_80BD3548(EnAh *arg0, u8 *arg2, struct_80133038_arg2 *, EnAh *); /* static */
? func_80BD35BC(EnAh *arg0, ? arg1);                /* static */
void func_80BD3658(EnAh *arg0, GlobalContext *);    /* static */
void func_80BD3AA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4); /* static */
void func_80BD3AF8(GlobalContext *arg0, s32 arg1, Actor *arg2); /* static */
extern FlexSkeletonHeader D_06009E70;
static void D_80BD3DB0;                             /* unable to generate initializer */
static s32 D_80BD3DE8 = {0xE28FF0C, 0x10000000};
static s32 D_80BD3DF0 = {0xE29000C, 0x10000000};
static s32 D_80BD3DF8 = {0x330100, 0x50E28FE, 0xC100E28, 0xFC0C1000};
static s32 D_80BD3E08 = {0xE28FD0C, 0xF29540C, 0x10000000};
static ColliderCylinderInit D_80BD3E34 = {
    {1, 0, 0, 0x39, 0x10, 1},
    {1, {0, 0, 0}, {0, 0, 0}, 0, 0, 1},
    {0xA, 0x44, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80BD3E60 = {0, 0, 0, 0, 0xFF};
static ActorAnimationEntryS D_80BD3E6C = {
    {(AnimationHeader *)0x6001860, 1.0f, 0, 0xFFFF, 0, 0},
    {(AnimationHeader *)0x6001860, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6002280, 1.0f, 0, 0xFFFF, 2, 0},
    {(AnimationHeader *)0x6000968, 1.0f, 0, 0xFFFF, 0, 0xFFFC},
    {(AnimationHeader *)0x6000DDC, 1.0f, 0, 0xFFFF, 0, 0},
};
static ? D_80BD3EBC;                                /* unable to generate initializer */
static Vec3f D_80BD3EC4 = {100.0f, 0.0f, 67.0f};
static Vec3s D_80BD3ED0 = {0, 0x349C, 0};
static Vec3f D_80BD3ED8 = {855.0f, 260.0f, 31.0f};
static Vec3s D_80BD3EE4 = {0, 0x7FF8, 0};
static Vec3f D_80BD3EEC = {-395.0f, 210.0f, -162.0f};
static Vec3s D_80BD3EF8 = {0, 0xBE98, 0};
static Vec3f D_80BD3F00 = {1000.0f, 0.0f, 0.0f};
static ? D_80BD3F0C;                                /* unable to generate initializer */
static ? D_80BD3F14;                                /* unable to generate initializer */

typedef struct EnAh {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ void (*actionFunc)(EnAh *, GlobalContext *);
    /* 0x018C */ void (*unk18C)(EnAh *, GlobalContext *); /* inferred */
    /* 0x0190 */ ColliderCylinder unk190;           /* inferred */
    /* 0x01DC */ u8 unk1DC;                         /* inferred */
    /* 0x01DD */ char pad1DD[0x3];                  /* maybe part of unk1DC[4]? */
    /* 0x01E0 */ s32 unk1E0;                        /* inferred */
    /* 0x01E4 */ void *unk1E4;                      /* inferred */
    /* 0x01E8 */ char pad1E8[0x24];                 /* maybe part of unk1E4[10]? */
    /* 0x020C */ Vec3s unk20C;                      /* inferred */
    /* 0x0212 */ char pad212[0x60];                 /* maybe part of unk20C[17]? */
    /* 0x0272 */ Vec3s unk272;                      /* inferred */
    /* 0x0278 */ char pad278[0x60];                 /* maybe part of unk272[17]? */
    /* 0x02D8 */ u16 unk2D8;                        /* inferred */
    /* 0x02DA */ u16 unk2DA;                        /* inferred */
    /* 0x02DC */ f32 unk2DC;                        /* inferred */
    /* 0x02E0 */ char pad2E0[0xC];                  /* maybe part of unk2DC[4]? */
    /* 0x02EC */ s16 unk2EC;                        /* inferred */
    /* 0x02EE */ s16 unk2EE;                        /* inferred */
    /* 0x02F0 */ s16 unk2F0;                        /* inferred */
    /* 0x02F2 */ s16 unk2F2;                        /* inferred */
    /* 0x02F4 */ s16 unk2F4;                        /* inferred */
    /* 0x02F6 */ s16 unk2F6;                        /* inferred */
    /* 0x02F8 */ s16 unk2F8;                        /* inferred */
    /* 0x02FA */ s16 unk2FA;                        /* inferred */
    /* 0x02FC */ s16 unk2FC;                        /* inferred */
    /* 0x02FE */ s16 unk2FE;                        /* inferred */
    /* 0x0300 */ s32 unk300;                        /* inferred */
} EnAh;                                             /* size 0x304 */

Actor *func_80BD2A30(EnAh *arg0, GlobalContext *arg1, s16 arg2, s16 arg3) {
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

void func_80BD2AE0(EnAh *arg0) {
    arg0->unk144.animPlaybackSpeed = arg0->unk2DC;
    SkelAnime_FrameUpdateMatrix(arg0 + 0x144);
}

s32 func_80BD2B0C(EnAh *arg0, s32 arg1) {
    SkelAnime *temp_a0;
    s32 temp_t0;
    s32 temp_v0;
    s32 phi_v1;
    s32 phi_t0;

    phi_v1 = 0;
    phi_t0 = 0;
    if ((arg1 == 0) || (arg1 == 1)) {
        temp_v0 = arg0->unk300;
        if ((temp_v0 != 0) && (temp_v0 != 1)) {
            goto block_6;
        }
    } else if (arg1 != arg0->unk300) {
block_6:
        phi_v1 = 1;
    }
    temp_a0 = arg0 + 0x144;
    if (phi_v1 != 0) {
        arg0->unk300 = arg1;
        arg0 = arg0;
        temp_t0 = func_8013BC6C(temp_a0, &D_80BD3E6C, arg1);
        arg0->unk2DC = arg0->unk144.animPlaybackSpeed;
        phi_t0 = temp_t0;
    }
    return phi_t0;
}

void func_80BD2BA4(Actor *arg0, GlobalContext *arg1) {
    ColliderCylinder *sp1C;
    ColliderCylinder *temp_a2;

    temp_a2 = arg0 + 0x190;
    sp1C = temp_a2;
    Collider_UpdateCylinder(arg0, temp_a2);
    CollisionCheck_SetOC(arg1, arg1 + 0x18884, &temp_a2->base);
}

s32 func_80BD2BE8(Actor *arg0, GlobalContext *arg1) {
    s32 sp1C;
    Actor *temp_a0;
    u16 *temp_a0_2;
    s32 phi_v1;

    temp_a0 = arg0;
    phi_v1 = 0;
    if ((arg0->unk2D8 & 7) != 0) {
        sp1C = 0;
        arg0 = arg0;
        phi_v1 = sp1C;
        if (func_800B84D0(temp_a0, arg1) != 0) {
            temp_a0_2 = arg0 + 0x2D8;
            arg0 = arg0;
            func_8013AED4(temp_a0_2, 0U, 7U);
            arg0->unk188 = func_80BD3768;
            arg0->unk2D8 = (u16) (arg0->unk2D8 | 8);
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80BD2C6C(EnAh *arg0) {
    s32 sp1C;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 phi_v0;
    s32 phi_a3;
    s32 phi_a3_2;
    EnAh *phi_a2;

    phi_a3 = 0;
    phi_a3_2 = 0;
    phi_a2 = arg0;
    if ((arg0->unk2D8 & 0x40) != 0) {
        temp_v1 = arg0->unk2F8;
        if (temp_v1 == 0) {
            phi_v0 = 0;
        } else {
            arg0->unk2F8 = temp_v1 - 1;
            phi_v0 = arg0->unk2F8;
        }
        if (phi_v0 == 0) {
            temp_v0 = arg0->unk2F6;
            if ((temp_v0 != 1) && (temp_v0 != 2)) {

            } else {
                temp_v0_2 = arg0->unk2FA;
                if ((temp_v0_2 == 4) || (temp_v0_2 == 2)) {
                    arg0->unk2FA = 4;
                    phi_a3 = 1;
                }
            }
            phi_a3_2 = phi_a3;
            if ((phi_a3 == 0) && (arg0->unk2FA == 4)) {
                arg0->unk2FA = 0;
            }
            if (phi_a3 == 0) {
                arg0->unk2FA += 1;
                if ((s32) arg0->unk2FA >= 4) {
                    if (arg0->unk2F6 == 0) {
                        arg0 = arg0;
                        sp1C = 1;
                        arg0->unk2F8 = Rand_S16Offset(0x1E, 0x1E);
                    } else {
                        arg0->unk2F8 = 8;
                    }
                    arg0->unk2FA = 0;
                    phi_a3_2 = 1;
                    phi_a2 = arg0;
                }
            }
        }
    }
    if (phi_a3_2 == 1) {
        phi_a2->unk2FC = *(&D_80BD3EBC + (phi_a2->unk2F6 * 2));
    }
}

s32 func_80BD2DA0(void *arg0, void *arg1) {
    s32 phi_v1;

    if (arg0->unk1DC == 3) {
        phi_v1 = arg0->unk124;
    } else {
        phi_v1 = arg1->unk1CCC;
    }
    return phi_v1;
}

void func_80BD2DC8(EnAh *arg0) {
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

    Math_Vec3f_Copy(&sp40, arg0->unk1E4 + 0x24);
    Math_Vec3f_Copy(&sp34, arg0 + 0x24);
    temp_v0 = Math_Vec3f_Yaw(&sp34, &sp40);
    sp32 = temp_v0;
    Math_ApproachS(arg0 + 0x2EE, (s16) ((temp_v0 - arg0->unk2F2) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v1 = arg0->unk2EE;
    if ((s32) temp_v1 < -0x1FFE) {
        arg0->unk2EE = -0x1FFE;
    } else {
        phi_v0 = temp_v1;
        if ((s32) temp_v1 >= 0x1FFF) {
            phi_v0 = 0x1FFE;
        }
        arg0->unk2EE = phi_v0;
    }
    Math_ApproachS(arg0 + 0x2F2, (s16) ((sp32 - arg0->unk2EE) - arg0->actor.shape.rot.y), 4, 0x2AA8);
    temp_v1_2 = arg0->unk2F2;
    if ((s32) temp_v1_2 < -0x1C70) {
        arg0->unk2F2 = -0x1C70;
    } else {
        phi_v0_2 = temp_v1_2;
        if ((s32) temp_v1_2 >= 0x1C71) {
            phi_v0_2 = 0x1C70;
        }
        arg0->unk2F2 = phi_v0_2;
    }
    Math_Vec3f_Copy(&sp34, arg0 + 0x3C);
    temp_v0_2 = arg0->unk1E4;
    if (temp_v0_2->unk0 == 0) {
        sp40.y = temp_v0_2->unkC44 + 3.0f;
    } else {
        Math_Vec3f_Copy(&sp40, temp_v0_2 + 0x3C);
    }
    Math_ApproachS(arg0 + 0x2EC, (s16) (Math_Vec3f_Pitch(&sp34, &sp40) - arg0->unk2F0), 4, 0x2AA8);
    temp_v1_3 = arg0->unk2EC;
    if ((s32) temp_v1_3 < -0x1554) {
        arg0->unk2EC = -0x1554;
    } else {
        phi_v0_3 = temp_v1_3;
        if ((s32) temp_v1_3 >= 0x1555) {
            phi_v0_3 = 0x1554;
        }
        arg0->unk2EC = phi_v0_3;
    }
    Math_ApproachS(arg0 + 0x2F0, (s16) (Math_Vec3f_Pitch(&sp34, &sp40) - arg0->unk2EC), 4, 0x2AA8);
    temp_v1_4 = arg0->unk2F0;
    if ((s32) temp_v1_4 < -0xE38) {
        arg0->unk2F0 = -0xE38;
        return;
    }
    phi_v0_4 = temp_v1_4;
    if ((s32) temp_v1_4 >= 0xE39) {
        phi_v0_4 = 0xE38;
    }
    arg0->unk2F0 = phi_v0_4;
}

void func_80BD2FD0(EnAh *arg0) {
    EnAh *temp_a0;
    s16 temp_v0_2;
    s16 temp_v0_4;
    s32 temp_v0;
    u16 temp_t2;
    u16 temp_t3;
    u16 temp_v0_3;
    s16 phi_v1;
    s16 phi_v1_2;

    temp_v0 = func_80BD2DA0();
    temp_a0 = arg0;
    temp_a0->unk1E4 = temp_v0;
    if (((temp_a0->unk2D8 & 8) != 0) && (temp_v0 != 0)) {
        temp_v0_2 = temp_a0->unk2F4;
        if (temp_v0_2 == 0) {
            phi_v1 = 0;
        } else {
            temp_a0->unk2F4 = temp_v0_2 - 1;
            phi_v1 = temp_a0->unk2F4;
        }
        if (phi_v1 == 0) {
            arg0 = temp_a0;
            func_80BD2DC8(temp_a0);
            arg0->unk2F0 = 0;
            arg0->unk2F2 = 0;
            temp_t2 = arg0->unk2D8 & 0xFF7F;
            temp_t3 = temp_t2 | 0x20;
            arg0->unk2D8 = temp_t2;
            arg0->unk2D8 = temp_t3;
            return;
        }
        goto block_7;
    }
block_7:
    temp_v0_3 = temp_a0->unk2D8;
    if ((temp_v0_3 & 0x20) != 0) {
        temp_a0->unk2D8 = temp_v0_3 & 0xFFDF;
        temp_a0->unk2EC = 0;
        temp_a0->unk2EE = 0;
        temp_a0->unk2F0 = 0;
        temp_a0->unk2F2 = 0;
        temp_a0->unk2F4 = 0x14;
        return;
    }
    temp_v0_4 = temp_a0->unk2F4;
    if (temp_v0_4 == 0) {
        phi_v1_2 = 0;
    } else {
        temp_a0->unk2F4 = temp_v0_4 - 1;
        phi_v1_2 = temp_a0->unk2F4;
    }
    if (phi_v1_2 == 0) {
        temp_a0->unk2D8 |= 0x80;
    }
}

? func_80BD30C0(void *arg0, ? arg1) {
    u8 temp_v0;

    temp_v0 = arg0->unk1DC;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {

        } else {
            func_80BD2B0C((EnAh *)4);
        }
    } else {
        func_80BD2B0C(NULL);
    }
    return 0;
}

void func_80BD3118(EnAh *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk2FE;
    if (temp_v0 == 0) {
        func_80BD2B0C(arg0, 2);
        arg0->unk2FE += 1;
        return;
    }
    if ((temp_v0 == 1) && (func_801378B8(arg0 + 0x144, arg0->unk144.animFrameCount) != 0)) {
        func_80BD2B0C(arg0, 3);
        arg0->unk2FE += 1;
    }
}

? func_80BD3198(EnAh *arg0, GlobalContext *arg1) {
    ? (*temp_v0_2)(EnAh *, GlobalContext *);
    u16 temp_v0;
    u16 temp_v1;

    temp_v1 = arg1->msgCtx.unk11F04;
    if ((arg1->actorCtx.actorList[2].first->unkA6C & 0x40) != 0) {
        if (temp_v1 != arg0->unk2DA) {
            if (temp_v1 == 0x2954) {
                arg0->unk18C = func_80BD3118;
                arg0->unk2FE = 0;
            }
            if (temp_v1 != 0x28FD) {
                if (temp_v1 != 0x2954) {

                } else {
                    arg0->unk2F6 = 2;
                    arg0->unk2F8 = 8;
                }
            } else {
                arg0->unk2F6 = 1;
                arg0->unk2F8 = 8;
            }
        }
        arg0->unk2DA = temp_v1;
        arg0->unk2D8 |= 0x100;
    } else {
        temp_v0 = arg0->unk2D8;
        if ((temp_v0 & 0x100) != 0) {
            arg0->unk18C = NULL;
            arg0->unk2DA = 0;
            arg0->unk2D8 = temp_v0 & 0xFEFF;
            arg0->unk2F6 = 0;
            arg0->unk2F8 = 4;
            func_80BD30C0();
        }
    }
    temp_v0_2 = arg0->unk18C;
    if (temp_v0_2 != 0) {
        temp_v0_2(arg0, arg1);
    }
    return 0;
}

s32 *func_80BD3294(EnAh *arg0, GlobalContext *arg1) {
    u8 temp_v0;

    if (Player_GetMask(arg1) == 2) {
        return &D_80BD3E08;
    }
    temp_v0 = arg0->unk1DC;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return NULL;
        }
        return &D_80BD3DF8;
    }
    if (gSaveContext.day == 2) {
        return &D_80BD3DF0;
    }
    return &D_80BD3DE8;
}

s32 func_80BD3320(EnAh *arg0, s32 arg2, s16 arg3) {
    s32 sp18;
    Actor *temp_v0;
    s32 phi_v1;

    sp18 = 0;
    temp_v0 = func_80BD2A30(arg0, (GlobalContext *) (arg2 & 0xFF), arg3);
    phi_v1 = sp18;
    if (temp_v0 != 0) {
        arg0->actor.child = temp_v0;
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80BD3374(EnAh *arg0, ? arg1, ? arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80BD3EC4);
    temp_a2 = arg0 + 0x30;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80BD3ED0);
    Math_Vec3s_Copy(arg0 + 0xBC, sp20);
    func_80BD2B0C(arg0, 0);
    func_8013AED4(arg0 + 0x2D8, 3U, 7U);
    arg0->unk2D8 |= 0x40;
    return 1;
}

s32 func_80BD33FC(EnAh *arg0, ? arg1, ? arg2) {
    Vec3s *sp20;
    Vec3s *temp_a2;

    Math_Vec3f_Copy(arg0 + 0x24, &D_80BD3ED8);
    temp_a2 = arg0 + 0x30;
    sp20 = temp_a2;
    Math_Vec3s_Copy(temp_a2, &D_80BD3EE4);
    Math_Vec3s_Copy(arg0 + 0xBC, sp20);
    func_80BD2B0C(arg0, 4);
    func_8013AED4(arg0 + 0x2D8, 3U, 7U);
    arg0->unk2D8 |= 0x50;
    return 1;
}

s32 func_80BD3484(EnAh *arg0, ? arg2) {
    s32 sp24;
    Vec3s *sp20;
    Vec3s *temp_a2;
    u16 temp_t0;
    u16 temp_t2;
    s32 phi_v1;

    sp24 = 0;
    phi_v1 = sp24;
    if (func_80BD3320(arg0, 4, 0x202) != 0) {
        if (gGameInfo->data[1617] == 0) {
            Math_Vec3f_Copy(arg0 + 0x24, &D_80BD3EEC);
            temp_a2 = arg0 + 0x30;
            sp20 = temp_a2;
            Math_Vec3s_Copy(temp_a2, &D_80BD3EF8);
            Math_Vec3s_Copy(arg0 + 0xBC, sp20);
        }
        func_80BD2B0C(arg0, 4);
        temp_t0 = arg0->unk2D8 | 0x48;
        temp_t2 = temp_t0 | 0x10;
        arg0->unk2D8 = temp_t0;
        arg0->unk2D8 = temp_t2;
        arg0->unk2D8 = temp_t2 | 0x80;
        arg0->actor.gravity = 0.0f;
        phi_v1 = 1;
    }
    return phi_v1;
}

s32 func_80BD3548(EnAh *arg0, u8 *arg2) {
    u8 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    arg0->unk2D8 = 0;
    temp_v0 = *arg2;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                phi_v1 = 0;
            } else {
                phi_v0 = func_80BD3484();
                goto block_7;
            }
        } else {
            phi_v0 = func_80BD33FC();
            goto block_7;
        }
    } else {
        phi_v0 = func_80BD3374();
block_7:
        phi_v1 = phi_v0;
    }
    return phi_v1;
}

? func_80BD35BC(EnAh *arg0, ? arg1) {
    s16 temp_v0;
    s32 phi_v1;

    if (arg0->unk1DC != 2) {

    } else {
        temp_v0 = arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y;
        phi_v1 = temp_v0 << 0x10;
        if ((s32) temp_v0 < 0) {
            phi_v1 = (s32) temp_v0 * -0x10000;
        }
        if ((phi_v1 >> 0x10) < 0x3800) {
            func_8013AED4(arg0 + 0x2D8, 3U, 7U);
        } else {
            func_8013AED4(arg0 + 0x2D8, 0U, 7U);
        }
    }
    return 0;
}

void func_80BD3658(EnAh *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk1DC;
    if ((temp_v0 == 1) || (temp_v0 == 2) || (temp_v0 == 3)) {
        func_80BD35BC(arg0);
    }
    Math_ApproachS(arg0 + 0xBE, arg0->actor.world.rot.y, 3, 0x2AA8);
}

void func_80BD36B8(EnAh *this, GlobalContext *globalCtx) {
    struct_80133038_arg2 sp18;
    EnAh *temp_a0;
    EnAh *temp_a3;
    EnAh *phi_a3;
    EnAh *phi_a3_2;
    EnAh *phi_a3_3;

    this = this;
    temp_a3 = this;
    phi_a3 = temp_a3;
    phi_a3_2 = temp_a3;
    if ((func_80133038(globalCtx, &D_80BD3DB0, &sp18) == 0) || ((temp_a0 = temp_a3, (sp18.unk0 != temp_a3->unk1DC)) && (this = temp_a3, phi_a3 = this, phi_a3_2 = this, (func_80BD3548(temp_a0, (u8 *) globalCtx, &sp18, temp_a3) == 0)))) {
        phi_a3_2->actor.shape.shadowDraw = NULL;
        phi_a3_2->actor.flags &= -2;
        sp18.unk0 = 0;
        phi_a3_3 = phi_a3_2;
    } else {
        phi_a3->actor.shape.shadowDraw = func_800B3FC0;
        phi_a3->actor.flags |= 1;
        phi_a3_3 = phi_a3;
    }
    phi_a3_3->unk1DC = sp18.unk0;
    func_80BD3658(phi_a3_3, globalCtx);
}

void func_80BD3768(EnAh *this, GlobalContext *globalCtx) {
    Vec3f sp40;
    Vec3f sp34;
    u16 temp_t9;
    void *temp_v0;

    if (func_8010BF58(&this->actor, globalCtx, func_80BD3294(this, globalCtx), NULL, &this->unk1E0) != 0) {
        func_8013AED4(&this->unk2D8, 3U, 7U);
        temp_t9 = this->unk2D8 & 0xFFF7;
        this->unk2D8 = temp_t9;
        this->unk2D8 = temp_t9 | 0x80;
        this->unk2F4 = 0x14;
        this->unk1E0 = 0;
        this->actionFunc = func_80BD36B8;
        return;
    }
    if (this->unk1DC != 2) {
        temp_v0 = this->unk1E4;
        if (temp_v0 != 0) {
            Math_Vec3f_Copy(&sp40, temp_v0 + 0x24);
            Math_Vec3f_Copy(&sp34, &this->actor.world.pos);
            Math_ApproachS(&this->actor.shape.rot.y, Math_Vec3f_Yaw(&sp34, &sp40), 4, 0x2AA8);
        }
    }
}

void EnAh_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnAh *this = (EnAh *) thisx;
    if (func_80BD2A30(this, globalCtx, 4, 0x253) != 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 20.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_06009E70, NULL, &this->unk20C, &this->unk272, 0x11);
    this->unk300 = -1;
    func_80BD2B0C(this, 0);
    Collider_InitAndSetCylinder(globalCtx, &this->unk190, &this->actor, &D_80BD3E34);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, DamageTable_Get(0x16), &D_80BD3E60);
    this->actor.targetMode = 6;
    Actor_SetScale(&this->actor, 0.01f);
    this->unk1DC = 0;
    this->unk2D8 = 0;
    this->actionFunc = func_80BD36B8;
    func_80BD36B8(this, globalCtx);
}

void EnAh_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnAh *this = (EnAh *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk190);
}

void EnAh_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnAh *this = (EnAh *) thisx;
    func_80BD2BE8(&this->actor, globalCtx);
    this->actionFunc(this, globalCtx);
    if (this->unk1DC != 0) {
        func_80BD3198(this, globalCtx);
        func_80BD2AE0(this);
        func_80BD2C6C(this);
        func_80BD2FD0(this, globalCtx);
        func_8013C964(&this->actor, globalCtx, (f32) (this->unk190.dim.radius + 0x3C), (f32) (this->unk190.dim.height + 0xA), 0, (s16) (this->unk2D8 & 7));
        if ((this->unk2D8 & 0x10) == 0) {
            Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
            Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 30.0f, 12.0f, 0.0f, 4U);
        }
        func_80BD2BA4(&this->actor, globalCtx);
    }
}

void func_80BD3AA8(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    if (arg1 == 7) {
        SysMatrix_MultiplyVector3fByState(&D_80BD3F00, arg4 + 0x3C);
        Math_Vec3s_Copy(arg4 + 0x48, arg4 + 0x30);
    }
}

void func_80BD3AF8(GlobalContext *arg0, s32 arg1, Actor *arg2) {
    u16 temp_v0;
    s32 phi_v1;
    s32 phi_v0;

    temp_v0 = arg2->unk2D8;
    phi_v1 = 0;
    if ((temp_v0 & 0x80) == 0) {
        if ((temp_v0 & 0x20) != 0) {
            phi_v1 = 1;
            phi_v0 = 1;
        } else {
            phi_v1 = 1;
            phi_v0 = 0;
        }
    } else {
        phi_v0 = 0;
    }
    if (arg1 == 7) {
        func_8013AD9C((s16) (arg2->unk2EC + arg2->unk2F0 + 0x4000), (s16) (arg2->unk2EE + arg2->unk2F2 + arg2->shape.rot.y + 0x4000), arg2 + 0x1E8, arg2 + 0x200, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk1E8, arg2->unk1EC, arg2->unk1F0, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk202, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk200, 1);
        SysMatrix_InsertZRotation_s(arg2->unk204, 1);
        SysMatrix_StatePush();
        return;
    }
    if (arg1 == 2) {
        func_8013AD9C((s16) (arg2->unk2F0 + 0x4000), (s16) (arg2->unk2F2 + arg2->shape.rot.y + 0x4000), arg2 + 0x1F4, arg2 + 0x206, phi_v1, phi_v0);
        SysMatrix_StatePop();
        SysMatrix_InsertTranslation(arg2->unk1F4, arg2->unk1F8, arg2->unk1FC, 0);
        Matrix_Scale(arg2->scale.x, arg2->scale.y, arg2->scale.z, 1);
        Matrix_RotateY(arg2->unk208, 1U);
        SysMatrix_InsertXRotation_s(arg2->unk206, 1);
        SysMatrix_InsertZRotation_s(arg2->unk20A, 1);
        SysMatrix_StatePush();
    }
}

void EnAh_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnAh *this = (EnAh *) thisx;
    GraphicsContext *sp40;
    Gfx *sp38;
    Gfx *sp34;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;

    if (this->unk1DC != 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        sp40 = temp_a0;
        func_8012C28C(temp_a0);
        temp_v0 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDB060020;
        sp40 = sp40;
        sp38 = temp_v0;
        sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80BD3F14 + (this->unk2FA * 4)));
        temp_v0_2 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060024;
        sp34 = temp_v0_2;
        sp34->words.w1 = Lib_SegmentedToVirtual(*(&D_80BD3F0C + (this->unk2FC * 4)));
        func_801343C0(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, NULL, func_80BD3AA8, func_80BD3AF8, &this->actor);
    }
}

