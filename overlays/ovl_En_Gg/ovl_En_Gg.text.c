? func_800B90F4(GlobalContext *, GlobalContext *);  /* extern */
void func_80B34F70(EnGg *arg0);                     /* static */
? func_80B34FB4(EnGg *arg0, GlobalContext *arg1);   /* static */
void func_80B35108(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B351A4(EnGg *arg0);                     /* static */
void func_80B35250(Actor *arg0);                    /* static */
void func_80B352A4(void *arg0, ? arg1);             /* static */
void func_80B35450(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B3556C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B35634(Actor *arg0, GlobalContext *arg1); /* static */
u16 func_80B357F0(Actor *arg0);                     /* static */
void func_80B3584C(EnGg *arg0);                     /* static */
void func_80B358D8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80B35968(EnGg *arg0, GlobalContext *);    /* static */
void func_80B359DC(Actor *arg0, void *arg1);        /* static */
void func_80B35B24(? *arg0, GlobalContext *arg1);   /* static */
void func_80B35B44(void *arg0);                     /* static */
void func_80B35C84(void *arg0, GraphicsContext **arg1); /* static */
void func_80B3610C(void *arg0, GraphicsContext **arg1); /* static */
void func_80B363E8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4); /* static */
void func_80B364D4(? *arg0, GlobalContext *);       /* static */
s32 func_80B368B0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5, Actor *actor, Gfx **gfx); /* static */
void func_80B368F0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **gfx); /* static */
extern AnimationHeader D_0600F578;
extern FlexSkeletonHeader D_0600F6C0;
static ColliderCylinderInit D_80B36C00 = {
    {0xA, 0, 0, 0x39, 0x10, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x18, 0x48, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_80B36C2C = {0, 0x18, 0x48, 0, 0xFF};
static DamageTable D_80B36C38 = {
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
static ActorAnimationEntry D_80B36C58 = {
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600D528, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600D174, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600ECC0, 1.0f, 0.0f, 0.0f, 2, -10.0f},
    {(AnimationHeader *)0x600BAF0, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600AF40, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600AF40, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x600F578, 1.0f, 0.0f, 0.0f, 0, -10.0f},
    {(AnimationHeader *)0x60100C8, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600CDA0, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600B560, 1.0f, 0.0f, 0.0f, 0, 0.0f},
    {(AnimationHeader *)0x600A4B4, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600E86C, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600D99C, 1.0f, 0.0f, 0.0f, 2, 0.0f},
    {(AnimationHeader *)0x600E2A4, 1.0f, 0.0f, 0.0f, 0, 0.0f},
};
static ? D_80B36DD8;                                /* unable to generate initializer */
static ? D_80B36DE4;                                /* unable to generate initializer */
static Vec3f D_80B36DF0 = {1800.0f, 300.0f, 200.0f};
static ? D_80B36DFC;                                /* unable to generate initializer */

typedef struct EnGg {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ SkelAnime unk190;                  /* inferred */
    /* 0x01D4 */ void (*actionFunc)(EnGg *, GlobalContext *);
    /* 0x01D8 */ Vec3s unk1D8;                      /* inferred */
    /* 0x01DE */ Vec3s unk1DE;                      /* inferred */
    /* 0x01E4 */ Vec3s unk1E4;                      /* inferred */
    /* 0x01EA */ char pad1EA[0x72];                 /* maybe part of unk1E4[20]? */
    /* 0x025C */ Vec3s unk25C;                      /* inferred */
    /* 0x0262 */ char pad262[0x78];                 /* maybe part of unk25C[21]? */
    /* 0x02DA */ u8 unk2DA;                         /* inferred */
    /* 0x02DB */ char pad2DB[0x1];                  /* maybe part of unk2DA[2]? */
    /* 0x02DC */ s16 unk2DC;                        /* inferred */
    /* 0x02DE */ char pad2DE[0x4];                  /* maybe part of unk2DC[3]? */
    /* 0x02E2 */ s16 unk2E2;                        /* inferred */
    /* 0x02E4 */ s16 unk2E4;                        /* inferred */
    /* 0x02E6 */ s16 unk2E6;                        /* inferred */
    /* 0x02E8 */ s16 unk2E8;                        /* inferred */
    /* 0x02EA */ char pad2EA[0x1A];                 /* maybe part of unk2E8[14]? */
    /* 0x0304 */ s16 unk304;                        /* inferred */
    /* 0x0306 */ char pad306[0x2];                  /* maybe part of unk304[2]? */
    /* 0x0308 */ u8 unk308;                         /* inferred */
    /* 0x0309 */ u8 unk309;                         /* inferred */
    /* 0x030A */ s16 unk30A;                        /* inferred */
    /* 0x030C */ char pad30C[0x4];                  /* maybe part of unk30A[3]? */
    /* 0x0310 */ f32 unk310;                        /* inferred */
    /* 0x0314 */ char pad314[0x30];                 /* maybe part of unk310[13]? */
    /* 0x0344 */ ? unk344;                          /* inferred */
    /* 0x0345 */ char pad345[0x2F];
    /* 0x0374 */ u8 unk374;                         /* inferred */
    /* 0x0375 */ char pad375[0x3];                  /* maybe part of unk374[4]? */
    /* 0x0378 */ ? (*unk378)(void *, void *, void *); /* inferred */
    /* 0x037C */ ? (*unk37C)(? *, GlobalContext *, GraphicsContext *); /* inferred */
    /* 0x0380 */ char pad380[0x10];                 /* maybe part of unk37C[5]? */
} EnGg;                                             /* size 0x390 */

void func_80B34F70(EnGg *arg0) {
    arg0->actor.focus.pos.y = arg0->actor.world.pos.y + 80.0f;
    arg0->actor.focus.pos.x = arg0->actor.world.pos.x;
    arg0->actor.focus.pos.z = arg0->actor.world.pos.z;
    arg0->actor.focus.rot.x = arg0->actor.world.rot.x;
    arg0->actor.focus.rot.y = arg0->actor.world.rot.y;
    arg0->actor.focus.rot.z = arg0->actor.world.rot.z;
}

? func_80B34FB4(EnGg *arg0, GlobalContext *arg1) {
    f32 sp44;
    Vec3f sp40;
    f32 sp38;
    Vec3f sp34;
    f32 temp_f0;
    s16 temp_v0_2;
    void *temp_v0;
    s16 phi_v1;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    sp40.x = temp_v0->world.pos.x;
    sp40.y = temp_v0->world.pos.y;
    sp40.z = temp_v0->world.pos.z;
    sp44 = temp_v0->unkC44 + 3.0f;
    sp34.x = arg0->actor.world.pos.x;
    sp34.y = arg0->actor.world.pos.y;
    sp34.z = arg0->actor.world.pos.z;
    sp38 += 70.0f;
    temp_f0 = arg0->actor.xzDistToPlayer;
    if ((temp_f0 < 250.0f) && (temp_f0 > 50.0f) && (((arg0->actor.flags & 0x80) == 0x80) || ((gSaveContext.weekEventReg[19] & 0x80) != 0))) {
        Math_SmoothStepToS(arg0 + 0x2E8, Math_Vec3f_Pitch(&sp34, &sp40), 4, 0x2AA8, (s16) 1);
    } else {
        Math_SmoothStepToS(arg0 + 0x2E8, 0, 4, 0x2AA8, (s16) 1);
    }
    temp_v0_2 = arg0->unk2E8;
    if ((s32) temp_v0_2 < 0) {
        arg0->unk2E8 = 0;
    } else {
        phi_v1 = temp_v0_2;
        if ((s32) temp_v0_2 >= 0x1C71) {
            phi_v1 = 0x1C70;
        }
        arg0->unk2E8 = phi_v1;
    }
    return 1;
}

void func_80B35108(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *temp_a1;
    GlobalContext *temp_a0;

    temp_a1 = arg1 + 0x18884;
    arg0->unk18A = (s16) (s32) arg0->world.pos.x;
    temp_a0 = arg1;
    arg0->unk18C = (s16) (s32) arg0->world.pos.y;
    arg0->unk18E = (s16) (s32) arg0->world.pos.z;
    arg1 = arg1;
    CollisionCheck_SetAC(temp_a0, temp_a1, arg0 + 0x144);
    Actor_UpdateBgCheckInfo(arg1, arg0, 0.0f, 30.0f, 30.0f, 7U);
}

void func_80B351A4(EnGg *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = arg0->unk2E6;
    if ((temp_v0 == 2) || (temp_v0 == 3)) {
        arg0->unk2E2 = 3;
        return;
    }
    temp_v0_2 = arg0->unk2E4 - 1;
    if ((s32) temp_v0_2 >= 3) {
        arg0->unk2E2 = 0;
        goto block_8;
    }
    if (temp_v0_2 == 0) {
        arg0->unk2E2 = 2;
        arg0->unk2E4 = (s32) (Rand_ZeroOne() * 60.0f) + 0x14;
        return;
    }
    arg0->unk2E2 = 1;
block_8:
    arg0->unk2E4 = temp_v0_2;
}

void func_80B35250(Actor *arg0) {
    Actor *temp_a3;

    temp_a3 = arg0;
    temp_a3->unk2E4 = 0x14;
    temp_a3->unk2E2 = 0;
    temp_a3->unk2E6 = 0;
    arg0 = temp_a3;
    func_800BDC5C(temp_a3 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 0);
    arg0->unk1D4 = func_80B35450;
}

void func_80B352A4(void *arg0, ? arg1) {
    s16 sp26;
    s16 temp_v0;
    s32 temp_f6;
    u16 temp_t0;
    u16 temp_v1;

    temp_f6 = (s32) arg0->unk1A8;
    sp26 = (s16) temp_f6;
    temp_v0 = SkelAnime_GetFrameCount(&(&D_80B36C58)[arg0->unk2E6].animation->common);
    if ((s16) temp_f6 == temp_v0) {
        temp_t0 = arg0->unk116;
        switch (temp_t0) {
        case 3301:
            arg0->unk2E6 = 1;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 1);
            break;
        case 3302:
        case 3308:
            arg0->unk2E6 = 0;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 0);
            break;
        case 3304:
            arg0->unk2E6 = 2;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 2);
            break;
        case 3305:
            arg0->unk2E6 = 3;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 3);
            break;
        case 3309:
        case 3310:
            arg0->unk2E6 = 4;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 4);
            break;
        default:
            arg0->unk2E6 = 0;
            func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 0);
            break;
        }
        gSaveContext.weekEventReg[19] |= 0x80;
        arg0->unk1D4 = func_80B3556C;
        return;
    }
    if ((arg0->unk2E6 == 0) && ((temp_v1 = arg0->unk116, (temp_v1 == 0xCED)) || (temp_v1 == 0xCEE))) {
        if ((s32) (s16) temp_f6 < (temp_v0 - 1)) {
            arg0->unk1AC = 2.0f;
            return;
        }
        arg0->unk2E6 = 4;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 4);
        // Duplicate return node #16. Try simplifying control flow for better match
    }
}

void func_80B35450(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (((gSaveContext.weekEventReg[91] & 0x10) != 0) && (arg1->csCtx.state == 0)) {
        func_80B359DC(arg0);
    }
    arg1 = arg1;
    if (func_800B84D0(arg0, arg1) != 0) {
        if ((arg0->flags & 0x80) == 0x80) {
            func_800B90F4(arg1, arg1);
        }
        arg0->unk308 = 1;
        arg0->unk1D4 = func_80B352A4;
        return;
    }
    temp_f0 = arg0->xzDistToPlayer;
    if ((temp_f0 < 200.0f) && (temp_f0 > 50.0f)) {
        if ((gSaveContext.weekEventReg[19] & 0x80) != 0) {
            func_800B863C(arg0, arg1);
            arg0->textId = 0xCEE;
            return;
        }
        if ((arg0->flags & 0x80) == 0x80) {
            func_800B863C(arg0, arg1);
            arg0->textId = 0xCE5;
        }
        // Duplicate return node #13. Try simplifying control flow for better match
    }
}

void func_80B3556C(Actor *arg0, GlobalContext *arg1) {
    s16 temp_v0;

    if ((func_80152498(arg1 + 0x4908) == 5) && (func_80147624(arg1) != 0)) {
        if (arg0->unk2E6 == 4) {
            arg1->msgCtx.unk11F22 = 0x43;
            arg1->msgCtx.unk12023 = 4;
            arg0->unk308 = 0;
            arg0->flags &= -0x81;
            func_80B35250(arg0);
            return;
        }
        temp_v0 = func_80B357F0(arg0);
        arg0->textId = temp_v0;
        func_801518B0(arg1, temp_v0 & 0xFFFF, arg0);
        arg0->unk1D4 = func_80B352A4;
        // Duplicate return node #5. Try simplifying control flow for better match
    }
}

void func_80B35634(Actor *arg0, GlobalContext *arg1) {
    u32 sp20;
    s32 temp_t6;
    u16 temp_a0;
    u16 temp_t0;
    u32 temp_v0;
    void *temp_v1;
    GlobalContext *phi_a3;

    if (func_800EE29C(arg1, 0x77U) != 0) {
        temp_v0 = func_800EE200(arg1, 0x77U);
        temp_t6 = temp_v0 * 4;
        sp20 = temp_v0;
        temp_v1 = arg1 + temp_t6;
        temp_a0 = *temp_v1->unk1F4C;
        if (arg0->unk2DB != temp_a0) {
            arg0->unk2DB = (u8) temp_a0;
            temp_t0 = *temp_v1->unk1F4C;
            switch (temp_t0) {
            case 1:
                arg0->unk2DA = 0U;
                arg0->unk2E6 = 0;
block_13:
                func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, (s32) arg0->unk2DA);
                goto block_14;
            case 2:
                arg0->unk2DA = 9U;
                arg0->unk2E6 = 9;
                goto block_13;
            case 3:
                arg0->unk2DA = 0xAU;
                arg0->unk2E6 = 0xA;
                goto block_13;
            case 4:
                arg0->unk2DA = 0xBU;
                arg0->unk374 = 0xBU;
                arg0->unk2E6 = 0xB;
                func_80B364D4(arg0 + 0x344, arg1);
                goto block_13;
            case 5:
                arg0->unk2DA = 0xCU;
                arg0->unk374 = 0xCU;
                arg0->unk2E6 = 0xC;
                goto block_13;
            case 6:
                arg0->unk2DA = 0xDU;
                arg0->unk374 = 0xDU;
                arg0->unk2E6 = 0xD;
                goto block_13;
            case 7:
                arg0->unk2DA = 0xEU;
                arg0->unk374 = 0xEU;
                arg0->unk2E6 = 0xE;
                func_80B364D4(arg0 + 0x344, arg1);
                goto block_13;
            case 8:
                Actor_MarkForDeath(arg0);
                return;
            default:
                arg0->unk2DA = 0U;
                goto block_13;
            }
        } else {
block_14:
            phi_a3 = arg1;
            if (arg0->unk2DA == 0xE) {
                func_80B358D8(arg0, arg1);
                phi_a3 = arg1;
            }
            func_800EDF24(arg0, phi_a3, sp20);
            arg0->shape.yOffset = 0.0f;
        }
    } else {
        arg0->unk2DB = 0x63U;
    }
}

u16 func_80B357F0(Actor *arg0) {
    u16 temp_t6;

    temp_t6 = arg0->textId;
    switch (temp_t6) {
    case 3301:
        return 0xCE6U;
    case 3302:
        return 0xCE8U;
    case 3304:
        return 0xCE9U;
    case 3305:
        return 0xCECU;
    case 3308:
        return 0xCEDU;
    default:
        return 0U;
    }
}

void func_80B3584C(EnGg *arg0) {
    arg0->unk30A += 0x72C;
    arg0->actor.shape.yOffset = Math_SinS(arg0->unk30A) * 100.0f;
    arg0->actor.shape.shadowScale = 30.0f - (Math_SinS(arg0->unk30A) * 5.0f);
    Math_SmoothStepToS(arg0 + 0xBE, arg0->actor.yawTowardsPlayer, 5, 0x1000, (s16) 0x100);
    arg0->actor.world.rot.y = arg0->actor.shape.rot.y;
}

void func_80B358D8(Actor *arg0, GlobalContext *arg1) {
    s16 sp1E;
    u8 temp_t8;

    sp1E = (s16) (s32) arg0->unk1A8;
    temp_t8 = arg0->unk2DA;
    arg0 = arg0;
    if ((arg0->unk2E6 == 0xE) && (sp1E == SkelAnime_GetFrameCount(&(&D_80B36C58)[temp_t8].animation->common))) {
        arg0->unk2E6 = 0xF;
        func_800BDC5C(arg0 + 0x190, (ActorAnimationEntry []) &D_80B36C58, 0xF);
    }
}

void func_80B35968(EnGg *arg0) {
    ? (*temp_v0)(void *, void *, void *);
    u8 temp_v0_2;
    void *temp_a2;
    void *temp_a3;

    temp_v0 = arg0->unk378;
    temp_a2 = arg0 + 0x320;
    temp_a3 = arg0 + 0x32C;
    if (temp_v0 != 0) {
        temp_v0(arg0 + 0x344, temp_a2, temp_a3);
        return;
    }
    temp_v0_2 = arg0->unk2DA;
    if ((temp_v0_2 == 0xB) || (temp_v0_2 == 0xE)) {
        arg0->unk374 = temp_v0_2;
    }
    func_80B363E8(arg0 + 0x344, temp_a2, temp_a3, arg0 + 0x338);
}

void func_80B359DC(Actor *arg0, void *arg1) {
    void *sp24;
    u8 temp_v0_2;
    void *temp_v0;

    temp_v0 = arg1->unk1CCC;
    if (arg0->xzDistToPlayer < 200.0f) {
        if (arg0->unk306 == 0) {
            if ((temp_v0->unkA70 * 0x10) < 0) {
                arg0->unk306 = 1U;
                sp24 = temp_v0;
                play_sound(0x4807U);
            }
        } else if ((temp_v0->unkA70 * 0x10) >= 0) {
            arg0->unk306 = 0U;
        }
        if ((arg1->unk1CCC->unk14B == 4) && (arg1->unk16932 == 3) && (arg1->unk16936 == 7)) {
            temp_v0_2 = gSaveContext.weekEventReg[19];
            if ((temp_v0_2 & 0x80) == 0) {
                gSaveContext.weekEventReg[19] = temp_v0_2 | 0x80;
            }
            arg0->unk307 = 1U;
        }
        if (ActorCutscene_GetCanPlayNext(arg0->unk2DC) != 0) {
            ActorCutscene_Start(arg0->unk2DC, arg0);
            goto block_18;
        }
        if (ActorCutscene_GetCurrentIndex() == 0x7C) {
            ActorCutscene_Stop(0x7C);
        }
        if (arg0->unk307 != 0) {
            ActorCutscene_SetIntentToPlay(arg0->unk2DC);
            return;
        }
        // Duplicate return node #19. Try simplifying control flow for better match
        return;
    }
block_18:
    arg0->unk307 = 0U;
}

void func_80B35B24(? *arg0, GlobalContext *arg1) {
    arg0->unk34 = 0;
    arg0->unk38 = 0;
    arg0->unk3C = 0;
    arg0->unk40 = 0;
    arg0->unk44 = 0;
}

void func_80B35B44(void *arg0) {
    s32 temp_t2;
    s32 temp_t3;
    s32 temp_t6;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v1;
    s32 temp_v1_2;
    u8 temp_v0;
    s32 phi_v0;
    s32 phi_v0_2;

    temp_v0 = arg0->unk30;
    if (temp_v0 == 0xE) {
        temp_v0_2 = arg0->unk40 + 1;
        arg0->unk40 = temp_v0_2;
        phi_v0 = temp_v0_2;
        if (temp_v0_2 >= 0x47) {
            arg0->unk48 = 1U;
            arg0->unk40 = 0;
            phi_v0 = 0;
        }
        if (phi_v0 != 0x46) {
            temp_v1 = phi_v0 - 0xF;
            if (arg0->unk48 != 0) {
                arg0->unk44 = 0x37;
                return;
            }
            arg0->unk44 = temp_v1;
            if (temp_v1 < 0) {
                arg0->unk44 = 0;
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        }
        temp_t2 = arg0->unk44 + 1;
        arg0->unk44 = temp_t2;
        if (temp_t2 >= 0x38) {
            arg0->unk44 = 0x37;
            return;
        }
        // Duplicate return node #22. Try simplifying control flow for better match
        return;
    }
    if ((temp_v0 == 0xB) || (temp_v0 == 0xC)) {
        temp_t6 = arg0->unk40 + 1;
        arg0->unk40 = temp_t6;
        if (temp_t6 >= 0x47) {
            arg0->unk48 = 1U;
            arg0->unk40 = 0;
            return;
        }
        // Duplicate return node #22. Try simplifying control flow for better match
        return;
    }
    if (temp_v0 == 0xD) {
        arg0->unk48 = 0U;
        temp_v0_3 = arg0->unk40 + 1;
        arg0->unk40 = temp_v0_3;
        phi_v0_2 = temp_v0_3;
        if (temp_v0_3 >= 0x47) {
            arg0->unk40 = 0x46;
            phi_v0_2 = 0x46;
        }
        temp_v1_2 = phi_v0_2 - 0xF;
        if (phi_v0_2 != 0x46) {
            arg0->unk44 = temp_v1_2;
            if (temp_v1_2 < 0) {
                arg0->unk44 = 0;
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        }
        temp_t3 = arg0->unk44 + 1;
        arg0->unk44 = temp_t3;
        if (temp_t3 >= 0x38) {
            func_80B364D4();
        }
        // Duplicate return node #22. Try simplifying control flow for better match
    }
}

void func_80B35C84(void *arg0, GraphicsContext **arg1) {
    s32 sp74;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f20;
    f32 temp_f20_2;
    f32 temp_f22;
    f32 temp_f22_2;
    f32 temp_f24;
    f32 temp_f24_2;
    f32 temp_f26;
    f32 temp_f26_2;
    s32 temp_hi;
    s32 temp_s3;
    s32 temp_s3_2;
    s32 temp_v0;
    s32 phi_s7;
    s32 phi_s3;
    s32 phi_s3_2;

    if (arg0->unk48 != 0) {
        temp_hi = (s32) arg0->unk40 % 0xA;
        sp74 = temp_hi;
        arg0->unk40 = temp_hi;
        phi_s7 = 0x46;
    } else if (arg0->unk30 == 0xD) {
        sp74 = arg0->unk40;
        phi_s7 = 0x46;
    } else {
        temp_v0 = arg0->unk40;
        sp74 = temp_v0 % 0xA;
        phi_s7 = temp_v0 - arg0->unk44;
    }
    if (phi_s7 > 0) {
        temp_s1 = *arg1;
        SysMatrix_StatePush();
        phi_s3 = sp74;
        if (sp74 < phi_s7) {
            do {
                temp_f0 = (f32) phi_s3 * 0.14f;
                temp_f22 = arg0->unk0 + (arg0->unk18 * temp_f0) + (0.5f * arg0->unk24 * temp_f0 * temp_f0);
                temp_f24 = arg0->unk4 - Math_SinS((s16) ((s32) (phi_s3 * 0x27FFB) / 0x46));
                temp_f26 = arg0->unk8 + (arg0->unk20 * temp_f0) + (0.5f * arg0->unk2C * temp_f0 * temp_f0);
                temp_f20 = Rand_ZeroOne() * 0.003f;
                SysMatrix_InsertTranslation(temp_f22, temp_f24, temp_f26, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                temp_v0_2 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = -1;
                temp_v0_2->words.w0 = 0xFA000080;
                temp_v0_3 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xFB000000;
                temp_v0_3->words.w1 = 0xFF9600FF;
                func_8012C2DC(*arg1);
                SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
                temp_v0_4 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w0 = 0xDA380003;
                temp_v0_4->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_5 = temp_s1->polyXlu.p;
                temp_s3 = phi_s3 + 0xA;
                temp_s1->polyXlu.p = temp_v0_5 + 8;
                temp_v0_5->words.w1 = (u32) D_04023210;
                temp_v0_5->words.w0 = 0xDE000000;
                phi_s3 = temp_s3;
            } while (temp_s3 < phi_s7);
        }
        SysMatrix_StatePop();
        SysMatrix_StatePush();
        phi_s3_2 = sp74;
        if (sp74 < phi_s7) {
            do {
                temp_f0_2 = (f32) phi_s3_2 * 0.14f;
                temp_f22_2 = arg0->unkC + ((arg0->unk18 * temp_f0_2) + (0.5f * arg0->unk24 * temp_f0_2 * temp_f0_2));
                temp_f24_2 = arg0->unk10 - Math_SinS((s16) ((s32) (phi_s3_2 * 0x27FFB) / 0x46));
                temp_f26_2 = arg0->unk14 + (arg0->unk20 * temp_f0_2) + (0.5f * arg0->unk2C * temp_f0_2 * temp_f0_2);
                temp_f20_2 = Rand_ZeroOne() * 0.003f;
                SysMatrix_InsertTranslation(temp_f22_2, temp_f24_2, temp_f26_2, 0);
                Matrix_Scale(temp_f20_2, temp_f20_2, temp_f20_2, 1);
                temp_v0_6 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_6 + 8;
                temp_v0_6->words.w1 = -1;
                temp_v0_6->words.w0 = 0xFA000080;
                temp_v0_7 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_7 + 8;
                temp_v0_7->words.w0 = 0xFB000000;
                temp_v0_7->words.w1 = 0xFF9600FF;
                func_8012C2DC(*arg1);
                SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
                temp_v0_8 = temp_s1->polyXlu.p;
                temp_s1->polyXlu.p = temp_v0_8 + 8;
                temp_v0_8->words.w0 = 0xDA380003;
                temp_v0_8->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_9 = temp_s1->polyXlu.p;
                temp_s3_2 = phi_s3_2 + 0xA;
                temp_s1->polyXlu.p = temp_v0_9 + 8;
                temp_v0_9->words.w1 = (u32) D_04023210;
                temp_v0_9->words.w0 = 0xDE000000;
                phi_s3_2 = temp_s3_2;
            } while (temp_s3_2 < phi_s7);
        }
        SysMatrix_StatePop();
        temp_v0_10 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_10 + 8;
        temp_v0_10->words.w0 = 0xDA380003;
        temp_v0_10->words.w1 = (u32) &D_801D1DE0;
    }
}

void func_80B3610C(void *arg0, GraphicsContext **arg1) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s2;
    f32 temp_f0;
    f32 temp_f20;
    f32 temp_f24;
    f32 temp_f26;
    f32 temp_f28;
    f32 temp_f30;
    s32 temp_s3;
    s32 phi_s4;
    f32 phi_f0;
    f32 phi_f22;
    s32 phi_s3;

    if (arg0->unk48 != 0) {
        phi_s4 = 0x46;
    } else {
        phi_s4 = arg0->unk40;
    }
    if (phi_s4 > 0) {
        temp_s2 = *arg1;
        SysMatrix_StatePush();
        phi_s3 = 0;
        if (phi_s4 > 0) {
            do {
                if (arg0->unk48 != 0) {
                    phi_f0 = (f32) phi_s3;
                    phi_f22 = (f32) phi_s4 / 70.0f;
                } else {
                    temp_f0 = (f32) phi_s3;
                    phi_f0 = temp_f0;
                    phi_f22 = temp_f0 / 70.0f;
                }
                temp_f24 = arg0->unkC + (arg0->unk18 * phi_f0) + (0.5f * arg0->unk24 * phi_f0 * phi_f0);
                temp_f26 = arg0->unk10 + (arg0->unk1C * phi_f0) + (0.5f * arg0->unk28 * phi_f0 * phi_f0);
                temp_f28 = arg0->unk14 + (arg0->unk20 * phi_f0) + (0.5f * arg0->unk2C * phi_f0 * phi_f0);
                temp_f20 = Rand_ZeroOne() * 0.003f;
                temp_f30 = Rand_Centered();
                SysMatrix_InsertTranslation((temp_f30 * (100.0f * phi_f22)) + temp_f24, temp_f26, (Rand_Centered() * (30.0f * phi_f22)) + temp_f28, 0);
                Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
                temp_v0 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0 + 8;
                temp_v0->words.w1 = -1;
                temp_v0->words.w0 = 0xFA000080;
                temp_v0_2 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0xFF9600FF;
                temp_v0_2->words.w0 = 0xFB000000;
                func_8012C2DC(*arg1);
                SysMatrix_InsertMatrix(arg1 + 0x187FC, 1);
                temp_v0_3 = temp_s2->polyXlu.p;
                temp_s2->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                temp_v0_3->words.w1 = Matrix_NewMtx(*arg1);
                temp_v0_4 = temp_s2->polyXlu.p;
                temp_s3 = phi_s3 + 1;
                temp_s2->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = (u32) D_04023210;
                temp_v0_4->words.w0 = 0xDE000000;
                phi_s3 = temp_s3;
            } while (temp_s3 != phi_s4);
        }
        SysMatrix_StatePop();
        temp_v0_5 = temp_s2->polyXlu.p;
        temp_s2->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w0 = 0xDA380003;
        temp_v0_5->words.w1 = (u32) &D_801D1DE0;
    }
}

void func_80B363E8(void *arg0, void *arg1, void *arg2, void *arg3, void *arg4) {
    u8 temp_v0;

    arg0->unk34 = func_80B35B44;
    arg0->unk0 = (f32) arg2->unk0;
    arg0->unk4 = (s32) arg2->unk4;
    arg0->unk8 = (s32) arg2->unk8;
    temp_v0 = arg0->unk30;
    arg0->unkC = (f32) arg2->unk0;
    arg0->unk10 = (s32) arg2->unk4;
    arg0->unk14 = (s32) arg2->unk8;
    arg0->unk18 = (s32) arg3->unk0;
    arg0->unk1C = (s32) arg3->unk4;
    arg0->unk20 = (s32) arg3->unk8;
    arg0->unk24 = (s32) arg4->unk0;
    arg0->unk28 = (s32) arg4->unk4;
    arg0->unk48 = 0;
    arg0->unk0 = (f32) (arg0->unk0 + -4.0f);
    arg0->unkC = (f32) (arg0->unkC + 4.0f);
    arg0->unk2C = (s32) arg4->unk8;
    if ((temp_v0 == 0xB) || (temp_v0 == 0xC) || (temp_v0 == 0xD)) {
        arg0->unk38 = func_80B35C84;
        return;
    }
    if (temp_v0 == 0xE) {
        arg0->unk38 = func_80B3610C;
    }
}

void func_80B364D4(? *arg0) {
    arg0->unk34 = 0;
    arg0->unk38 = 0;
    func_80B35B24();
}

void EnGg_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGg *this = (EnGg *) thisx;
    ColliderCylinder *sp34;
    ColliderCylinder *temp_a1;
    u32 temp_t1;
    u32 temp_t4;
    u8 temp_t6;
    u8 temp_t8;

    if (gSaveContext.inventory.items[gItemSlots[0x33]] == 0x33) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 30.0f);
    this->actor.bgCheckFlags |= 0x400;
    SkelAnime_InitSV(globalCtx, &this->unk190, &D_0600F6C0, &D_0600F578, &this->unk1E4, &this->unk25C, 0x14);
    temp_a1 = &this->unk144;
    sp34 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinder(globalCtx, temp_a1, &this->actor, &D_80B36C00);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_80B36C38, &D_80B36C2C);
    temp_t6 = gSaveContext.weekEventReg[20] & 0xFB;
    temp_t8 = temp_t6 & 0xF7;
    gSaveContext.weekEventReg[20] = temp_t6;
    gSaveContext.weekEventReg[20] = temp_t8;
    gSaveContext.weekEventReg[20] = temp_t8 & 0xEF;
    temp_t1 = this->actor.flags & ~0x80;
    temp_t4 = temp_t1 | 0x2000000;
    this->actor.flags = temp_t1;
    this->actor.flags = temp_t4;
    this->unk308 = 0;
    this->unk309 = 0;
    this->unk304 = 0;
    this->unk30A = 0;
    this->actor.flags = temp_t4 | 0x10;
    this->unk310 = this->actor.home.pos.y;
    this->unk2DC = (s16) this->actor.cutscene;
    func_80B35B24(&this->unk344, globalCtx);
    func_80B35250(&this->actor);
}

void EnGg_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGg *this = (EnGg *) thisx;

}

void EnGg_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGg *this = (EnGg *) thisx;
    u32 temp_t3;
    u32 temp_t9;
    u8 temp_v0;
    u8 temp_v0_2;
    u8 temp_v0_3;
    SaveContext *phi_v1;

    if (globalCtx->actorCtx.unk4 == 0x64) {
        temp_t9 = this->actor.flags | 0x80;
        this->actor.flags = temp_t9;
        this->actor.flags = temp_t9 | 1;
    } else {
        temp_t3 = this->actor.flags & ~0x80;
        this->actor.flags = temp_t3;
        this->actor.flags = temp_t3 & ~1;
    }
    if ((gSaveContext.weekEventReg[19] & 0x80) != 0) {
        if (globalCtx->csCtx.state == 0) {
            this->actor.flags |= 1;
        } else {
            this->actor.flags &= -2;
        }
    }
    if (globalCtx->csCtx.state == 0) {
        temp_v0 = this->unk2DA;
        if ((temp_v0 != 0xE) && (temp_v0 != 0xB) && (temp_v0 != 0xC) && (temp_v0 != 0xD)) {
            func_80B364D4(&this->unk344, globalCtx);
        }
    }
    temp_v0_2 = this->unk2DA;
    phi_v1 = &gSaveContext;
    if (((temp_v0_2 == 0xE) || (temp_v0_2 == 0xB) || (temp_v0_2 == 0xC) || (temp_v0_2 == 0xD)) && (this->unk309 == 1)) {
        func_80B35968(this, globalCtx);
        phi_v1 = &gSaveContext;
    }
    temp_v0_3 = phi_v1->weekEventReg[91];
    if (((temp_v0_3 & 0x10) == 0) && (((phi_v1->weekEventReg[19] & 0x80) != 0) || ((this->actor.flags & 0x80) == 0x80) || (this->unk308 == 1))) {
        phi_v1->weekEventReg[91] = temp_v0_3 | 0x10;
    }
    this->actionFunc(this, globalCtx);
    func_80B34F70(this);
    func_80B35108(&this->actor, globalCtx);
    func_80B34FB4(this, globalCtx);
    Actor_SetVelocityAndMoveXYRotation(&this->actor);
    SkelAnime_FrameUpdateMatrix(&this->unk190);
    if (globalCtx->csCtx.state == 0) {
        func_80B3584C(this);
    } else {
        this->unk2E8 = 0;
    }
    func_80B35634(&this->actor, globalCtx);
    func_800E9250(globalCtx, &this->actor, &this->unk1D8, &this->unk1DE, (bitwise Vec3f) this->actor.focus.pos.x, this->actor.focus.pos.y, this->actor.focus.pos.z);
    func_80B351A4(this);
}

s32 func_80B368B0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg5) {
    if (arg1 == 2) {
        SysMatrix_InsertZRotation_s(arg5->unk2E8, 1);
    }
    return 0;
}

void func_80B368F0(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4) {
    f32 sp38;
    f32 sp34;
    f32 sp30;
    f32 sp28;
    f32 sp24;
    u8 temp_v0;

    sp30.unk0 = D_80B36DD8.unk0;
    sp30.unk4 = (s32) D_80B36DD8.unk4;
    sp30.unk8 = (s32) D_80B36DD8.unk8;
    sp24.unk0 = D_80B36DE4.unk0;
    sp24.unk4 = (s32) D_80B36DE4.unk4;
    sp24.unk8 = (s32) D_80B36DE4.unk8;
    temp_v0 = arg4->unk2DA;
    if (temp_v0 == 0xE) {
        sp34 = 3.0f;
        sp38 = -1.0f;
        sp28 = -0.07f;
        arg4->unk309 = 1;
    } else if ((temp_v0 == 0xB) || (temp_v0 == 0xC) || (temp_v0 == 0xD)) {
        sp30 = 0x40400000;
        sp24 = 0x3F000000;
        arg4->unk309 = 1;
    } else {
        arg4->unk309 = 0;
    }
    if (arg1 == 4) {
        SysMatrix_MultiplyVector3fByState(&D_80B36DF0, arg4 + 0x320);
        SysMatrix_StatePush();
        Matrix_RotateY(arg4->shape.rot.y, 0U);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp30, arg4 + 0x32C);
        SysMatrix_MultiplyVector3fByState((Vec3f *) &sp24, arg4 + 0x338);
        SysMatrix_StatePop();
    }
}

void EnGg_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnGg *this = (EnGg *) thisx;
    Gfx *sp3C;
    Gfx *sp38;
    ? (*temp_v0)(? *, GlobalContext *, GraphicsContext *);
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s1;
    GraphicsContext *phi_a2;

    temp_v0 = this->unk37C;
    temp_a2 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a2;
    if (temp_v0 != 0) {
        temp_v0(&this->unk344, globalCtx, temp_a2);
    }
    phi_a2 = globalCtx->state.gfxCtx;
    if ((gSaveContext.weekEventReg[19] & 0x80) != 0) {
        func_8012C28C(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w0 = 0xDB060020;
        sp3C = temp_v0_2;
        sp3C->words.w1 = Lib_SegmentedToVirtual(*(&D_80B36DFC + (this->unk2E2 * 4)));
        temp_s1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80B368B0, func_80B368F0, &this->actor, temp_s1->polyOpa.p);
        goto block_7;
    }
    if (((this->actor.flags & 0x80) == 0x80) || (this->unk308 == 1)) {
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_3 = temp_s1->polyXlu.p;
        temp_s1->polyXlu.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDB060020;
        sp38 = temp_v0_3;
        sp38->words.w1 = Lib_SegmentedToVirtual(*(&D_80B36DFC + (this->unk2E2 * 4)));
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk190.skeleton, this->unk190.limbDrawTbl, (s32) this->unk190.dListCount, func_80B368B0, func_80B368F0, &this->actor, temp_s1->polyXlu.p);
block_7:
        phi_a2 = globalCtx->state.gfxCtx;
    }
    func_8012C2DC(phi_a2);
}

