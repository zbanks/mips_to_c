? func_800BC8B8(GlobalContext *, s8, ?);            /* extern */
? func_800DFFAC(s32, DoorShutter *, s16, f32, s32, s32, s32); /* extern */
? func_801226E0(GlobalContext *, s8);               /* extern */
void func_808A08F0(DoorShutter *arg0, void (*arg1)(DoorShutter *, GlobalContext *, DoorShutter *), GlobalContext *, GlobalContext *); /* static */
s32 func_808A0900(DoorShutter *arg0, GlobalContext *arg1, GlobalContext *, GlobalContext *); /* static */
s32 func_808A0974(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A0D0C(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
f32 func_808A0D90(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
s32 func_808A0E28(Actor *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A0F88(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1080(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1090(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1288(DoorShutter *arg0, void *arg1);  /* static */
s32 func_808A1340(DoorShutter *arg0);               /* static */
s32 func_808A1478(Actor *arg0, GlobalContext *arg1, f32 arg2, Actor *); /* static */
void func_808A1548(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1618(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1684(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1784(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1884(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_808A1A70(Actor *arg0);                     /* static */
void func_808A1B48(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
void func_808A1C50(DoorShutter *arg0, GlobalContext *arg1, DoorShutter *); /* static */
s32 func_808A1D68(Actor *arg0, GlobalContext *arg1); /* static */
void func_808A1E14(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_808A2180;                                /* unable to generate initializer */
static ? D_808A21B0;                                /* unable to generate initializer */
static ? D_808A2240;                                /* unable to generate initializer */
static InitChainEntry D_808A2248;                   /* unable to generate initializer */
static s16 D_808A2258 = {
    0x1B,
    0x200,
    0x21,
    0x300,
    0x49,
    0x400,
    0x16,
    0x500,
    0x18,
    0x500,
    0x4B,
    0x600,
    0x56,
    0x700,
    0x1D,
    0x700,
    0x60,
    0x900,
    0x27,
    0xA00,
    0x14,
    0xB00,
    0x23,
    0xB00,
    0x3B,
    0xB00,
    0x2A,
    0x800,
    0x3F,
    0x800,
    0x47,
    0x800,
    0x66,
    0x800,
    0xFFFF,
    0x100,
};
static ? D_808A22A0;                                /* unable to generate initializer */
static Vec3f D_808A22C4 = {120.0f, 0.0f, 0.0f};
static Vec3f D_808A22D0 = {-90.0f, 0.0f, 0.0f};
static ? D_808A22DC;                                /* unable to generate initializer */

typedef struct DoorShutter {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ char pad144[0x18];
    /* 0x015C */ s16 unk15C;                        /* inferred */
    /* 0x015E */ s16 unk15E;                        /* inferred */
    /* 0x0160 */ char pad160[0x2];                  /* maybe part of unk15E[2]? */
    /* 0x0162 */ u8 unk162;                         /* inferred */
    /* 0x0163 */ u8 unk163;                         /* inferred */
    /* 0x0164 */ u8 unk164;                         /* inferred */
    /* 0x0165 */ s8 unk165;                         /* inferred */
    /* 0x0166 */ s8 unk166;                         /* inferred */
    /* 0x0167 */ s8 unk167;                         /* inferred */
    /* 0x0168 */ f32 unk168;                        /* inferred */
    /* 0x016C */ void (*actionFunc)(DoorShutter *, GlobalContext *, DoorShutter *);
} DoorShutter;                                      /* size 0x170 */

void func_808A08F0(DoorShutter *arg0, void (*arg1)(DoorShutter *, GlobalContext *, DoorShutter *)) {
    arg0->actionFunc = arg1;
    arg0->unk167 = 0;
}

s32 func_808A0900(DoorShutter *arg0, GlobalContext *arg1) {
    s16 temp_v0_2;
    s8 temp_v1;
    void *temp_v0;
    s32 phi_a1;
    s8 phi_v1;

    temp_v0 = arg1->doorCtx.transitionActorList + (((s32) arg0->actor.params >> 0xA) * 0x10);
    temp_v1 = temp_v0->unk0;
    phi_v1 = temp_v1;
    if (temp_v1 == temp_v0->unk2) {
        temp_v0_2 = arg0->actor.shape.rot.y - arg0->actor.yawTowardsPlayer;
        phi_a1 = (s32) temp_v0_2;
        if ((s32) temp_v0_2 < 0) {
            phi_a1 = -(s32) temp_v0_2;
        }
        if (phi_a1 < 0x4000) {
            phi_v1 = -1;
        }
    }
    return phi_v1 == arg0->actor.room;
}

s32 func_808A0974(DoorShutter *arg0, GlobalContext *arg1) {
    GlobalContext *sp24;
    s32 sp20;
    GlobalContext *temp_a1;
    GlobalContext *temp_a2;
    GlobalContext *temp_a3;
    s32 temp_t7;
    u8 temp_v1;
    u8 phi_v1;
    GlobalContext *phi_a3;

    temp_a3 = arg1;
    temp_v1 = arg0->unk162;
    temp_t7 = arg0->unk163 * 4;
    temp_a2 = temp_t7 + &D_808A2180;
    phi_v1 = temp_v1;
    phi_a3 = temp_a3;
    if (temp_v1 != 4) {
        temp_a1 = temp_a3;
        sp20 = (s32) temp_v1;
        sp24 = temp_a2;
        arg1 = temp_a3;
        phi_v1 = temp_v1;
        phi_a3 = arg1;
        if (func_808A0900(arg0, temp_a1, temp_a2, temp_a3) != 0) {
            if ((temp_v1 == 7) || (temp_v1 == 6)) {
                phi_v1 = 1U;
            } else if (temp_v1 == 5) {
                phi_v1 = 3U;
            } else {
                phi_v1 = 0U;
            }
        }
    }
    if (phi_v1 == 0) {
        arg0->unk164 = (temp_t7 + &D_808A2180)->unk2;
    } else {
        arg0->unk164 = (temp_t7 + &D_808A2180)->unk3;
    }
    if (phi_v1 == 1) {
        if (Actor_GetRoomCleared(phi_a3, (u32) arg0->actor.room) == 0) {
            func_808A08F0(arg0, func_808A0F88);
            arg0->unk168 = 1.0f;
            return 1;
        }
        goto block_21;
    }
    if ((phi_v1 == 2) || (phi_v1 == 7)) {
        if (Flags_GetSwitch(phi_a3, arg0->actor.params & 0x7F) == 0) {
            func_808A08F0(arg0, func_808A1548);
            arg0->unk168 = 1.0f;
            return 1;
        }
        func_808A08F0(arg0, func_808A1618);
        goto block_22;
    }
    if (phi_v1 == 3) {
        func_808A08F0(arg0, func_808A1080, temp_t7 + &D_808A2180, phi_a3);
        arg0->unk168 = 1.0f;
        return 0;
    }
block_21:
    func_808A08F0(arg0, func_808A1090);
block_22:
    return 0;
}

void DoorShutter_Init(Actor *thisx, GlobalContext *globalCtx) {
    DoorShutter *this = (DoorShutter *) thisx;
    s32 sp24;
    ? *temp_v1_2;
    GlobalContext *temp_a2;
    ObjectContext *temp_a0_2;
    s16 *temp_v1;
    s16 temp_a0;
    s32 temp_v0;
    s32 temp_v0_2;
    s8 temp_t0;
    s8 temp_v0_3;
    u8 temp_t0_2;
    u8 temp_t8;
    u8 temp_v0_4;
    s16 *phi_v1;
    s32 phi_v0;
    s16 *phi_v1_2;
    ? *phi_v1_3;
    s32 phi_v0_2;
    ? *phi_v1_4;
    s32 phi_t0;

    globalCtx = globalCtx;
    Actor_ProcessInitChain(&this->actor, &D_808A2248);
    temp_t8 = ((s32) this->actor.params >> 7) & 7;
    this->unk162 = temp_t8;
    temp_t0 = *(&D_808A2240 + (temp_t8 & 0xFF));
    phi_v1 = &D_808A2258;
    phi_v0 = 0;
    phi_v0_2 = 0;
    phi_t0 = (s32) temp_t0;
    if ((s32) temp_t0 < 0) {
loop_2:
        temp_v0 = phi_v0 + 1;
        phi_v0 = temp_v0;
        phi_v1_2 = phi_v1;
        if (*phi_v1 != globalCtx->sceneNum) {
            temp_v1 = phi_v1 + 4;
            phi_v1 = temp_v1;
            phi_v1_2 = temp_v1;
            if (temp_v0 != 0x11) {
                goto loop_2;
            }
        }
        temp_t0_2 = phi_v1_2->unk2;
        phi_t0 = (s32) temp_t0_2;
        if (temp_t0_2 == 6) {
            this->actor.flags |= 0x10000000;
        }
    } else if (temp_t0 == 0) {
        temp_a0 = globalCtx->sceneNum;
        phi_v1_3 = &D_808A22A0;
loop_9:
        temp_v0_2 = phi_v0_2 + 1;
        phi_v0_2 = temp_v0_2;
        phi_v1_4 = phi_v1_3;
        if ((phi_v1_3->unk0 != temp_a0) && (phi_v1_3->unk2 != temp_a0)) {
            temp_v1_2 = phi_v1_3 + 6;
            phi_v1_3 = temp_v1_2;
            phi_v1_4 = temp_v1_2;
            if (temp_v0_2 != 5) {
                goto loop_9;
            }
        }
        this->unk15E = (s16) phi_v1_4->unk4;
    } else {
        this->actor.room = -1;
    }
    temp_a0_2 = &globalCtx->objectCtx;
    globalCtx = globalCtx;
    sp24 = phi_t0;
    temp_v0_3 = Object_GetIndex(temp_a0_2, *(&D_808A2180 + (phi_t0 * 4)));
    temp_a2 = globalCtx;
    this->unk165 = temp_v0_3;
    if ((s32) temp_v0_3 < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    globalCtx = temp_a2;
    sp24 = phi_t0;
    func_808A08F0(this, func_808A0D0C, temp_a2);
    temp_v0_4 = this->unk162;
    this->unk163 = (u8) phi_t0;
    if (((temp_v0_4 == 4) || (temp_v0_4 == 5)) && (Flags_GetSwitch(globalCtx, this->actor.params & 0x7F) == 0)) {
        this->unk166 = 0xA;
    }
    Actor_SetHeight(&this->actor, 60.0f);
}

void DoorShutter_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DoorShutter *this = (DoorShutter *) thisx;
    TransitionActorEntry *temp_v1;

    if ((s32) this->actor.room >= 0) {
        temp_v1 = &globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA];
        temp_v1->id = (s16) -(s32) temp_v1->id;
    }
}

void func_808A0D0C(DoorShutter *arg0, GlobalContext *arg1) {
    GameInfo *temp_v0;
    s8 temp_a1;

    temp_a1 = arg0->unk165;
    arg0 = arg0;
    if ((Object_IsLoaded(arg1 + 0x17D88, (s32) temp_a1) != 0) && ((temp_v0 = gGameInfo, (temp_v0->data[544] == 0)) || (temp_v0->data[548] == 0))) {
        arg0->actor.draw = func_808A1E14;
        arg0->actor.objBankIndex = arg0->unk165;
        func_808A0974(arg0, arg1, arg0);
    }
}

f32 func_808A0D90(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    Vec3f sp1C;
    f32 *temp_a2;
    void *temp_v0;
    f32 phi_f0;

    temp_v0 = arg0->actorCtx.actorList[2].first;
    temp_a2 = &sp28;
    sp28 = temp_v0->world.pos.x;
    sp2C = temp_v0->world.pos.y + arg2;
    sp30 = temp_v0->world.pos.z;
    Actor_CalcOffsetOrientedToDrawRotation(arg1, &sp1C, (Vec3f *) temp_a2);
    if ((arg3 < fabsf(sp1C.x)) || (phi_f0 = sp1C.z, (arg4 < fabsf(sp1C.y)))) {
        phi_f0 = 3.4028235e38f;
    }
    return phi_f0;
}

s32 func_808A0E28(Actor *arg0, GlobalContext *arg1) {
    void *sp24;
    f32 temp_f0;
    f32 temp_f10;
    f32 temp_f4;
    s16 temp_v0_2;
    u8 temp_t0;
    u8 temp_t1;
    void *temp_v0;
    f32 phi_f4;
    f32 phi_f10;
    s32 phi_v0;
    s32 phi_v1;

    sp24 = arg1->actorCtx.actorList[2].first;
    if (func_801233E4(arg1) == 0) {
        temp_v0 = (arg0->unk164 * 0xC) + &D_808A21B0;
        temp_t0 = temp_v0->unkA;
        temp_f4 = (f32) temp_t0;
        phi_f4 = temp_f4;
        if ((s32) temp_t0 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        temp_t1 = temp_v0->unkB;
        temp_f10 = (f32) temp_t1;
        phi_f10 = temp_f10;
        if ((s32) temp_t1 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        temp_f0 = func_808A0D90(arg1, arg0, 0.0f, phi_f4, phi_f10);
        if (fabsf(temp_f0) < 50.0f) {
            temp_v0_2 = sp24->shape.rot.y - arg0->shape.rot.y;
            phi_v0 = (s32) temp_v0_2;
            if (temp_f0 > 0.0f) {
                phi_v0 = (s32) (s16) (0x8000 - temp_v0_2);
            }
            phi_v1 = phi_v0;
            if (phi_v0 < 0) {
                phi_v1 = -phi_v0;
            }
            if (phi_v1 < 0x3000) {
                if (temp_f0 >= 0.0f) {
                    return (s32) 1.0f;
                }
                return (s32) -1.0f;
            }
            goto block_14;
        }
        goto block_14;
    }
block_14:
    return 0;
}

void func_808A0F88(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    s16 temp_a0_2;

    if ((Actor_GetRoomCleared(arg1, (u32) arg0->room) != 0) || (Actor_GetRoomClearedTemp(arg1, (u32) arg0->room) != 0)) {
        arg0->unk160 = (s16) arg0->cutscene;
        if (arg0->unk162 == 7) {
            temp_a0_2 = arg0->unk160;
            if (temp_a0_2 != -1) {
                arg0->unk160 = ActorCutscene_GetAdditionalCutscene(temp_a0_2);
            }
        }
        if (ActorCutscene_GetCanPlayNext(arg0->unk160) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields(arg0->unk160, arg0);
            Actor_SetRoomCleared(arg1, (u32) arg0->room);
            func_808A08F0((DoorShutter *) arg0, func_808A1784);
            arg0->unk167 = -1;
            return;
        }
        ActorCutscene_SetIntentToPlay(arg0->unk160);
        return;
    }
    if (func_808A0E28(arg0, arg1) != 0) {
        temp_a0 = arg1->actorCtx.actorList[2].first;
        temp_a0->unk37C = -1;
        temp_a0->unk380 = arg0;
        arg0->textId = 0x1801;
        func_80122F28((Player *) temp_a0, MIPS2C_ERROR(Read from unset register $a1), MIPS2C_ERROR(Read from unset register $a2));
    }
}

void func_808A1080(DoorShutter *arg0, GlobalContext *arg1) {

}

void func_808A1090(DoorShutter *arg0, GlobalContext *arg1) {
    Actor *temp_a0_2;
    DoorShutter *temp_a0;
    DoorShutter *temp_a2;
    s16 temp_a1;
    s32 temp_v0;
    u16 temp_t9;
    u8 temp_v0_2;

    temp_a2 = arg0;
    if (temp_a2->unk15C != 0) {
        temp_a0 = temp_a2;
        arg0 = temp_a2;
        func_808A08F0(temp_a0, func_808A1684, (GlobalContext *) temp_a2);
        arg0->actor.velocity.y = 0.0f;
        if (arg0->unk166 != 0) {
            temp_a1 = arg0->actor.params;
            arg0 = arg0;
            Actor_SetSwitchFlag(arg1, temp_a1 & 0x7F);
            if (arg0->unk162 != 5) {
                temp_t9 = gSaveContext.mapIndex;
                gSaveContext.inventory.dungeonKeys[temp_t9] += -1;
                Audio_PlayActorSound2(&arg0->actor, 0x287CU);
                return;
            }
            Audio_PlayActorSound2(&arg0->actor, 0x28A9U);
            return;
        }
        // Duplicate return node #21. Try simplifying control flow for better match
        return;
    }
    arg0 = temp_a2;
    temp_v0 = func_808A0E28(&temp_a2->actor, arg1, temp_a2);
    if (temp_v0 != 0) {
        temp_a0_2 = arg1->actorCtx.actorList[2].first;
        temp_a0_2->unk37C = 2;
        temp_a0_2->unk37D = (s8) temp_v0;
        temp_a0_2->unk380 = arg0;
        if (arg0->unk163 == 7) {
            temp_a0_2->unk37E = 0xC;
        } else {
            temp_a0_2->unk37E = 0;
        }
        temp_v0_2 = arg0->unk162;
        if (temp_v0_2 == 6) {
            if ((s32) gSaveContext.healthCapacity < ((arg0->actor.params & 0x1F) * 0x10)) {
                temp_a0_2->unk37C = -1;
                arg0->actor.textId = 0x14FC;
            }
        } else if (arg0->unk166 != 0) {
            if (temp_v0_2 == 5) {
                if ((*gBitFlags & gSaveContext.inventory.dungeonItems[gSaveContext.mapIndex]) == 0) {
                    temp_a0_2->unk37C = -1;
                    arg0->actor.textId = 0x1803;
                }
                temp_a0_2->unk37E = (s8) (temp_a0_2->unk37E + 0xA);
            } else if ((s32) gSaveContext.inventory.dungeonKeys[gSaveContext.mapIndex] <= 0) {
                temp_a0_2->unk37C = -1;
                arg0->actor.textId = 0x1802;
            } else {
                temp_a0_2->unk37E = (s8) (temp_a0_2->unk37E + 0xA);
            }
        }
        func_80122F28((Player *) temp_a0_2, MIPS2C_ERROR(Read from unset register $a1), &arg0->actor);
    }
}

void func_808A1288(DoorShutter *arg0, void *arg1) {
    void *sp3C;
    s32 sp38;
    s32 sp34;

    if (arg0->actor.category == 0xA) {
        sp3C = arg1->unk1CCC;
        sp34 = 0xF;
        sp38 = (s32) arg0->unk164;
        if (func_808A0974(arg0) != 0) {
            sp34 = 0x20;
        }
        func_808A08F0(arg0, func_808A1684);
        arg0->unk168 = 0.0f;
        arg0->unk164 = (u8) sp38;
        func_800DFFAC(arg1->unk800, arg0, sp3C->unk3BA, 0.0f, 0xC, sp34, 0xA);
    }
}

s32 func_808A1340(DoorShutter *arg0) {
    Vec3f sp2C;
    u8 temp_v0;
    Vec3f *phi_a2;

    if (arg0->actor.velocity.y == 0.0f) {
        func_808A1288(arg0);
        if (arg0->unk163 != 7) {
            Audio_PlayActorSound2(&arg0->actor, 0x2814U);
        }
    }
    temp_v0 = arg0->unk163;
    if (temp_v0 == 7) {
        if (temp_v0 == 7) {
            func_800B9010(&arg0->actor, 0x2184U);
        }
        if (arg0->unk163 == 7) {
            phi_a2 = &D_808A22C4;
        } else {
            phi_a2 = &D_808A22D0;
        }
        Lib_Vec3f_TranslateAndRotateY(&arg0->actor.home.pos, arg0->actor.shape.rot.y, phi_a2, &sp2C);
        Math_StepToF(&arg0->actor.velocity.y, 5.0f, 0.5f);
        if (Math_Vec3f_StepToXZ(&arg0->actor.world.pos, &sp2C, arg0->actor.velocity.y) == 0.0f) {
            return 1;
        }
        goto block_13;
    }
    Math_StepToF(&arg0->actor.velocity.y, 15.0f, 3.0f);
    if (Math_StepToF(&arg0->actor.world.pos.y, arg0->actor.home.pos.y + 200.0f, arg0->actor.velocity.y) != 0) {
        return 1;
    }
block_13:
    return 0;
}

s32 func_808A1478(Actor *arg0, GlobalContext *arg1, f32 arg2) {
    if ((1.0f - arg2) == arg0->unk168) {
        if (arg2 == 1.0f) {
            Audio_PlayActorSound2(arg0, 0x285AU);
        } else {
            Audio_PlayActorSound2(arg0, 0x2859U);
        }
        if ((arg0->unk160 != -1) && (ActorCutscene_GetCurrentIndex() == arg0->unk160)) {
            func_800B724C(arg1, arg0, 1U);
        }
    }
    if (Math_StepToF(arg0 + 0x168, arg2, 0.2f) != 0) {
        return 1;
    }
    return 0;
}

void func_808A1548(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;

    if (func_808A1478(arg0, arg1, 1.0f) != 0) {
        if (Flags_GetSwitch(arg1, arg0->params & 0x7F) != 0) {
            arg0->unk160 = (s16) arg0->cutscene;
            if (ActorCutscene_GetCanPlayNext(arg0->unk160) != 0) {
                ActorCutscene_StartAndSetUnkLinkFields(arg0->unk160, arg0);
                func_808A08F0((DoorShutter *) arg0, func_808A1784);
                arg0->unk167 = -1;
                return;
            }
            ActorCutscene_SetIntentToPlay(arg0->unk160);
            return;
        }
        if (func_808A0E28(arg0, arg1) != 0) {
            temp_a0 = arg1->actorCtx.actorList[2].first;
            temp_a0->unk37C = -1;
            temp_a0->unk380 = arg0;
            arg0->textId = 0x1800;
            func_80122F28((Player *) temp_a0, MIPS2C_ERROR(Read from unset register $a1), MIPS2C_ERROR(Read from unset register $a2));
        }
        // Duplicate return node #7. Try simplifying control flow for better match
    }
}

void func_808A1618(DoorShutter *arg0, GlobalContext *arg1) {
    s16 temp_a1;

    if ((arg0->unk15C == 0) && (temp_a1 = arg0->actor.params, arg0 = arg0, (Flags_GetSwitch(arg1, temp_a1 & 0x7F) == 0))) {
        func_808A08F0(arg0, func_808A1548, (GlobalContext *) arg0);
        return;
    }
    func_808A1090(arg0, arg1, arg0);
}

void func_808A1684(DoorShutter *arg0, GlobalContext *arg1) {
    s8 temp_v0;
    s8 phi_v1;
    f32 phi_f0;

    temp_v0 = arg0->unk166;
    if (temp_v0 == 0) {
        phi_v1 = 0;
    } else {
        arg0->unk166 = temp_v0 - 1;
        phi_v1 = arg0->unk166;
    }
    if ((phi_v1 == 0) && (arg1->roomCtx.unk31 == 0) && (func_808A1340(arg0) != 0)) {
        if (arg0->unk162 == 5) {
            phi_f0 = 20.0f;
        } else {
            phi_f0 = 50.0f;
        }
        if (phi_f0 < arg0->actor.xzDistToPlayer) {
            if (arg0->unk163 == 7) {
                arg0->actor.velocity.y = 0.0f;
            } else {
                if (func_808A0974(arg0, arg1) != 0) {
                    arg0->actor.velocity.y = 30.0f;
                }
                Audio_PlayActorSound2(&arg0->actor, 0x281CU);
            }
            func_808A08F0(arg0, func_808A1B48);
        }
    }
}

void func_808A1784(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0_2;
    Actor *temp_a3;
    s16 temp_a0;
    s8 temp_v0;
    u8 temp_v1;

    temp_a3 = arg0;
    if (temp_a3->unk167 != 0) {
        temp_a0 = temp_a3->unk160;
        arg0 = temp_a3;
        if (func_800F22C4(temp_a0, temp_a3) != 0) {
            temp_v0 = arg0->unk167;
            if ((s32) temp_v0 < 0) {
                if ((arg1->state.frames & 1) != 0) {
                    arg0->unk167 = (s8) (temp_v0 + 1);
                    return;
                }
                // Duplicate return node #15. Try simplifying control flow for better match
                return;
            }
            arg0->unk167 = (s8) (temp_v0 - 1);
            return;
        }
        // Duplicate return node #15. Try simplifying control flow for better match
        return;
    }
    arg0 = temp_a3;
    if (func_808A1478(temp_a3, arg1, 0.0f, temp_a3) != 0) {
        temp_v1 = arg0->unk162;
        if ((temp_v1 != 0) && (temp_v1 != 1) && (((temp_a0_2 = arg0, (temp_v1 != 7)) && (temp_v1 != 6)) || (arg0 = arg0, (func_808A0900((DoorShutter *) temp_a0_2, arg1) == 0)))) {
            func_808A08F0((DoorShutter *) arg0, func_808A1618);
        } else {
            func_808A08F0((DoorShutter *) arg0, func_808A1090);
        }
        func_801A2ED8();
    }
}

void func_808A1884(Actor *arg0, GlobalContext *arg1) {
    void *sp54;
    s8 sp53;
    Vec3f sp44;
    ? sp30;
    s8 temp_v0;
    void *temp_t6;
    void *temp_v0_2;
    void *temp_v1;
    s32 phi_v0;

    temp_t6 = arg1->actorCtx.actorList[2].first;
    sp54 = temp_t6;
    temp_v0 = arg0->room;
    if ((s32) temp_v0 >= 0) {
        sp53 = temp_v0;
        Actor_CalcOffsetOrientedToDrawRotation(arg0, &sp44, temp_t6 + 0x24);
        phi_v0 = 1;
        if (sp44.z < 0.0f) {
            phi_v0 = 0;
        }
        arg0->room = *(arg1->doorCtx.transitionActorList + (((s32) (u16) arg0->params >> 0xA) * 0x10) + (phi_v0 * 2));
        temp_v0_2 = arg1 + 0x186E0;
        if (temp_v0 != arg0->room) {
            sp30.unk0 = (s32) temp_v0_2->unk0;
            temp_v1 = arg1 + 0x186F4;
            sp30.unk4 = (s32) temp_v0_2->unk4;
            sp30.unk8 = (s32) temp_v0_2->unk8;
            sp30.unkC = (s32) temp_v0_2->unkC;
            sp30.unk10 = (s32) temp_v0_2->unk10;
            temp_v0_2->unk0 = (s32) temp_v1->unk0;
            temp_v0_2->unk4 = (s32) temp_v1->unk4;
            temp_v0_2->unk8 = (s32) temp_v1->unk8;
            temp_v0_2->unkC = (s32) temp_v1->unkC;
            temp_v0_2->unk10 = (s32) temp_v1->unk10;
            temp_v1->unk0 = (s32) sp30.unk0;
            temp_v1->unk4 = (s32) sp30.unk4;
            temp_v1->unk8 = (s32) sp30.unk8;
            temp_v1->unkC = (s32) sp30.unkC;
            temp_v1->unk10 = (s32) sp30.unk10;
            arg1->roomCtx.activeMemPage ^= 1;
        }
        func_8012EBF8(arg1, arg1 + 0x186E0);
    }
    arg0->unk15C = 0;
    arg0->velocity.y = 0.0f;
    if ((func_808A0974((DoorShutter *) arg0, arg1) != 0) && ((sp54->unkA6C & 0x800) == 0)) {
        func_808A08F0((DoorShutter *) arg0, func_808A1C50);
        if (ActorCutscene_GetCurrentIndex() == 0x7D) {
            func_801226E0(arg1, gSaveContext.respawn[0].data);
            sp54->unkA86 = -1;
            func_800B7298(arg1, NULL, 0x73U);
        }
    }
}

s32 func_808A1A70(Actor *arg0) {
    u8 temp_v0;

    temp_v0 = arg0->unk163;
    if (temp_v0 == 7) {
        if (temp_v0 == 7) {
            func_800B9010(arg0, 0x2185U);
        }
        Math_StepToF(&arg0->velocity.y, 5.0f, 0.5f);
        if (Math_Vec3f_StepToXZ(&arg0->world.pos, &arg0->home.pos, arg0->velocity.y) == 0.0f) {
            return 1;
        }
        goto block_9;
    }
    if (arg0->velocity.y < 20.0f) {
        Math_StepToF(&arg0->velocity.y, 20.0f, 8.0f);
    }
    if (Math_StepToF(&arg0->world.pos.y, arg0->home.pos.y, arg0->velocity.y) != 0) {
        return 1;
    }
block_9:
    return 0;
}

void func_808A1B48(Actor *arg0, GlobalContext *arg1) {
    s16 sp3E;
    s16 temp_v0;
    s32 temp_a0;

    if (func_808A1A70(arg0) != 0) {
        if (arg0->velocity.y > 20.0f) {
            arg0->floorHeight = arg0->home.pos.y;
            func_800BBDAC(arg1, arg0, &arg0->world.pos, 45.0f, 0xA, 8.0f, (s16) 0x1F4, (s16) 0xA, (u8) 0);
        }
        Audio_PlayActorSound2(arg0, 0x281DU);
        temp_v0 = Quake_Add(Play_GetCamera(arg1, 0), 3U);
        temp_a0 = temp_v0 << 0x10;
        sp3E = temp_v0;
        Quake_SetSpeed((s16) (temp_a0 >> 0x10), -0x7F18);
        Quake_SetQuakeValues(sp3E, 2, 0, 0, (s16) 0);
        Quake_SetCountdown(sp3E, 0xA);
        func_8013ECE0(arg0->xyzDistToPlayerSq, 0xB4U, 0x14U, 0x64U);
        func_808A1884(arg0, arg1);
    }
}

void func_808A1C50(DoorShutter *arg0, GlobalContext *arg1) {
    s8 temp_v0;

    temp_v0 = arg0->unk167;
    arg0->unk167 = temp_v0 + 1;
    if ((((s32) temp_v0 < 0x1F) ^ 1) != 0) {
        if (arg1->actorCtx.actorList[2].first->unk394 == 0x73) {
            arg0 = arg0;
            func_800B7298(arg1, NULL, 6U);
        }
        func_808A0974(arg0, arg1);
    }
}

void DoorShutter_Update(Actor *thisx, GlobalContext *globalCtx) {
    DoorShutter *this = (DoorShutter *) thisx;
    DoorShutter *temp_a2;
    PosRot *temp_a0;
    PosRot *temp_a1;

    temp_a2 = this;
    if (((globalCtx->actorCtx.actorList[2].first->unkA6C & 0x100004C0) == 0) || (func_808A0D0C == temp_a2->actionFunc)) {
        this = temp_a2;
        temp_a2->actionFunc(temp_a2, globalCtx);
        temp_a0 = &this->actor.home;
        temp_a1 = &this->actor.world;
        if (this->unk163 == 7) {
            this = this;
            this->actor.home.rot.z = (s16) (s32) (Math_Vec3f_DistXZ(&temp_a0->pos, &temp_a1->pos) * -100.0f);
        }
    }
}

s32 func_808A1D68(Actor *arg0, GlobalContext *arg1) {
    s16 temp_a0;
    s16 temp_a1;
    s16 temp_v1;
    s32 phi_a1;
    s32 phi_a0;
    s32 phi_v0;

    if (func_801233E4(arg1) != 0) {
        return 1;
    }
    temp_v1 = arg0->shape.rot.y;
    temp_a0 = Actor_YawToPoint(arg0, &arg1->view.eye) - temp_v1;
    temp_a1 = arg0->yawTowardsPlayer - temp_v1;
    phi_a1 = (s32) temp_a1;
    phi_a0 = (s32) temp_a0;
    if ((s32) temp_a0 < 0) {
        phi_a0 = -(s32) temp_a0;
    }
    if ((s32) temp_a1 < 0) {
        phi_a1 = -(s32) temp_a1;
    }
    if (((phi_a1 < 0x4000) && (phi_a0 >= 0x4001)) || ((phi_v0 = 1, ((phi_a1 < 0x4001) == 0)) && (phi_a0 < 0x4000))) {
        phi_v0 = 0;
    }
    return phi_v0;
}

void func_808A1E14(Actor *arg0, GlobalContext *arg1) {
    void *sp44;
    GraphicsContext *sp40;
    Gfx *sp30;
    Gfx *sp2C;
    Gfx *sp24;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    TransitionActorEntry *temp_v1;
    f32 temp_f0;
    f32 temp_f4;
    f32 temp_f8;
    s16 temp_v1_2;
    s8 temp_v0;
    u8 temp_t7;
    u8 temp_t8;
    s32 phi_a2;
    f32 phi_f8;
    f32 phi_f4;
    ? phi_a2_2;

    if (func_808A1D68(arg0, arg1) != 0) {
        sp44 = (arg0->unk164 * 0xC) + &D_808A21B0;
        temp_a0 = arg1->state.gfxCtx;
        sp40 = temp_a0;
        func_8012C28C(temp_a0);
        if (arg0->unk164 == 7) {
            SysMatrix_InsertTranslation(0.0f, 64.96f, 0.0f, 1);
            SysMatrix_InsertZRotation_s(arg0->home.rot.z, 1);
            SysMatrix_InsertTranslation(0.0f, -64.96f, 0.0f, 1);
        }
        if (sp44->unk4 != 0) {
            temp_v1 = &arg1->doorCtx.transitionActorList[(s32) (u16) arg0->params >> 0xA];
            if (((s32) arg1->roomCtx.prevRoom.num >= 0) || (temp_v0 = temp_v1->sides[0].room, (temp_v0 == temp_v1->sides[1].room))) {
                temp_v1_2 = arg0->shape.rot.y - Math_Vec3f_Yaw(&arg1->view.eye, &arg0->world.pos);
                phi_a2 = (s32) temp_v1_2;
                if ((s32) temp_v1_2 < 0) {
                    phi_a2 = -(s32) temp_v1_2;
                }
                if (phi_a2 < 0x4000) {
                    SysMatrix_InsertYRotation_f(3.1415927f, 1);
                }
            } else if (arg0->room == temp_v0) {
                SysMatrix_InsertYRotation_f(3.1415927f, 1);
            }
        } else if (arg0->unk162 == 5) {
            temp_v0_2 = sp40->polyOpa.p;
            sp40->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDB060020;
            sp30 = temp_v0_2;
            sp30->words.w1 = Lib_SegmentedToVirtual(*(&D_808A22DC + (arg0->unk15E * 4)));
        }
        temp_v0_3 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0_3 + 8;
        temp_v0_3->words.w0 = 0xDA380003;
        sp2C = temp_v0_3;
        sp2C->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
        temp_v0_4 = sp40->polyOpa.p;
        sp40->polyOpa.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDE000000;
        temp_v0_4->words.w1 = sp44->unk0;
        temp_f0 = arg0->unk168;
        if ((temp_f0 != 0.0f) && (sp44->unk4 != 0)) {
            temp_t7 = sp44->unk8;
            temp_f8 = (f32) temp_t7;
            phi_f8 = temp_f8;
            if ((s32) temp_t7 < 0) {
                phi_f8 = temp_f8 + 4294967296.0f;
            }
            temp_t8 = sp44->unk9;
            temp_f4 = (f32) temp_t8;
            phi_f4 = temp_f4;
            if ((s32) temp_t8 < 0) {
                phi_f4 = temp_f4 + 4294967296.0f;
            }
            SysMatrix_InsertTranslation(0.0f, phi_f8 * (1.0f - temp_f0), phi_f4, 1);
            temp_v0_5 = sp40->polyOpa.p;
            sp40->polyOpa.p = temp_v0_5 + 8;
            temp_v0_5->words.w0 = 0xDA380003;
            sp24 = temp_v0_5;
            sp24->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
            temp_v0_6 = sp40->polyOpa.p;
            sp40->polyOpa.p = temp_v0_6 + 8;
            temp_v0_6->words.w0 = 0xDE000000;
            temp_v0_6->words.w1 = sp44->unk4;
        }
        if (arg0->unk166 != 0) {
            Matrix_Scale(0.01f, 0.01f, 0.025f, 1);
            phi_a2_2 = 0;
            if (arg0->unk162 == 5) {
                phi_a2_2 = 1;
            }
            func_800BC8B8(arg1, arg0->unk166, phi_a2_2);
        }
    }
}

