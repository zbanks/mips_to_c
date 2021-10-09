? EffectSsBomb2_SpawnLayered(GlobalContext *, f32 *, ? *, ? *, s32, s32); /* extern */
s32 func_800B8718(EnGs *, GlobalContext *);         /* extern */
? func_800B874C(Actor *, GlobalContext *, ?, ?);    /* extern */
? func_800BC848(EnGs *, GlobalContext *, s16, s16); /* extern */
? func_8013E8F8(Actor *, GlobalContext *, f32, f32, s32, s32, s32); /* extern */
? func_80165658(s16, s16);                          /* extern */
? func_8016566C(s16, s16);                          /* extern */
? func_80165690();                                  /* extern */
? func_801A5080(?);                                 /* extern */
s32 func_801A5100();                                /* extern */
s8 func_80997A90(s16 arg0, s16 arg1);               /* static */
void func_80997AFC(s8 arg0, Color_RGB8 *arg1, Color_RGB8 *); /* static */
void func_80997D14(EnGs *arg0, GlobalContext *arg1, Actor *, GlobalContext *); /* static */
void func_80997D38(Actor *arg0, GlobalContext *arg1); /* static */
void func_80997DEC(EnGs *arg0, GlobalContext *arg1); /* static */
void func_80997E4C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80997FF0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80998040(Actor *arg0, GlobalContext *arg1); /* static */
void func_8099807C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80998300(Actor *arg0, GlobalContext *arg1); /* static */
f32 func_80998334(Actor *arg0, GlobalContext *arg1, f32 *arg2, f32 *arg3, s16 *arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9); /* static */
void func_809984F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_809985B8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80998704(Actor *arg0, GlobalContext *arg1); /* static */
void func_8099874C(EnGs *arg0, GlobalContext *arg1); /* static */
void func_809989B4(EnGs *arg0, GlobalContext *arg1, Actor *, EnGs *); /* static */
void func_809989F4(Actor *arg0, GlobalContext *arg1); /* static */
Actor *func_80998A48(EnGs *arg0, GlobalContext *arg1, Actor *, EnGs *); /* static */
Actor *func_80998BBC(EnGs *arg0, GlobalContext *, Actor *, EnGs *); /* static */
Actor *func_80998D44(EnGs *arg0, GlobalContext *, Actor *, EnGs *); /* static */
Actor *func_80998F9C(EnGs *arg0, GlobalContext *arg1, Actor *, EnGs *); /* static */
void func_80999584(void *arg0, ? *arg1);            /* static */
Actor *func_809995A4(EnGs *arg0, GlobalContext *arg1, Actor *, EnGs *); /* static */
void func_80999A8C(Actor *arg0, ? arg1);            /* static */
void func_80999AC0(Actor *arg0, s8);                /* static */
void func_80999B34(EnGs *arg0);                     /* static */
void func_80999BC8(Actor *arg0, GlobalContext *arg1); /* static */
extern ? D_06000950;
extern ? D_060009D0;
extern ? D_06000A60;
static ColliderCylinderInit D_8099A3A0 = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x15, 0x30, 0, {0, 0, 0}},
};
static CollisionCheckInfoInit2 D_8099A3CC = {0, 0, 0, 0, 0xFF};
static DamageTable D_8099A3D8 = {
    {
        0xE0,
        0xF0,
        0,
        0xC0,
        0xE0,
        0xE0,
        0,
        0xE0,
        0xD0,
        0xF0,
        0xD0,
        0xB0,
        0xB0,
        0xB0,
        0xE0,
        0xE0,
        0xD0,
        0,
        0,
        0,
        0,
        0,
        0xE0,
        0xE0,
        0xE0,
        0xE0,
        0,
        0,
        0,
        0,
        0,
        0xC0,
    },
};
static ? D_8099A3F8;                                /* unable to generate initializer */
static InitChainEntry D_8099A404;                   /* unable to generate initializer */
static ? D_8099A408;                                /* unable to generate initializer */
static ? D_8099A418;                                /* unable to generate initializer */
static ? D_8099A41B;                                /* unable to generate initializer */
static ? D_8099A41E;                                /* unable to generate initializer */
static Vec3f D_8099A424 = {0.0f, -0.3f, 0.0f};
static Color_RGBA8 D_8099A430 = {0xC8, 0xC8, 0xC8, 0x80};
static Color_RGBA8 D_8099A434 = {0x64, 0x64, 0x64, 0};
static ? D_8099A438;                                /* unable to generate initializer */
static ? D_8099A444;                                /* unable to generate initializer */
static ? D_8099A450;                                /* unable to generate initializer */
static ? D_8099A458;                                /* unable to generate initializer */
static f32 *D_8099A4EC = (f32 *)0x3F4CCCCD;         /* const */
static s16 *D_8099A4F0 = (s16 *)0x3BA3D70A;         /* const */

typedef struct EnGs {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderCylinder unk144;           /* inferred */
    /* 0x0190 */ void (*unk190)(Actor *, GlobalContext *); /* inferred */
    /* 0x0194 */ s8 unk194;                         /* inferred */
    /* 0x0195 */ s8 unk195;                         /* inferred */
    /* 0x0196 */ s8 unk196;                         /* inferred */
    /* 0x0197 */ char pad197[0x1];                  /* maybe part of unk196[2]? */
    /* 0x0198 */ s16 unk198;                        /* inferred */
    /* 0x019A */ s16 unk19A;                        /* inferred */
    /* 0x019C */ u8 unk19C;                         /* inferred */
    /* 0x019D */ char pad19D[0x1];                  /* maybe part of unk19C[2]? */
    /* 0x019E */ s16 unk19E;                        /* inferred */
    /* 0x01A0 */ s16 unk1A0;                        /* inferred */
    /* 0x01A2 */ s16 unk1A2;                        /* inferred */
    /* 0x01A4 */ s16 unk1A4;                        /* inferred */
    /* 0x01A6 */ s16 unk1A6;                        /* inferred */
    /* 0x01A8 */ s16 unk1A8;                        /* inferred */
    /* 0x01AA */ char pad1AA[0x6];                  /* maybe part of unk1A8[4]? */
    /* 0x01B0 */ Vec3f unk1B0;                      /* inferred */
    /* 0x01BC */ Vec3f unk1BC;                      /* inferred */
    /* 0x01C8 */ char pad1C8[0x2C];
    /* 0x01F4 */ u8 unk1F4;                         /* inferred */
    /* 0x01F5 */ u8 unk1F5;                         /* inferred */
    /* 0x01F6 */ u8 unk1F6;                         /* inferred */
    /* 0x01F7 */ Color_RGB8 unk1F7;                 /* inferred */
    /* 0x01FA */ Color_RGB8 unk1FA;                 /* inferred */
    /* 0x01FD */ char pad1FD[0x3];                  /* maybe part of unk1FA[2]? */
    /* 0x0200 */ f32 unk200;                        /* inferred */
    /* 0x0204 */ s32 unk204;                        /* inferred */
    /* 0x0208 */ s32 unk208;                        /* inferred */
    /* 0x020C */ s32 unk20C;                        /* inferred */
    /* 0x0210 */ s16 unk210;                        /* inferred */
    /* 0x0212 */ s16 unk212;                        /* inferred */
    /* 0x0214 */ char pad214[0x2];                  /* maybe part of unk212[2]? */
    /* 0x0216 */ s16 unk216;                        /* inferred */
    /* 0x0218 */ s16 unk218;                        /* inferred */
    /* 0x021A */ char pad21A[0x2];                  /* maybe part of unk218[2]? */
    /* 0x021C */ s16 unk21C;                        /* inferred */
    /* 0x021E */ s16 unk21E;                        /* inferred */
} EnGs;                                             /* size 0x220 */

s8 func_80997A90(s16 arg0, s16 arg1) {
    s8 phi_v1;

    if ((arg0 == 0) || ((arg0 != 1) && (arg0 != 2) && (arg0 == 3))) {
        phi_v1 = 0;
    } else {
        phi_v1 = (s8) (((u32) gSaveContext.roomInf[126][1] >> (arg1 * 3)) & 7);
    }
    return phi_v1;
}

void func_80997AFC(s8 arg0, Color_RGB8 *arg1) {
    void *temp_t8;

    temp_t8 = (arg0 * 3) + &D_8099A3F8;
    arg1->r = temp_t8->unk0;
    arg1->g = temp_t8->unk1;
    arg1->b = temp_t8->unk2;
}

void EnGs_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGs *this = (EnGs *) thisx;
    Color_RGB8 *sp24;
    Color_RGB8 *temp_a2;
    s16 temp_t8;

    Actor_ProcessInitChain(&this->actor, &D_8099A404);
    temp_t8 = this->actor.world.rot.z;
    this->unk208 = -1;
    this->unk204 = 1;
    this->unk195 = this->actor.params & 0x1F;
    this->unk196 = ((s32) this->actor.params >> 5) & 0x7F;
    this->actor.params = ((s32) this->actor.params >> 0xC) & 0xF;
    this->actor.world.rot.z = 0;
    this->unk198 = temp_t8;
    Collider_InitAndSetCylinder(globalCtx, &this->unk144, &this->actor, &D_8099A3A0);
    CollisionCheck_SetInfo2(&this->actor.colChkInfo, &D_8099A3D8, &D_8099A3CC);
    this->actor.targetMode = 6;
    this->unk216 = 0;
    this->unk218 = 0;
    this->unk200 = 1.0f;
    this->unk194 = func_80997A90(this->actor.params, this->unk198);
    temp_a2 = &this->unk1FA;
    sp24 = temp_a2;
    func_80997AFC(this->unk194, temp_a2, temp_a2);
    this->unk1F4 = temp_a2->r;
    this->unk1F5 = temp_a2->g;
    this->unk1F6 = temp_a2->b;
    Math_Vec3f_Copy(&this->unk1B0, &D_801C5DB0);
    Math_Vec3f_Copy(&this->unk1BC, &D_801C5DB0);
    func_8013E3B8(&this->actor, (s16 []) &this->unk212, 2);
    func_801A5080(0);
    if (this->actor.params == 1) {
        Actor_SetScale(&this->actor, 0.15f);
        this->unk144.dim.radius = (s16) (s32) ((f32) this->unk144.dim.radius * 1.5f);
        this->unk144.dim.height = (s16) (s32) ((f32) this->unk144.dim.height * 1.5f);
    }
    func_80997D14(this, globalCtx);
}

void EnGs_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGs *this = (EnGs *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk144);
    func_80165690();
}

void func_80997D14(EnGs *arg0, GlobalContext *arg1) {
    arg0->unk19A &= 0xFDFF;
    arg0->unk190 = func_80997D38;
}

void func_80997D38(Actor *arg0, GlobalContext *arg1) {
    f32 temp_f0;

    if (func_80152498(arg1 + 0x4908) == 0) {
        temp_f0 = *(&D_8099A408 + (arg0->params * 4));
        if (arg0->xzDistToPlayer <= temp_f0) {
            func_8013E8F8(arg0, arg1, temp_f0, temp_f0, 0, 0x2000, 0x2000);
        }
    }
    if (arg0->params != 2) {
        func_800B874C(arg0, arg1, 0x42C80000, 0x42C80000);
    }
}

void func_80997DEC(EnGs *arg0, GlobalContext *arg1) {
    arg0 = arg0;
    if (Player_GetMask(arg1) == 1) {
        arg0->unk210 = 0x20D1;
    } else {
        arg0->unk210 = 0x20D0;
    }
    arg0->unk19A |= 0x200;
    arg0->unk190 = func_80997E4C;
}

void func_80997E4C(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0_2;
    MessageContext *temp_a0;
    s16 temp_v0_3;
    s32 temp_a1;
    s32 temp_v1;
    u16 temp_t2;
    u16 temp_t4;
    u16 temp_t6;
    u16 temp_t8;
    u16 temp_t8_2;
    u16 temp_v0_2;
    u32 temp_v0;
    u16 phi_a1;

    temp_a0 = arg1 + 0x4908;
    arg0 = arg0;
    arg1 = arg1;
    temp_v0 = func_80152498(temp_a0);
    switch (temp_v0) {
    case 0:
        func_801518B0(arg1, arg0->unk210, arg0);
        return;
    case 4:
    case 5:
    case 6:
        temp_a0_2 = arg1;
        arg0 = arg0;
        arg1 = arg1;
        if (func_80147624(temp_a0_2) != 0) {
            temp_v0_2 = arg1->msgCtx.unk11F04;
            if (temp_v0_2 != 0x20D0) {
                if (temp_v0_2 != 0x20D1) {
                    func_80997D14((EnGs *) arg0, arg1, arg0, arg1);
                    // Duplicate return node #22. Try simplifying control flow for better match
                    return;
                }
                temp_v0_3 = arg0->params;
                if (temp_v0_3 != 0) {
                    if (temp_v0_3 != 1) {
                        if (temp_v0_3 != 2) {
                            if (temp_v0_3 != 3) {
                                phi_a1 = arg0->unk210;
                            } else {
                                temp_t4 = arg0->unk195 + 0x20B0;
                                arg0->unk210 = temp_t4;
                                phi_a1 = temp_t4 & 0xFFFF;
                            }
                        } else {
                            temp_t8 = arg0->unk195 + 0x20F7;
                            arg0->unk210 = temp_t8;
                            phi_a1 = temp_t8 & 0xFFFF;
                        }
                    } else {
                        temp_t6 = arg0->unk195 + 0x20F3;
                        arg0->unk210 = temp_t6;
                        phi_a1 = temp_t6 & 0xFFFF;
                    }
                } else {
                    temp_t8_2 = arg0->unk195 + 0x20D3;
                    temp_a1 = temp_t8_2 & 0xFFFF;
                    arg0->unk210 = temp_t8_2;
                    phi_a1 = (u16) temp_a1;
                    if (temp_a1 >= 0x20D4) {
                        temp_v1 = temp_a1 - 0x20D4;
                        if (temp_a1 < 0x20E8) {
                            temp_t2 = temp_v1 + 0x2103;
                            if ((temp_v1 + 0x36) == gSaveContext.inventory.items[(gItemSlots + 0x36)[temp_v1]]) {
                                arg0->unk210 = temp_t2;
                                phi_a1 = temp_t2 & 0xFFFF;
                            }
                        }
                    }
                }
                func_80151938(arg1, phi_a1);
                return;
            }
            func_80997D14((EnGs *) arg0, arg1, arg0, arg1);
            return;
        }
    default:
        return;
    }
}

void func_80997FF0(Actor *arg0, GlobalContext *arg1) {
    if (func_8013E2D4(arg0, arg1->unk_1879C[0], -1, 1) != 0) {
        func_80998040(arg0, arg1);
    }
}

void func_80998040(Actor *arg0, GlobalContext *arg1) {
    func_80152434(arg1, 1U);
    arg0->unk190 = func_8099807C;
}

void func_8099807C(Actor *arg0, GlobalContext *arg1) {
    u16 temp_t6;
    u16 temp_v0;

    temp_v0 = arg1->msgCtx.unk1202A;
    if (temp_v0 != 0) {
        if (temp_v0 != 3) {
            if (temp_v0 != 4) {
                if (temp_v0 != 0x1A) {
                    return;
                }
                goto block_21;
            }
            goto block_20;
        }
        temp_t6 = arg1->msgCtx.unk1202E;
        switch (temp_t6) {
        case 7:
        case 8:
            if (Flags_GetSwitch(arg1, (s32) arg0->unk196) == 0) {
                Actor_Spawn(&arg1->actorCtx, arg1, 0x10, arg0->world.pos.x, arg0->world.pos.y + 40.0f, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 2);
                Audio_PlayActorSound2(arg0, 0x28E7U);
                Actor_SetSwitchFlag(arg1, (s32) arg0->unk196);
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        case 10:
            if (Flags_GetSwitch(arg1, (s32) arg0->unk196) == 0) {
                Actor_Spawn(&arg1->actorCtx, arg1, 0x10, arg0->world.pos.x, arg0->world.pos.y + 40.0f, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 7);
                Audio_PlayActorSound2(arg0, 0x28E7U);
                Actor_SetSwitchFlag(arg1, (s32) arg0->unk196);
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        case 0:
            if ((arg0->params == 1) && (gSaveContext.playerForm == 3)) {
                arg0->unk194 = 1;
                arg0->unk19C = 5;
                arg0->unk19A = (s16) (arg0->unk19A | 1);
                func_80999AC0(arg0, 3);
                func_809984F4(arg0, arg1);
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        case 2:
            if ((arg0->params == 1) && (gSaveContext.playerForm == 2)) {
                arg0->unk194 = 3;
                arg0->unk19C = 5;
                arg0->unk19A = (s16) (arg0->unk19A | 1);
                func_80999AC0(arg0, 3);
                func_809984F4(arg0, arg1);
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        case 1:
            if ((arg0->params == 1) && (gSaveContext.playerForm == 1)) {
                arg0->unk194 = 2;
                arg0->unk19C = 5;
                arg0->unk19A = (s16) (arg0->unk19A | 1);
                func_80999AC0(arg0, 3);
                func_809984F4(arg0, arg1);
                return;
            }
            // Duplicate return node #22. Try simplifying control flow for better match
            return;
        }
    } else {
block_20:
        func_80998300(arg0, arg1);
block_21:
        func_80997D14((EnGs *) arg0, arg1);
    default:
    }
}

void func_80998300(Actor *arg0, GlobalContext *arg1) {
    if (arg0->cutscene != -1) {
        ActorCutscene_Stop(arg1->unk_1879C[0]);
    }
}

f32 func_80998334(Actor *arg0, GlobalContext *arg1, f32 *arg2, f32 *arg3, s16 *arg4, f32 arg5, f32 arg6, f32 arg7, s32 arg8, s32 arg9) {
    f32 sp2C;
    f32 sp24;
    f32 temp_f2;

    sp2C = Math_SmoothStepToF(arg2, *arg3, arg5, arg6, arg7);
    if (arg9 == 0) {
        sp2C = Math_SmoothStepToF(arg2, *arg3, arg5, arg6, arg7);
        temp_f2 = 1.0f / (f32) arg8;
        sp24 = temp_f2;
        arg0->unk1B0 = (f32) ((*arg2 * __sinf((f32) ((s32) *arg4 % arg8) * temp_f2 * 360.0f * 0.017453292f)) + 1.0f);
        arg0->unk1B4 = (f32) (1.0f - (*arg2 * __sinf((f32) ((s32) *arg4 % arg8) * temp_f2 * 360.0f * 0.017453292f)));
        *arg4 += 1;
    }
    return sp2C;
}

void func_809984F4(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_v0;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    do {
        temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, 6, 0xEF);
        phi_s0_2 = temp_v0;
        if (temp_v0 != 0) {
            if ((arg0 != temp_v0) && (temp_v0->unk194 == arg0->unk194)) {
                temp_v0->unk19A = (s16) (temp_v0->unk19A | 1);
                func_80999AC0(temp_v0);
                temp_v0->unk19C = 3;
                func_80998704(temp_v0, arg1);
            }
            phi_s0_2 = temp_v0->next;
        }
        phi_s0 = phi_s0_2;
    } while (phi_s0_2 != 0);
    func_800B7298(arg1, arg0, 7U);
    arg0->unk190 = func_809985B8;
}

void func_809985B8(Actor *arg0, GlobalContext *arg1) {
    Vec3f sp38;
    Actor *temp_v0_2;
    Vec3f *temp_s0;
    s32 temp_s2;
    s32 temp_v0;
    Actor *phi_s0;
    Actor *phi_s0_2;

    if (func_8013E2D4(arg0, arg0->unk212, -1, 0) != 0) {
        temp_s2 = arg1->actorCtx.actorList[2].first;
        Matrix_RotateY(arg0->shape.rot.y, 0U);
        SysMatrix_GetStateTranslationAndScaledZ(160.0f, &sp38);
        temp_s0 = temp_s2 + 0x24;
        Math_Vec3f_Sum(temp_s0, &sp38, temp_s0);
        Math_Vec3f_Copy(temp_s2 + 0x108, temp_s0);
        arg0->unk200 = 0.0f;
        temp_v0 = arg0->unk198 * 3;
        gSaveContext.roomInf[126][1] = (gSaveContext.roomInf[126][1] & ~(7 << temp_v0)) | ((arg0->unk194 & 7) << temp_v0);
        phi_s0 = NULL;
        do {
            temp_v0_2 = func_ActorCategoryIterateById(arg1, phi_s0, 6, 0xEF);
            phi_s0_2 = temp_v0_2;
            if (temp_v0_2 != 0) {
                if ((temp_v0_2 != arg0) && (temp_v0_2->params == 2) && (arg0->unk198 == temp_v0_2->unk198)) {
                    temp_v0_2->unk200 = 0.0f;
                    temp_v0_2->unk194 = (s8) arg0->unk194;
                }
                phi_s0_2 = temp_v0_2->next;
            }
            phi_s0 = phi_s0_2;
        } while (phi_s0_2 != 0);
        func_80998704(arg0, arg1);
    }
}

void func_80998704(Actor *arg0, GlobalContext *arg1) {
    arg0->unk19D = 0;
    arg0->unk19A = (s16) (arg0->unk19A & 0xFEFB);
    Audio_PlayActorSound2(arg0, 0x298CU);
    arg0->unk190 = func_8099874C;
}

void func_8099874C(EnGs *arg0, GlobalContext *arg1) {
    EnGs *temp_a0;
    EnGs *temp_a3;
    s32 temp_v1;
    s8 temp_t0;
    u8 temp_t6;
    u8 temp_v1_2;
    Actor *phi_a2;
    EnGs *phi_a3;
    s32 phi_v1;
    Actor *phi_a2_2;
    Actor *phi_v0;

    temp_a3 = arg0;
    temp_t6 = temp_a3->unk19C;
    phi_a2 = NULL;
    phi_a3 = temp_a3;
    phi_a2_2 = NULL;
    switch (temp_t6) {
    case 0:
        temp_a0 = temp_a3;
        arg0 = temp_a3;
        phi_v0 = func_80998A48(temp_a0, arg1, NULL, temp_a3);
block_7:
        phi_a2 = phi_v0;
        phi_a3 = arg0;
        break;
    case 1:
        arg0 = temp_a3;
        phi_v0 = func_80998BBC(temp_a3, arg1, NULL, temp_a3);
        goto block_7;
    case 2:
        arg0 = temp_a3;
        phi_v0 = func_80998D44(temp_a3, arg1, NULL, temp_a3);
        goto block_7;
    case 3:
    case 5:
        arg0 = temp_a3;
        phi_v0 = func_80998F9C(temp_a3, arg1, NULL, temp_a3);
        goto block_7;
    case 4:
        arg0 = temp_a3;
        phi_v0 = func_809995A4(temp_a3, arg1, NULL, temp_a3);
        goto block_7;
    }
    if (phi_a2 == 0) {
        phi_a3->unk216 = 0;
        if ((phi_a3->unk19C == 5) && (phi_a3->unk194 != 0)) {
            arg0 = phi_a3;
            ActorCutscene_Stop(phi_a3->unk212);
            temp_t0 = arg0->unk194;
            phi_v1 = 0;
            phi_a2_2 = (Actor *)1;
            do {
                temp_v1 = phi_v1 + 3;
                phi_v1 = temp_v1;
                if (temp_t0 != (((u32) gSaveContext.roomInf[126][1] >> phi_v1) & 7)) {

                }
            } while (temp_v1 != 0xC);
            if (phi_a2_2 != 0) {
                arg0->unk20C = -1;
                if (temp_t0 != 1) {
                    if (temp_t0 != 2) {
                        if (temp_t0 != 3) {

                        } else if ((gSaveContext.weekEventReg[77] & 0x10) == 0) {
                            arg0->unk20C = 6;
                            gSaveContext.weekEventReg[77] |= 0x10;
                        }
                    } else if ((gSaveContext.weekEventReg[77] & 0x20) == 0) {
                        arg0->unk20C = 6;
                        gSaveContext.weekEventReg[77] |= 0x20;
                    }
                } else if ((gSaveContext.weekEventReg[77] & 8) == 0) {
                    arg0->unk20C = 6;
                    gSaveContext.weekEventReg[77] |= 8;
                }
                temp_v1_2 = gSaveContext.weekEventReg[90];
                if ((temp_v1_2 & 0x10) == 0) {
                    gSaveContext.weekEventReg[90] = temp_v1_2 | 0x10;
                    arg0->unk20C = 0xC;
                }
                if (arg0->unk20C > 0) {
                    func_809989B4(arg0, arg1, phi_a2_2, arg0);
                    return;
                }
                func_80997D14(arg0, arg1, phi_a2_2, (GlobalContext *) arg0);
                return;
            }
            func_80997D14(arg0, arg1, phi_a2_2, (GlobalContext *) arg0);
            return;
        }
        func_80997D14(phi_a3, arg1, phi_a2, (GlobalContext *) phi_a3);
        // Duplicate return node #33. Try simplifying control flow for better match
    }
}

void func_809989B4(Actor *arg0, GlobalContext *arg1) {
    func_800B8A1C(arg0, arg1, arg0->unk20C, arg0->xzDistToPlayer, arg0->yDistToPlayer);
    arg0->unk190 = func_809989F4;
}

void func_809989F4(Actor *arg0, GlobalContext *arg1) {
    if (Actor_HasParent(arg0, arg1) != 0) {
        arg0->parent = NULL;
        func_80997D14((EnGs *) arg0, arg1);
        return;
    }
    func_800B8A1C(arg0, arg1, arg0->unk20C, arg0->xzDistToPlayer, arg0->yDistToPlayer);
}

Actor *func_80998A48(Actor *arg0, GlobalContext *arg1) {
    Actor *sp3C;
    u8 temp_v0;
    Actor *phi_v1;

    temp_v0 = arg0->unk19D;
    phi_v1 = (Actor *)-1;
    if (temp_v0 == 0) {
        arg0->unk216 = 0xC8;
        sp3C = (Actor *)-1;
        Audio_PlayActorSound2(arg0, 0x3831U);
        arg0->unk197 = (s8) (arg0->unk197 + 1);
        arg0->unk1D4 = 0;
        arg0->unk19A = (s16) (arg0->unk19A | 1);
        arg0->unk21C = 5;
        arg0->unk21E = 0x28;
        arg0->unk197 = (s8) (arg0->unk197 & 0xF);
        arg0->unk19D = 1U;
        arg0->unk1DC = 0.5f;
        arg0->unk1E0 = 0.0f;
    } else if (temp_v0 == 1) {
        sp3C = (Actor *)-1;
        if (func_80998334(arg0, arg1, arg0 + 0x1DC, arg0 + 0x1E0, arg0 + 0x1D4, 0.8f, 0.007f, 0.001f, 7, 0) == 0.0f) {
            if ((arg0->params != 0) && (func_801690CC(arg1) == 0) && (func_80152498(&arg1->msgCtx) == 0)) {
                arg0->unk216 = 0;
                Audio_PlayActorSound2(arg0, 0x4846U);
                func_801518B0(arg1, 0x20D2U, NULL);
            }
            arg0->unk19A = (s16) (arg0->unk19A & 0xFFFE);
            phi_v1 = NULL;
        }
    }
    return phi_v1;
}

Actor *func_80998BBC(Actor *arg0) {
    Actor *sp34;
    u8 temp_v0;
    Actor *phi_v1;

    temp_v0 = arg0->unk19D;
    phi_v1 = (Actor *)-1;
    if (temp_v0 == 0) {
        arg0->unk216 = 0xC8;
        sp34 = (Actor *)-1;
        Audio_PlayActorSound2(arg0, 0x3831U);
        arg0->unk197 = (s8) (arg0->unk197 - 1);
        arg0->unk1D4 = 0;
        arg0->unk19A = (s16) (arg0->unk19A | 1);
        arg0->unk21C = 5;
        arg0->unk21E = 0x28;
        arg0->unk197 = (s8) (arg0->unk197 & 0xF);
        arg0->unk19D = 1U;
        arg0->unk1DC = 0.3f;
        arg0->unk1E0 = 0.0f;
    } else if (temp_v0 == 1) {
        arg0->unk1A2 = (s16) (s32) ((f32) ((s32) arg0->unk1D4 % 8) * 0.125f * 360.0f * 182.04445f);
        arg0->unk1A8 = (s16) -(s32) arg0->unk1A2;
        sp34 = (Actor *)-1;
        if (func_80998334(arg0 + 0x1DC, arg0 + 0x1E0, arg0 + 0x1D4, (f32 *)0x3F4CCCCD, (s16 *)0x3BA3D70A, 0.001f, 1e-44.0f, 0.0f) == 0.0f) {
            arg0->unk19A = (s16) (arg0->unk19A & 0xFFFE);
            phi_v1 = NULL;
        }
    }
    return phi_v1;
}

Actor *func_80998D44(Actor *arg0) {
    Actor *sp3C;
    u8 temp_v0;

    sp3C = (Actor *)-1;
    temp_v0 = arg0->unk19D;
    if (temp_v0 == 0) {
        arg0->unk216 = 0xC8;
        arg0->unk1DC = (f32) (arg0->unk1B4 - 1.0f);
        arg0->unk1E0 = -0.8f;
        Audio_PlayActorSound2(arg0, 0x286DU);
        arg0->unk19A = (s16) (arg0->unk19A | 1);
        arg0->unk21C = 0x28;
        arg0->unk21E = 0xB;
        arg0->unk19D = (u8) (arg0->unk19D + 1);
    } else if (temp_v0 == 1) {
        arg0->unk1B4 = (f32) (arg0->unk1DC + 1.0f);
        if (Math_SmoothStepToF(arg0 + 0x1DC, arg0->unk1E0, 1.0f, 0.4f, 0.001f) == 0.0f) {
            arg0->unk216 = 0;
            arg0->unk1D4 = 0;
            arg0->unk19D = (u8) (arg0->unk19D + 1);
        }
    } else if (temp_v0 == 2) {
        arg0->unk1D4 = (s16) (arg0->unk1D4 + 1);
        if ((s32) arg0->unk1D4 >= 0x64) {
            arg0->unk216 = 0xC8;
            arg0->unk19D = (u8) (arg0->unk19D + 1);
            arg0->unk1DC = (f32) (arg0->unk1B4 - 1.0f);
            arg0->unk1E0 = 0.0f;
        }
    } else if (temp_v0 == 3) {
        arg0->unk1B4 = (f32) (arg0->unk1DC + 1.0f);
        if (Math_SmoothStepToF(arg0 + 0x1DC, arg0->unk1E0, 1.0f, 0.5f, 0.001f) == 0.0f) {
            arg0->unk216 = 0;
            arg0->unk1E0 = 0.0f;
            arg0->unk1D4 = 0;
            arg0->unk21C = 0xA;
            arg0->unk21E = 0xA;
            arg0->unk1DC = 0.5f;
            Audio_PlayActorSound2(arg0, 0x3831U);
            arg0->unk19D = (u8) (arg0->unk19D + 1);
        }
    } else if ((temp_v0 == 4) && (func_80998334(arg0, arg0 + 0x1DC, arg0 + 0x1E0, arg0 + 0x1D4, (s16 *)0x3F800000, 0.03f, 0.001f, 7e-45.0f, 0) == 0.0f)) {
        arg0->unk19A = (s16) (arg0->unk19A & 0xFFFE);
        sp3C = NULL;
    }
    return sp3C;
}

Actor *func_80998F9C(Actor *arg0, GlobalContext *arg1) {
    Actor *sp4C;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    s16 sp3A;
    f32 *sp2C;
    f32 temp_f10;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s32 temp_v1;
    u8 temp_v0;
    u8 phi_v0;
    s16 phi_v0_2;
    s16 phi_v0_3;

    sp4C = (Actor *)-1;
    sp3A = arg0->unk1A0;
    temp_v0 = arg0->unk19D;
    phi_v0 = temp_v0;
    if (temp_v0 == 0) {
        arg0->unk1DC = 0.0f;
        arg0->unk1E0 = 90.0f;
        arg0->unk19D = 1U;
        arg0->unk21C = 2;
        arg0->unk21E = 0x28;
        arg0->unk216 = 0xC8;
        arg0->unk1E4 = 0.1f;
        arg0->unk1E8 = 2.0f;
        arg0->unk1EC = 0.0f;
        phi_v0 = 1U & 0xFF;
    }
    if (phi_v0 == 1) {
        Math_SmoothStepToF(arg0 + 0x1E4, arg0->unk1E8, 1.0f, 0.1f, 0.001f);
        arg0->unk1A0 = (s16) (arg0->unk1A0 + (s32) (arg0->unk1DC * 182.04445f));
        if (Math_SmoothStepToF(arg0 + 0x1DC, arg0->unk1E0, 1.0f, arg0->unk1E4, 0.001f) == 0.0f) {
            arg0->unk1D4 = 0;
            arg0->unk19D = 2U;
        }
    }
    if (arg0->unk19D == 2) {
        temp_v0_2 = arg0->unk1D4;
        temp_v1 = ((s32) temp_v0_2 < 0x29) ^ 1;
        arg0->unk1D4 = (s16) (temp_v0_2 + 1);
        arg0->unk1A0 = (s16) (arg0->unk1A0 + (s32) (arg0->unk1DC * 182.04445f));
        if (temp_v1 != 0) {
            arg0->unk1DC = (f32) (arg0->unk1B4 - 1.0f);
            arg0->unk1E0 = 1.5f;
            arg0->unk1E4 = (f32) (arg0->unk1C0 - 1.0f);
            arg0->unk1E8 = -0.3f;
            Audio_PlayActorSound2(arg0, 0x28E9U);
            arg0->unk19D = 3U;
        }
    }
    if (arg0->unk19D == 3) {
        arg0->unk1A0 = (s16) (arg0->unk1A0 + 0x4000);
        sp2C = arg0 + 0x1E4;
        sp48 = Math_SmoothStepToF(arg0 + 0x1DC, arg0->unk1E0, 0.8f, 0.2f, 0.001f);
        Math_SmoothStepToF(sp2C, arg0->unk1E8, 0.8f, 0.2f, 0.001f);
        arg0->unk1B0 = (f32) (arg0->unk1E4 + 1.0f);
        arg0->unk1B4 = (f32) (arg0->unk1DC + 1.0f);
        if (sp48 == 0.0f) {
            arg0->unk1DC = 0.6981317f;
            arg0->unk19D = 4U;
            arg0->unk1E0 = 0.34906584f;
        }
    }
    if (arg0->unk19D == 4) {
        arg0->unk1A0 = (s16) (arg0->unk1A0 + (s32) arg0->unk1DC);
        if (Math_SmoothStepToF(arg0 + 0x1DC, arg0->unk1E0, 0.8f, 16384.0f, 3640.0f) == 0.0f) {
            temp_v0_3 = arg0->unk1A0;
            phi_v0_2 = temp_v0_3;
            if ((s32) temp_v0_3 > 0) {
                phi_v0_2 = temp_v0_3 + 0xFFFF0000;
            }
            arg0->unk19D = 5U;
            arg0->unk1E0 = 0.0f;
            arg0->unk1DC = (f32) phi_v0_2;
        }
    }
    if (arg0->unk19D == 5) {
        temp_v0_4 = arg0->unk1A0;
        phi_v0_3 = temp_v0_4;
        if ((s32) temp_v0_4 > 0) {
            phi_v0_3 = temp_v0_4 + 0xFFFF0001;
        }
        arg0->unk1DC = (f32) phi_v0_3;
        arg0->unk1A0 = (s16) (s32) arg0->unk1DC;
        if (Math_SmoothStepToF(arg0 + 0x1DC, arg0->unk1E0, 0.8f, 3640.0f, 0.001f) == 0.0f) {
            arg0->unk1A0 = 0;
            arg0->unk1D4 = 0;
            arg0->unk1DC = (f32) (arg0->unk1B4 - 1.0f);
            arg0->unk1E0 = 0.0f;
            arg0->unk1E4 = (f32) (arg0->unk1B0 - 1.0f);
            arg0->unk1E8 = 0.0f;
            arg0->unk1F0 = 0.0f;
            arg0->unk1EC = 0.5f;
            Audio_PlayActorSound2(arg0, 0x3831U);
            arg0->unk21C = 0x14;
            arg0->unk21E = 2;
            arg0->unk19D = 6U;
        }
    }
    if (arg0->unk19D == 6) {
        sp2C = arg0 + 0x1E4;
        sp48 = Math_SmoothStepToF(arg0 + 0x1DC, arg0->unk1E0, 0.8f, 0.1f, 0.001f);
        sp44 = Math_SmoothStepToF(sp2C, arg0->unk1E8, 0.8f, 0.1f, 0.001f);
        sp40 = Math_SmoothStepToF(arg0 + 0x1EC, arg0->unk1F0, 0.8f, 0.02f, 0.001f);
        arg0->unk1B0 = (f32) (arg0->unk1E4 + 1.0f);
        arg0->unk1B4 = (f32) (arg0->unk1DC + 1.0f);
        arg0->unk1B0 = (f32) (arg0->unk1B0 + (__sinf((f32) ((s32) arg0->unk1D4 % 0xA) * 0.1f * 360.0f * 0.017453292f) * arg0->unk1EC));
        temp_f10 = __sinf((f32) ((s32) arg0->unk1D4 % 0xA) * 0.1f * 360.0f * 0.017453292f) * arg0->unk1EC;
        arg0->unk1D4 = (s16) (arg0->unk1D4 + 1);
        arg0->unk1B4 = (f32) (arg0->unk1B4 + temp_f10);
        if ((sp48 == 0.0f) && (sp44 == 0.0f) && (sp40 == 0.0f)) {
            arg0->unk216 = 0;
            sp4C = NULL;
        }
    }
    if ((s32) (u16) arg0->unk1A0 < (s32) (u16) sp3A) {
        Audio_PlayActorSound2(arg0, 0x28EBU);
    }
    return sp4C;
}

void func_80999584(void *arg0, ? *arg1) {
    arg0->unk0 = (u8) arg1->unk0;
    arg0->unk1 = (u8) arg1->unk1;
    arg0->unk2 = (u8) arg1->unk2;
}

Actor *func_809995A4(Actor *arg0, GlobalContext *arg1) {
    Actor *sp7C;
    f32 sp74;
    f32 sp70;
    f32 sp6C;
    f32 sp68;
    f32 sp64;
    f32 sp60;
    f32 sp5C;
    f32 sp58;
    f32 sp54;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s32 temp_hi;
    s32 temp_s0_2;
    u8 temp_t0;
    u8 temp_v1;
    void *temp_s0;
    u8 phi_v0;
    s32 phi_s0;
    u8 phi_v0_2;

    sp7C = (Actor *)-1;
    temp_v1 = arg0->unk19D;
    phi_v0 = temp_v1;
    if (temp_v1 == 0) {
        temp_t0 = temp_v1 + 1;
        arg0->unk1D4 = 0x28;
        arg0->unk19A = (s16) (arg0->unk19A | 0x100);
        arg0->unk19D = temp_t0;
        phi_v0 = temp_t0 & 0xFF;
    }
    temp_s0 = arg0 + 0x1FA;
    if (phi_v0 == 1) {
        temp_v0 = arg0->unk1D4;
        arg0->unk1D4 = (s16) (temp_v0 - 1);
        if (temp_v0 == 0) {
            arg0->unk1D4 = 0x50;
            arg0->unk19A = (s16) (arg0->unk19A | 4);
            arg0->unk19D = (u8) (arg0->unk19D + 1);
        }
    }
    if (arg0->unk19D == 2) {
        arg0->unk1D4 = (s16) (arg0->unk1D4 - 1);
        func_80999584(temp_s0, &D_8099A41E);
        temp_v0_2 = arg0->unk1D4;
        if ((s32) temp_v0_2 < 0x50) {
            temp_hi = (s32) temp_v0_2 % 0x14;
            if (temp_hi < 8) {
                if ((s32) temp_v0_2 < 0x14) {
                    if (temp_hi == 7) {
                        func_80999584(temp_s0, &D_8099A418);
                        arg0->unk1F4 = (u8) temp_s0->unk0;
                        arg0->unk1F5 = (u8) temp_s0->unk1;
                        arg0->unk1F6 = (u8) temp_s0->unk2;
                        play_sound(0x481AU);
                        arg0->unk200 = 0.0f;
                    }
                } else if (temp_hi == 7) {
                    func_80999584(temp_s0, &D_8099A41B);
                    arg0->unk1F4 = (u8) temp_s0->unk0;
                    arg0->unk1F5 = (u8) temp_s0->unk1;
                    arg0->unk1F6 = (u8) temp_s0->unk2;
                    play_sound(0x4819U);
                    arg0->unk200 = 0.0f;
                }
            }
        }
        if ((s32) arg0->unk1D4 <= 0) {
            arg0->unk19A = (s16) (arg0->unk19A & 0xFFFB);
            arg0->unk21C = 3;
            arg0->unk21E = 0x28;
            arg0->unk1D4 = 0;
            arg0->unk19D = (u8) (arg0->unk19D + 1);
        }
    }
    phi_v0_2 = arg0->unk19D;
    if (arg0->unk19D == 3) {
        phi_s0 = 0;
        do {
            sp60 = randPlusMinusPoint5Scaled(15.0f);
            sp64 = Rand_ZeroFloat(-1.0f);
            temp_f0 = randPlusMinusPoint5Scaled(15.0f);
            sp68 = temp_f0;
            sp6C = arg0->world.pos.x + (2.0f * sp60);
            sp70 = arg0->world.pos.y + 7.0f;
            sp74 = arg0->world.pos.z + (2.0f * temp_f0);
            func_800B0EB0(arg1, (Vec3f *) &sp6C, (Vec3f *) &sp60, &D_8099A424, &D_8099A430, &D_8099A434, (s16) (s32) (Rand_ZeroFloat(50.0f) + 200.0f), (s16) 0x28, (s16) 0xF);
            temp_s0_2 = (phi_s0 + 1) & 0xFF;
            phi_s0 = temp_s0_2;
        } while (temp_s0_2 < 3);
        func_800B9010(arg0, 0x2033U);
        temp_v0_3 = arg0->unk1D4;
        arg0->unk1D4 = (s16) (temp_v0_3 + 1);
        if ((((s32) temp_v0_3 < 0x28) ^ 1) != 0) {
            arg0->unk19A = (s16) (arg0->unk19A | 0x10);
            arg0->uncullZoneForward = 12000.0f;
            arg0->unk19D = (u8) (arg0->unk19D + 1);
            arg0->unk21C = 5;
            arg0->unk21E = 0x14;
            arg0->unk19A = (s16) (arg0->unk19A | 1);
            arg0->unk216 = 0xC8;
            arg0->unk1E0 = (f32) (((s32) arg0->unk197 >> 2) * 0x444);
            arg0->gravity = 0.3f;
            arg0->unk1DC = 0.0f;
        }
        phi_v0_2 = arg0->unk19D;
    }
    if (phi_v0_2 == 4) {
        Actor_UpdateBgCheckInfo(arg1, arg0, 20.0f, 20.0f, 60.0f, 3U);
        if ((arg0->bgCheckFlags & 0x18) != 0) {
            sp54 = arg0->world.pos.x;
            sp58 = arg0->world.pos.y;
            sp5C = arg0->world.pos.z;
            Audio_PlayActorSound2(arg0, 0x180EU);
            EffectSsBomb2_SpawnLayered(arg1, &sp54, &D_8099A438, &D_8099A444, 0x64, 0x14);
            arg0->unk1D4 = 0xA;
            arg0->unk19A = (s16) (arg0->unk19A | 8);
            arg0->unk216 = 0;
            arg0->unk190 = func_80999A8C;
        } else {
            func_800B9010(arg0, 0x20EAU);
        }
        Actor_SetVelocityAndMoveYRotationAndGravity(arg0);
        Math_SmoothStepToF(arg0 + 0x1DC, arg0->unk1E0, 0.5f, 364.0f, 0.0f);
        arg0->unk1A6 = (s16) (arg0->unk1A6 + (s32) arg0->unk1DC);
        if ((arg0->world.pos.y - arg0->home.pos.y) >= 4000.0f) {
            arg0->unk216 = 0;
        }
        if (arg0->yDistToPlayer < -12000.0f) {
            Actor_Spawn(&arg1->actorCtx, arg1, 9, arg0->world.pos.x, arg0->world.pos.y, arg0->world.pos.z, (s16) 0, (s16) (s32) arg0->world.rot.y, (s16) 0, (s16) 0);
            Actor_MarkForDeath(arg0);
            sp7C = NULL;
        }
    }
    return sp7C;
}

void func_80999A8C(Actor *arg0, ? arg1) {
    s16 temp_v0;

    temp_v0 = arg0->unk1D4;
    arg0->unk1D4 = (s16) (temp_v0 - 1);
    if ((s32) temp_v0 <= 0) {
        Actor_MarkForDeath(arg0);
    }
}

void func_80999AC0(Actor *arg0) {
    ? *temp_v1;
    s32 temp_v0;
    s32 temp_v0_2;
    void *temp_v1_2;
    ? *phi_v1;
    s32 phi_v0;
    void *phi_v1_2;
    s32 phi_v0_2;

    phi_v1 = arg0 + 0x19E;
    phi_v0 = 0;
    phi_v0_2 = 0;
    do {
        temp_v0 = phi_v0 + 1;
        *phi_v1 = (unaligned s32) D_8099A450.unk0;
        temp_v1 = phi_v1 + 6;
        temp_v1->unk-2 = (u16) D_8099A450.unk4;
        phi_v1 = temp_v1;
        phi_v0 = temp_v0;
    } while (temp_v0 < 3);
    phi_v1_2 = arg0 + 0x1B0;
    do {
        temp_v0_2 = phi_v0_2 + 1;
        temp_v1_2 = phi_v1_2 + 0xC;
        temp_v1_2->unk-C = (s32) D_8099A458.unk0;
        temp_v1_2->unk-8 = (s32) D_8099A458.unk4;
        temp_v1_2->unk-4 = (s32) D_8099A458.unk8;
        phi_v1_2 = temp_v1_2;
        phi_v0_2 = temp_v0_2;
    } while (temp_v0_2 != 2);
}

void func_80999B34(EnGs *arg0) {
    s16 temp_a1;
    s16 temp_v0;

    temp_a1 = arg0->unk216;
    if ((s32) temp_a1 > 0) {
        temp_v0 = arg0->unk218;
        if (temp_v0 == 0) {
            func_8016566C(temp_a1, temp_a1);
            arg0->unk218 = arg0->unk216;
            return;
        }
        func_80165658(temp_v0, temp_a1);
        return;
    }
    if ((s32) arg0->unk218 > 0) {
        Math_StepToS(arg0 + 0x218, temp_a1, 0x14);
        func_80165658(arg0->unk218);
        if ((s32) arg0->unk218 <= 0) {
            func_80165690();
        }
    }
}

void func_80999BC8(Actor *arg0, GlobalContext *arg1) {
    CollisionCheckContext *sp28;
    Actor *sp24;
    Actor *temp_a1;
    CollisionCheckContext *temp_a1_2;
    s16 temp_v0;
    u8 temp_t7;
    u8 temp_v0_2;

    if ((arg0->isTargeted != 0) && (func_801A5100() == 0)) {
        arg0->unk19D = 0;
        arg0->unk19A = (s16) (arg0->unk19A | 1);
        func_80999AC0(arg0);
        arg0->unk19C = 0;
        func_80998704(arg0, arg1);
        arg0->unk208 = 0;
    }
    if (arg0->params == 1) {
        Actor_SetHeight(arg0, 34.5f);
    } else {
        Actor_SetHeight(arg0, 23.0f);
    }
    temp_v0 = arg0->unk21A;
    if ((s32) temp_v0 > 0) {
        arg0->unk21A = (s16) (temp_v0 - 1);
        if ((s32) arg0->unk21A <= 0) {
            arg0->unk21A = 0;
        }
    }
    if (((arg0->unk19A & 0x210) == 0) && (arg0->unk21A == 0)) {
        temp_v0_2 = arg0->unk155;
        if ((temp_v0_2 & 2) != 0) {
            temp_t7 = arg0->colChkInfo.damageEffect;
            arg0->unk19D = 0;
            arg0->unk155 = (u8) (temp_v0_2 & 0xFFFD);
            switch (temp_t7) {
            case 15:
                arg0->unk19A = (s16) (arg0->unk19A | 1);
                func_80999AC0(arg0);
                arg0->unk19C = 0;
                func_80998704(arg0, arg1);
                arg0->unk21A = 5;
                break;
            case 14:
                arg0->unk19A = (s16) (arg0->unk19A | 1);
                func_80999AC0(arg0);
                arg0->unk19C = 1;
                func_80998704(arg0, arg1);
block_19:
                arg0->unk21A = 5;
                break;
            case 13:
                func_80999AC0(arg0);
                arg0->unk19C = 2;
                func_80998704(arg0, arg1);
                arg0->unk21A = 5;
                break;
            case 12:
                arg0->unk19A = (s16) (arg0->unk19A | 2);
                func_80999AC0(arg0);
                arg0->unk19C = 4;
                func_80998704(arg0, arg1);
                arg0->unk21A = 5;
                break;
            case 11:
                arg0->unk19A = (s16) (arg0->unk19A | 1);
                func_80999AC0(arg0);
                arg0->unk19C = 3;
                func_80998704(arg0, arg1);
                goto block_19;
            }
        }
        temp_a1 = arg0 + 0x144;
        sp24 = temp_a1;
        Collider_UpdateCylinder(arg0, (ColliderCylinder *) temp_a1);
        temp_a1_2 = &arg1->colChkCtx;
        sp28 = temp_a1_2;
        CollisionCheck_SetAC(arg1, temp_a1_2, (Collider *) sp24);
        CollisionCheck_SetOC(arg1, temp_a1_2, (Collider *) sp24);
        arg0->unk190(arg0, arg1);
        return;
    }
    arg0->unk155 = (u8) (arg0->unk155 & 0xFFFD);
    arg0->unk190(arg0, arg1);
}

void EnGs_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGs *this = (EnGs *) thisx;
    s16 sp2E;
    s16 sp2C;
    u8 *sp28;
    Color_RGB8 *sp24;
    Color_RGB8 *sp20;
    Color_RGB8 *temp_a1;
    Color_RGB8 *temp_a3;
    s16 temp_a2;
    s16 temp_v0;
    u8 *temp_a0;

    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        globalCtx->msgCtx.unk11F22 = 0;
        globalCtx->msgCtx.unk11F10 = 0;
        this->unk144.base.acFlags &= 0xFFFD;
        func_80997DEC(this, globalCtx);
        return;
    }
    if (func_800B8718(this, globalCtx) != 0) {
        this->unk19A |= 0x200;
        this->unk144.base.acFlags &= 0xFFFD;
        if (this->actor.cutscene != -1) {
            this->unk190 = func_80997FF0;
            return;
        }
        func_80998040(&this->actor, globalCtx);
        return;
    }
    if (((this->actor.flags & 0x40) != 0) || (temp_v0 = this->unk19A, ((temp_v0 & 0x100) != 0)) || ((temp_v0 & 0x200) != 0)) {
        func_80999BC8(&this->actor, globalCtx);
        func_800B8898(globalCtx, &this->actor, &sp2E, &sp2C);
        if ((this->actor.xyzDistToPlayerSq > 160000.0f) || ((s32) sp2E < 0) || ((s32) sp2E >= 0x141) || ((s32) sp2C < 0) || ((s32) sp2C >= 0xF1)) {
            goto block_17;
        }
        temp_a2 = this->unk21C;
        if ((s32) temp_a2 > 0) {
            func_800BC848(this, globalCtx, temp_a2, this->unk21E);
        }
    } else {
block_17:
        this->unk216 = 0;
    }
    if (this->unk200 < 1.0f) {
        if ((this->unk19A & 4) != 0) {
            Math_StepToF(&this->unk200, 1.0f, 0.06f);
        } else {
            Math_StepToF(&this->unk200, 1.0f, 0.02f);
        }
        temp_a1 = &this->unk1F7;
        sp20 = temp_a1;
        func_80997AFC(this->unk194, temp_a1);
        temp_a0 = &this->unk1F4;
        temp_a3 = &this->unk1FA;
        sp24 = temp_a3;
        sp28 = temp_a0;
        Lib_LerpRGB((Color_RGB8 *) temp_a0, temp_a1, this->unk200, temp_a3);
        if (this->unk200 >= 1.0f) {
            temp_a0->unk0 = temp_a3->r;
            temp_a0->unk1 = (u8) temp_a3->g;
            temp_a0->unk2 = (u8) temp_a3->b;
        }
    }
    if ((s32) this->unk21C > 0) {
        this->unk21C = 0;
    }
    func_80999B34(this);
}

void EnGs_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnGs *this = (EnGs *) thisx;
    u32 sp4C;
    Gfx *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s1;

    if ((this->unk19A & 8) == 0) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s1 = temp_a0;
        sp4C = globalCtx->gameplayFrames;
        func_8012C28C(temp_a0);
        SysMatrix_StatePush();
        if ((this->unk19A & 1) != 0) {
            Matrix_RotateY(this->unk1A0, 1U);
            SysMatrix_InsertXRotation_s(this->unk19E, 1);
            SysMatrix_InsertZRotation_s(this->unk1A2, 1);
            Matrix_Scale(this->unk1B0.x, this->unk1B0.y, this->unk1B0.z, 1);
            Matrix_RotateY(this->unk1A6, 1U);
            SysMatrix_InsertXRotation_s(this->unk1A4, 1);
            SysMatrix_InsertZRotation_s(this->unk1A8, 1);
        }
        temp_v0 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0 + 8;
        temp_v0->words.w0 = 0xDA380003;
        sp40 = temp_v0;
        sp40->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_2 + 8;
        temp_v0_2->words.w1 = (u32) &D_06000950;
        temp_v0_2->words.w0 = 0xDE000000;
        temp_v0_3 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = (this->unk1FA.r << 0x18) | (this->unk1FA.g << 0x10) | (this->unk1FA.b << 8) | 0xFF;
        temp_v0_4 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w1 = (u32) &D_060009D0;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_5 = temp_s1->polyOpa.p;
        temp_s1->polyOpa.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = (u32) &D_06000A60;
        temp_v0_5->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
        if ((this->unk19A & 2) != 0) {
            func_8012C2DC(globalCtx->state.gfxCtx);
            SysMatrix_NormalizeXYZ(&globalCtx->mf_187FC);
            Matrix_Scale(0.05f, -0.05f, 1.0f, 1);
            temp_v0_6 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDA380003;
            temp_v0_6->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_7 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_7 + 8;
            temp_v0_7->words.w0 = 0xDB060020;
            temp_v0_7->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, (s32) sp4C * -0x14, 0x20, 0x80);
            temp_v0_8 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_8 + 8;
            temp_v0_8->words.w0 = 0xFA008080;
            temp_v0_8->words.w1 = 0xFFFF00FF;
            temp_v0_9 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_9 + 8;
            temp_v0_9->words.w1 = 0xFF000000;
            temp_v0_9->words.w0 = 0xFB000000;
            temp_v0_10 = temp_s1->polyXlu.p;
            temp_s1->polyXlu.p = temp_v0_10 + 8;
            temp_v0_10->words.w0 = 0xDE000000;
            temp_v0_10->words.w1 = (u32) D_0407D590;
        }
    }
}

