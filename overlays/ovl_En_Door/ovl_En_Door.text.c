? func_800BC8B8(GlobalContext *, u8, ?);            /* extern */
void func_80866A5C(EnDoor *, GlobalContext *);      /* static */
void func_80866B20(EnDoor *, GlobalContext *);      /* static */
void func_80866F94(EnDoor *, GlobalContext *);      /* static */
void func_8086704C(EnDoor *, GlobalContext *);      /* static */
void func_80867080(EnDoor *, GlobalContext *);      /* static */
void func_808670F0(EnDoor *, GlobalContext *);      /* static */
void func_80867144(EnDoor *, GlobalContext *);      /* static */
s32 func_80867350(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_04020658;
extern ? D_04020D00;
extern SkeletonHeader D_04022B28;
static ? D_8086778C;                                /* unable to generate initializer */
static s16 D_8086782C = {
    0x1B,
    0x100,
    0x164,
    0x29,
    0x200,
    0x230,
    0x2D,
    0x200,
    0x230,
    0x37,
    0x200,
    0x230,
    0x2F,
    0x200,
    0x230,
    0x33,
    0x300,
    0x231,
    0x31,
    0x300,
    0x231,
    0x4C,
    0x300,
    0x231,
    0x45,
    0x400,
    0x232,
    0,
    0x400,
    0x232,
    0x57,
    0x400,
    0x232,
    0x14,
    0xB00,
    0x20E,
    0x23,
    0xB00,
    0x20E,
    0x3B,
    0xB00,
    0x20E,
    0x28,
    0xC00,
    0x279,
};
static s16 D_80867886 = 0xFFFF;
static s16 D_8086788A = {
    1,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0x800,
    0x276,
    0xFFFF,
    0x700,
    0x275,
    0xFFFF,
    0x600,
    0x274,
    0xFFFF,
    0x700,
    0x275,
    0xFFFF,
    0x600,
    0x274,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0x900,
    0x27B,
    0xFFFF,
    0x800,
    0x276,
    0xFFFF,
    0x800,
    0x276,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0x600,
    0x274,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0,
    1,
    0xFFFF,
    0xA00,
    0x27C,
    0xFFFF,
    0xD00,
    2,
    0xFFFF,
    0x500,
    0x233,
    0xFFFF,
    0x900,
    0x27B,
    0xFFFF,
    0x400,
    0x232,
    0,
};
static InitChainEntry D_80867954;                   /* unable to generate initializer */
static ? D_80867964;                                /* unable to generate initializer */
static ? D_8086798C;                                /* unable to generate initializer */
static ? D_80867998;                                /* unable to generate initializer */
static ? D_808679A4;                                /* unable to generate initializer */
static s32 D_80867BC0;



void EnDoor_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnDoor *this = (EnDoor *) thisx;
    ObjectContext *sp38;
    ObjectContext *temp_a0;
    s16 *temp_s0;
    s32 temp_v0_2;
    s32 temp_v0_3;
    s32 temp_v0_4;
    s8 *temp_v0;
    s8 temp_t0;
    s8 temp_t8;
    s16 *phi_s0;
    s32 phi_v0;
    s32 phi_v0_2;
    s16 *phi_s0_2;
    s8 phi_v0_3;
    s16 *phi_s0_3;
    s16 *phi_s0_4;

    Actor_ProcessInitChain(&this->actor, &D_80867954);
    temp_t8 = ((s32) this->actor.params >> 7) & 7;
    temp_t0 = this->actor.params & 0x7F;
    this->unk_144[96] = temp_t8;
    this->unk_144[97] = temp_t0;
    phi_s0 = &D_8086782C;
    if (((temp_t8 & 0xFF) == 7) && ((temp_t0 & 0xFF) == 0)) {
        BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
        BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, (CollisionHeader *) &D_04023100);
    }
    temp_v0 = this->unk_1A8;
    SkelAnime_Init(globalCtx, (SkelAnime *) &this->unk_144[24], &D_04022B28, &D_04020658, (Vec3s *) temp_v0, (Vec3s *) temp_v0, 5);
    phi_v0 = 0;
    if ((u8) this->unk_144[96] == 5) {
        phi_s0_2 = ((u8) this->unk_144[97] * 6) + 0x66 + &D_8086782C;
    } else {
loop_6:
        phi_v0_2 = phi_v0;
        phi_s0_4 = phi_s0;
        if (*phi_s0 != globalCtx->sceneNum) {
            temp_v0_2 = phi_v0 + 1;
            temp_s0 = phi_s0 + 6;
            phi_s0 = temp_s0;
            phi_v0 = temp_v0_2;
            phi_v0_2 = temp_v0_2;
            phi_s0_4 = temp_s0;
            if (temp_v0_2 != 0xF) {
                goto loop_6;
            }
        }
        phi_s0_2 = phi_s0_4;
        if ((phi_v0_2 >= 0xF) && (Object_GetIndex(&globalCtx->objectCtx, 2) >= 0)) {
            phi_s0_2 = phi_s0_4 + 6;
        }
    }
    this->unk_144[95] = (s8) phi_s0_2->unk2;
    temp_a0 = &globalCtx->objectCtx;
    sp38 = temp_a0;
    temp_v0_3 = Object_GetIndex(temp_a0, phi_s0_2->unk4);
    phi_v0_3 = (s8) temp_v0_3;
    phi_s0_3 = phi_s0_2;
    if ((temp_v0_3 < 0) && (temp_v0_4 = Object_GetIndex(temp_a0, D_8086788A), phi_v0_3 = (s8) temp_v0_4, phi_s0_3 = &D_80867886, (temp_v0_4 != 0))) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    this->unk_144[94] = phi_v0_3;
    this->unk_144[95] = (s8) phi_s0_3->unk2;
    if (this->unk_144[94] == this->actor.objBankIndex) {
        func_80866A5C(this, globalCtx);
    } else {
        this->actionFunc = func_80866A5C;
    }
    Actor_SetHeight(&this->actor, 35.0f);
}

void EnDoor_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnDoor *this = (EnDoor *) thisx;
    TransitionActorEntry *temp_v0;
    s16 temp_v1;

    if ((u8) this->unk_144[96] != 7) {
        temp_v0 = &globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA];
        temp_v1 = temp_v0->id;
        if ((s32) temp_v1 < 0) {
            temp_v0->id = (s16) -(s32) temp_v1;
            return;
        }
        // Duplicate return node #5. Try simplifying control flow for better match
        return;
    }
    if ((u8) this->unk_144[97] == 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_80866A5C(EnDoor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a2;
    u8 temp_v0;

    temp_a2 = arg1;
    arg1 = temp_a2;
    if (Object_IsLoaded(&temp_a2->objectCtx, (s32) arg0->unk_144[94]) != 0) {
        temp_v0 = (u8) arg0->unk_144[96];
        arg0->actionFunc = func_80866B20;
        arg0->actor.world.rot.y = 0;
        arg0->actor.objBankIndex = arg0->unk_144[94];
        if (temp_v0 == 1) {
            if (Flags_GetSwitch(arg1, (s32) (u8) arg0->unk_144[97]) == 0) {
                arg0->unk_144[98] = 0xA;
                return;
            }
            // Duplicate return node #7. Try simplifying control flow for better match
            return;
        }
        if ((temp_v0 == 4) && (Actor_XZDistanceBetweenActors(&arg0->actor, arg1->actorCtx.actorList[2].first) > 120.0f)) {
            arg0->actionFunc = func_8086704C;
            arg0->actor.world.rot.y = -0x1800;
        }
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_80866B20(EnDoor *arg0, GlobalContext *arg1) {
    Actor *sp64;
    Vec3f sp58;
    struct_80133038_arg2 sp30;
    EnDoor *temp_a0_2;
    EnDoor *temp_a0_3;
    EnDoor *temp_a3;
    s16 temp_a2;
    s16 temp_v0;
    s16 temp_v1;
    s32 temp_a1_2;
    s32 temp_t0;
    s8 *temp_a0;
    u16 temp_t5;
    u16 temp_t6;
    u8 temp_a0_4;
    u8 temp_a1;
    u8 temp_t8;
    u8 temp_t9;
    u8 temp_v0_2;
    f32 phi_f0;
    s32 phi_v0;
    s32 phi_v1;
    s32 phi_v0_2;

    temp_a3 = arg0;
    arg0 = temp_a3;
    sp64 = arg1->actorCtx.actorList[2].first;
    if ((func_800B84D0(&temp_a3->actor, arg1) != 0) && (arg0->actor.textId == 0x1821)) {
        D_80867BC0 = 1;
    }
    temp_a0 = &arg0->unk_144[24];
    if ((u8) arg0->unk_144[93] != 0) {
        arg0->actionFunc = func_80867144;
        if ((sp64->unkA6C * 0x10) < 0) {
            phi_f0 = 0.75f;
        } else {
            phi_f0 = 1.5f;
        }
        temp_t8 = (u8) arg0->unk_144[92];
        arg0 = arg0;
        SkelAnime_ChangeAnimPlaybackStop((SkelAnime *) temp_a0, *(&D_80867964 + (temp_t8 * 4)), phi_f0);
        if ((u8) arg0->unk_144[98] != 0) {
            temp_t5 = gSaveContext.mapIndex;
            gSaveContext.inventory.dungeonKeys[temp_t5] += -1;
            temp_a1 = (u8) arg0->unk_144[97];
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, (s32) temp_a1);
            Audio_PlayActorSound2(&arg0->actor, 0x287CU);
            return;
        }
        // Duplicate return node #55. Try simplifying control flow for better match
        return;
    }
    if (arg0->unk1A7 != 0) {
        arg0->actionFunc = func_80866F94;
        Audio_PlayActorSound2(&arg0->actor, 0x2800U);
        return;
    }
    arg0 = arg0;
    if (func_801233E4(arg1) == 0) {
        temp_a0_2 = arg0;
        arg0 = arg0;
        Actor_CalcOffsetOrientedToDrawRotation(&temp_a0_2->actor, &sp58, &sp64->world.pos);
        if ((D_80867BC0 != 0) || ((fabsf(sp58.y) < 20.0f) && (fabsf(sp58.x) < 20.0f) && (fabsf(sp58.z) < 50.0f))) {
            temp_v0 = sp64->shape.rot.y - arg0->actor.shape.rot.y;
            phi_v0 = (s32) temp_v0;
            if (sp58.z > 0.0f) {
                phi_v0 = (s32) (s16) (0x8000 - temp_v0);
            }
            phi_v1 = phi_v0;
            if (phi_v0 < 0) {
                phi_v1 = -phi_v0;
            }
            if (phi_v1 < 0x3000) {
                sp64->unk37C = 1;
                if (sp58.z >= 0.0f) {
                    sp64->unk37D = (s8) (s32) 1.0f;
                } else {
                    sp64->unk37D = (s8) (s32) -1.0f;
                }
                sp64->unk380 = arg0;
                if ((u8) arg0->unk_144[98] != 0) {
                    if ((s32) gSaveContext.inventory.dungeonKeys[gSaveContext.mapIndex] <= 0) {
                        sp64->unk37C = -1;
                        arg0->actor.textId = 0x1802;
                    } else {
                        sp64->unk37E = 0xA;
                    }
                } else {
                    temp_a0_4 = (u8) arg0->unk_144[96];
                    if (temp_a0_4 == 4) {
                        sp64->unk37C = -1;
                        arg0->actor.textId = 0x1800;
                    } else if ((temp_a0_4 == 0) || (temp_a0_4 == 2) || (temp_a0_4 == 3)) {
                        temp_v0_2 = (u8) arg0->unk_144[97];
                        temp_v1 = arg1->actorCtx.unkC;
                        temp_t0 = (s32) (temp_v1 & 0x2AA) >> 1;
                        temp_a2 = D_801AED48[temp_v0_2 & 7];
                        temp_a1_2 = temp_v1 & 0x155;
                        if (((temp_a0_4 == 0) && (((temp_t0 | temp_a1_2) & temp_a2) == 0)) || ((temp_a0_4 == 2) && ((temp_a2 & temp_a1_2) == 0)) || ((temp_a0_4 == 3) && ((temp_a2 & temp_t0) == 0))) {
                            phi_v0_2 = 0x182D;
                            if (temp_a0_4 == 3) {
                                phi_v0_2 = 0x180D;
                            } else if (temp_a0_4 == 2) {
                                phi_v0_2 = 0x181D;
                            }
                            sp64->unk37C = -1;
                            arg0->actor.textId = phi_v0_2 + (((s32) temp_v0_2 >> 3) & 0xF);
                        }
                    } else if ((temp_a0_4 == 5) && (sp58.z > 0.0f)) {
                        temp_t9 = (u8) arg0->unk_144[97];
                        arg0 = arg0;
                        if (func_80133038(arg1, *(&D_8086778C + (temp_t9 * 4)), &sp30) != 0) {
                            temp_t6 = sp30.unk0 + 0x1800;
                            arg0->actor.textId = temp_t6;
                            if (((temp_t6 & 0xFFFF) == 0x1821) && (D_80867BC0 != 0)) {
                                sp64->unk37C = 5;
                            } else {
                                sp64->unk37C = -1;
                            }
                        }
                    }
                }
                func_80122F28((Player *) sp64, MIPS2C_ERROR(Read from unset register $a1), MIPS2C_ERROR(Read from unset register $a2));
                return;
            }
            // Duplicate return node #55. Try simplifying control flow for better match
            return;
        }
        if ((u8) arg0->unk_144[96] == 4) {
            temp_a0_3 = arg0;
            if (arg0->actor.xzDistToPlayer > 240.0f) {
                arg0 = arg0;
                Audio_PlayActorSound2(&temp_a0_3->actor, 0x2800U);
                arg0->actionFunc = func_80867080;
            }
        }
        // Duplicate return node #55. Try simplifying control flow for better match
    }
}

void func_80866F94(EnDoor *arg0, GlobalContext *arg1) {
    s16 *temp_a0;
    s16 *temp_a0_2;
    s8 temp_v0;
    s32 phi_v0;

    temp_v0 = arg0->unk1A7;
    temp_a0 = &arg0->actor.world.rot.y;
    if (temp_v0 != 0) {
        temp_a0_2 = &arg0->actor.world.rot.y;
        if ((s32) temp_v0 >= 0) {
            phi_v0 = 1;
        } else {
            phi_v0 = -1;
        }
        arg0 = arg0;
        if (Math_ScaledStepToS(temp_a0_2, (s16) (phi_v0 * 0x3E80), 0x7D0) != 0) {
            Math_StepToC(&arg0->unk1A7, 0, 1);
            return;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
        return;
    }
    arg0 = arg0;
    if (Math_ScaledStepToS(temp_a0, 0, 0x7D0) != 0) {
        arg0->actionFunc = func_80866B20;
        Audio_PlayActorSound2(&arg0->actor, 0x2878U);
    }
}

void func_8086704C(EnDoor *arg0, GlobalContext *arg1) {
    if (arg0->actor.xzDistToPlayer < 120.0f) {
        arg0->actionFunc = func_808670F0;
    }
}

void func_80867080(EnDoor *arg0, GlobalContext *arg1) {
    s16 *temp_a0;

    temp_a0 = &arg0->actor.world.rot.y;
    if (arg0->actor.xzDistToPlayer < 120.0f) {
        arg0->actionFunc = func_808670F0;
        return;
    }
    arg0 = arg0;
    if (Math_ScaledStepToS(temp_a0, -0x1800, 0x100) != 0) {
        arg0->actionFunc = func_8086704C;
    }
}

void func_808670F0(EnDoor *arg0, GlobalContext *arg1) {
    if (Math_ScaledStepToS(&arg0->actor.world.rot.y, 0, 0x700) != 0) {
        Audio_PlayActorSound2(&arg0->actor, 0x2801U);
        arg0->actionFunc = func_80866B20;
    }
}

void func_80867144(EnDoor *arg0, GlobalContext *arg1) {
    f32 temp_f4;
    f32 temp_f6;
    s32 temp_s0_2;
    s32 temp_s1;
    s8 *temp_s0;
    s8 temp_t6;
    u8 temp_t2;
    u8 temp_t9;
    u8 temp_v0;
    s32 phi_v1;
    f32 phi_f4;
    s32 phi_s0;
    f32 phi_f6;

    temp_v0 = (u8) arg0->unk_144[98];
    temp_s0 = &arg0->unk_144[24];
    temp_t6 = temp_v0 - 1;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk_144[98] = temp_t6;
        phi_v1 = temp_t6 & 0xFF;
    }
    if (phi_v1 == 0) {
        if (SkelAnime_FrameUpdateMatrix((SkelAnime *) temp_s0) != 0) {
            arg0->actionFunc = func_80866B20;
            arg0->unk_144[93] = 0;
            return;
        }
        temp_t9 = *(&D_8086798C + (u8) arg0->unk_144[92]);
        temp_f4 = (f32) temp_t9;
        phi_f4 = temp_f4;
        if ((s32) temp_t9 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        if (func_801378B8((SkelAnime *) temp_s0, phi_f4) != 0) {
            Audio_PlayActorSound2(&arg0->actor, 0x5802U);
            if ((arg0->unk178 < 1.5f) && (temp_s1 = (s32) (Rand_ZeroOne() * 30.0f) + 0x32, phi_s0 = 0, (temp_s1 > 0))) {
                do {
                    EffectSsBubble_Spawn(arg1, &arg0->actor.world.pos, 60.0f, 100.0f, 50.0f, 0.15f);
                    temp_s0_2 = phi_s0 + 1;
                    phi_s0 = temp_s0_2;
                } while (temp_s0_2 < temp_s1);
                return;
            }
            // Duplicate return node #18. Try simplifying control flow for better match
            return;
        }
        temp_t2 = *(&D_80867998 + (u8) arg0->unk_144[92]);
        temp_f6 = (f32) temp_t2;
        phi_f6 = temp_f6;
        if ((s32) temp_t2 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        if (func_801378B8((SkelAnime *) temp_s0, phi_f6) != 0) {
            Audio_PlayActorSound2(&arg0->actor, 0x2801U);
        }
        // Duplicate return node #18. Try simplifying control flow for better match
    }
}

void EnDoor_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnDoor *this = (EnDoor *) thisx;
    this->actionFunc(this, globalCtx);
}

s32 func_80867350(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    void *sp1C;
    s16 temp_a0_2;
    s8 temp_a0;
    void *temp_a2;
    void *phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;

    if (arg1 == 4) {
        temp_a2 = (arg5->unk1A3 * 8) + &D_808679A4;
        phi_v0 = NULL;
        phi_v0_2 = (s32) NULL;
        if (arg5->unk1A4 != 7) {
            phi_v0 = arg0->doorCtx.transitionActorList + (((s32) arg5->params >> 0xA) * 0x10);
        }
        arg4->z += arg5->world.rot.y;
        if ((arg5->unk1A4 == 7) || ((s32) arg0->roomCtx.prevRoom.num >= 0) || (temp_a0 = phi_v0->unk0, (temp_a0 == phi_v0->unk2))) {
            sp1C = temp_a2;
            temp_a0_2 = (arg5->shape.rot.y + arg5->unk17C->unk16 + arg4->z) - Math_Vec3f_Yaw(arg0 + 0xE0, arg5 + 0x24);
            phi_v0_3 = (s32) temp_a0_2;
            if ((s32) temp_a0_2 < 0) {
                phi_v0_3 = -(s32) temp_a0_2;
            }
            if (phi_v0_3 < 0x4000) {
                *arg2 = temp_a2->unk0;
            } else {
                *arg2 = temp_a2->unk4;
            }
        } else {
            if (arg5->room != temp_a0) {
                phi_v0_2 = 1;
            }
            *arg2 = *(temp_a2 + (phi_v0_2 * 4));
        }
    }
    return 0;
}

void EnDoor_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnDoor *this = (EnDoor *) thisx;
    GraphicsContext *sp28;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    s16 temp_v0;
    u8 temp_v0_2;

    if (this->unk_144[94] == this->actor.objBankIndex) {
        temp_a0 = globalCtx->state.gfxCtx;
        if (((u8) this->unk_144[96] == 7) && ((u8) this->unk_144[97] == 0)) {
            sp28 = temp_a0;
            func_800BDFC0(globalCtx, (Gfx *) &D_040221B8);
        } else {
            sp28 = temp_a0;
            func_8012C28C(temp_a0);
        }
        sp28 = sp28;
        SkelAnime_Draw(globalCtx, this->unk160, this->unk17C, func_80867350, NULL, &this->actor);
        temp_v0 = this->actor.world.rot.y;
        if (temp_v0 != 0) {
            if ((s32) temp_v0 > 0) {
                temp_v1 = sp28->polyOpa.p;
                sp28->polyOpa.p = temp_v1 + 8;
                temp_v1->words.w0 = 0xDE000000;
                temp_v1->words.w1 = (u32) &D_04020D00;
            } else {
                temp_v1_2 = sp28->polyOpa.p;
                sp28->polyOpa.p = temp_v1_2 + 8;
                temp_v1_2->words.w1 = (u32) &D_04020BB8;
                temp_v1_2->words.w0 = 0xDE000000;
            }
        }
        temp_v0_2 = (u8) this->unk_144[98];
        if (temp_v0_2 != 0) {
            func_800BC8B8(globalCtx, temp_v0_2, 0);
        }
    }
}

