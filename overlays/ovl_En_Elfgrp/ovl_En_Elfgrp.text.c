? Parameter_AddMagic(void *, s16, Actor *, void *); /* extern */
void func_80A396B0(EnElfgrp *arg0, s32 arg1, s32);  /* static */
s32 func_80A39BD0(GlobalContext *arg1, u8, s32, s32); /* static */
s32 func_80A39C1C(GlobalContext *arg0, s32 arg1, s32); /* static */
void func_80A39CD4(GlobalContext *arg0, s32 arg1, s32 arg2); /* static */
void func_80A39DC8(EnElfgrp *arg0, GlobalContext *arg1, s32 arg2, s32 arg3); /* static */
? func_80A39F50(GlobalContext *arg0);               /* static */
s32 func_80A39FBC(GlobalContext *arg0, GlobalContext *, Actor *); /* static */
void func_80A3A044(void *arg0, Actor *);            /* static */
void func_80A3A0AC(void *arg0, GlobalContext *arg1); /* static */
void func_80A3A0F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3A210(Actor *arg0, void *arg1);        /* static */
void func_80A3A274(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3A398(EnElfgrp *arg0, GlobalContext *arg1); /* static */
void func_80A3A484(EnElfgrp *arg0, GlobalContext *arg1); /* static */
void func_80A3A4AC(EnElfgrp *arg0, GlobalContext *arg1); /* static */
void func_80A3A520(EnElfgrp *arg0, GlobalContext *arg1); /* static */
void func_80A3A600(EnElfgrp *arg0, GlobalContext *arg1); /* static */
void func_80A3A610(Actor *arg0, void *arg1);        /* static */
void func_80A3A6F4(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3A77C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A3A7FC(EnElfgrp *arg0, GlobalContext *arg1); /* static */
void func_80A3A8F8(EnElfgrp *arg0, GlobalContext *arg1); /* static */

typedef struct EnElfgrp {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s16 unk144;                        /* inferred */
    /* 0x0146 */ u8 unk146;                         /* inferred */
    /* 0x0147 */ u8 unk147;                         /* inferred */
    /* 0x0148 */ s8 unk148;                         /* inferred */
    /* 0x0149 */ char pad149[0x1];                  /* maybe part of unk148[2]? */
    /* 0x014A */ u16 unk14A;                        /* inferred */
    /* 0x014C */ void (*actionFunc)(EnElfgrp *, GlobalContext *);
} EnElfgrp;                                         /* size 0x150 */

void func_80A396B0(EnElfgrp *arg0, s32 arg1) {
    s32 temp_s0;
    s8 temp_a0;
    s32 phi_s0;

    phi_s0 = arg1;
    if (arg1 > 0) {
loop_1:
        temp_a0 = arg0->actor.cutscene;
        if (temp_a0 != -1) {
            temp_s0 = phi_s0 - 1;
            arg0->actor.cutscene = ActorCutscene_GetAdditionalCutscene((s16) temp_a0);
            phi_s0 = temp_s0;
            if (temp_s0 > 0) {
                goto loop_1;
            }
        }
    }
}

void EnElfgrp_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnElfgrp *this = (EnElfgrp *) thisx;
    s32 sp24;
    s16 temp_a1;
    s32 temp_a2;
    s32 temp_a2_2;
    s32 temp_v0;
    u8 temp_t7;
    u8 temp_v0_2;
    s32 phi_a2;

    temp_t7 = this->actor.params & 0xF;
    temp_a2 = temp_t7 & 0xFF;
    this->unk147 = temp_t7;
    this->unk148 = 0;
    this->unk14A = 0;
    this->actor.focus.pos.y += 40.0f;
    this->actor.flags &= -2;
    if ((temp_a2 == 1) || (temp_a2 == 2) || (temp_a2 == 3) || (temp_a2 == 4)) {
        this->unk148 = temp_a2 - 1;
        temp_v0 = func_80A39C1C(globalCtx, temp_a2, temp_a2);
        temp_a2_2 = temp_v0;
        this->unk146 = 1 << this->unk147;
        phi_a2 = temp_a2_2;
        if (temp_v0 < 0x19) {
            sp24 = temp_v0;
            func_80A39DC8(this, globalCtx, temp_a2_2, 0);
            phi_a2 = sp24;
        }
        if (phi_a2 >= 0x19) {
            this->actionFunc = func_80A3A520;
            func_80A396B0(this, 2, phi_a2);
            return;
        }
        sp24 = phi_a2;
        if ((func_80A39BD0(globalCtx, this->unk147, phi_a2) + phi_a2) >= 0x19) {
            temp_v0_2 = this->unk147;
            this->actionFunc = func_80A3A398;
            if (temp_v0_2 != 1) {
                if (temp_v0_2 != 2) {
                    if (temp_v0_2 != 3) {
                        if (temp_v0_2 != 4) {
                            return;
                        }
                        if (gSaveContext.inventory.items[gItemSlots->unk10] == 0x10) {
                            func_80A396B0(this, 1, phi_a2);
                            return;
                        }
                        this->unk14A |= 0x10;
                        return;
                    }
                    if (gSaveContext.doubleDefense != 0) {
                        func_80A396B0(this, 1, phi_a2);
                        return;
                    }
                    // Duplicate return node #49. Try simplifying control flow for better match
                    return;
                }
                if (gSaveContext.doubleMagic == 1) {
                    func_80A396B0(this, 1, phi_a2);
                    return;
                }
                // Duplicate return node #49. Try simplifying control flow for better match
                return;
            }
            if ((gSaveContext.weekEventReg[23] & 2) != 0) {
                func_80A396B0(this, 1, phi_a2);
                return;
            }
            this->unk14A |= 4;
            return;
        }
        if (func_80A39BD0(globalCtx, this->unk147, phi_a2) != 0) {
            this->actionFunc = func_80A3A7FC;
            this->actor.textId = (this->unk147 * 3) + 0x581;
            return;
        }
        this->actionFunc = func_80A3A8F8;
        if ((gSaveContext.weekEventReg[9] & this->unk146) != 0) {
            this->actor.textId = (this->unk147 * 3) + 0x580;
            return;
        }
        this->actor.textId = (this->unk147 * 3) + 0x57F;
        return;
    }
    this->unk146 = 1;
    if (func_80A39C1C(globalCtx, 0, temp_a2) >= 0x19) {
        temp_a1 = this->actor.home.rot.z;
        this->actionFunc = func_80A3A520;
        if ((temp_a1 != 0) && (Flags_GetSwitch(globalCtx, (s32) temp_a1) != 0)) {
            this->actionFunc = func_80A3A600;
            return;
        }
        if (gSaveContext.inventory.items[gItemSlots->unk40] == 0x40) {
            func_80A396B0(this, 4);
            return;
        }
        if (gSaveContext.inventory.items[gItemSlots->unk32] != 0x32) {
            func_80A396B0(this, 5);
            return;
        }
        this->unk14A |= 2;
        func_80A396B0(this, 6);
        return;
    }
    if ((gSaveContext.weekEventReg[8] & 0x80) != 0) {
        func_80A39DC8(this, globalCtx, 0x18, 0);
        this->actionFunc = func_80A3A398;
        if (gSaveContext.inventory.items[gItemSlots->unk32] == 0x32) {
            if (gSaveContext.inventory.items[gItemSlots->unk40] == 0x40) {
                func_80A396B0(this, 2);
                return;
            }
            func_80A396B0(this, 3);
            this->unk14A |= 2;
            return;
        }
        if (gSaveContext.magicAcquired == 1) {
            func_80A396B0(this, 1);
            return;
        }
        // Duplicate return node #49. Try simplifying control flow for better match
        return;
    }
    func_80A39DC8(this, globalCtx, 0x18, 0);
    this->actionFunc = func_80A3A8F8;
    if ((gSaveContext.weekEventReg[9] & this->unk146) != 0) {
        this->actor.textId = 0x580;
    } else {
        this->actor.textId = 0x578;
    }
    this->actor.flags |= 9;
}

void EnElfgrp_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnElfgrp *this = (EnElfgrp *) thisx;

}

s32 func_80A39BD0(s32 arg1) {
    s8 sp1F;

    if ((arg1 <= 0) || (arg1 >= 5)) {
        return 0;
    }
    sp1F = (&gSaveContext.inventory.dungeonKeys[9])[arg1];
    return (sp1F - func_80A39C1C()) + 0xA;
}

s32 func_80A39C1C(GlobalContext *arg0, s32 arg1) {
    s32 temp_v1;
    s32 phi_v1;

    if ((arg1 < 0) || (arg1 >= 5)) {
        return 0;
    }
    if (arg1 == 0) {
        if ((*(&gSaveContext.roomInf[0][5] + (arg0->sceneNum * 0x1C)) & 1) != 0) {
            return 0x19;
        }
        return 0x18;
    }
    temp_v1 = ((u32) *(&gSaveContext.roomInf[0][5] + (arg0->sceneNum * 0x1C)) >> ((arg1 * 5) + 0x1C)) & 0x1F;
    phi_v1 = temp_v1;
    if (temp_v1 < 0xA) {
        phi_v1 = 0xA;
    } else if (temp_v1 >= 0x1A) {
        phi_v1 = 0x19;
    }
    return phi_v1;
}

void func_80A39CD4(GlobalContext *arg0, s32 arg1, s32 arg2) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v0_4;

    if ((arg1 >= 0) && (arg1 < 5) && (arg2 >= 0xA) && (arg2 < 0x1A)) {
        if (arg1 == 0) {
            if (arg2 == 0x19) {
                temp_v0 = &gSaveContext + (arg0->sceneNum * 0x1C);
                temp_v0->unk10C = (s32) (temp_v0->unk10C | 1);
                return;
            }
            temp_v0_2 = &gSaveContext + (arg0->sceneNum * 0x1C);
            temp_v0_2->unk10C = (s32) (temp_v0_2->unk10C & ~1);
            return;
        }
        temp_v1 = (arg1 * 5) - 4;
        temp_v0_3 = &gSaveContext + (arg0->sceneNum * 0x1C);
        temp_v0_3->unk10C = (s32) (temp_v0_3->unk10C & ~(0x1F << temp_v1));
        temp_v0_4 = &gSaveContext + (arg0->sceneNum * 0x1C);
        temp_v0_4->unk10C = (s32) (temp_v0_4->unk10C | (arg2 << temp_v1));
        // Duplicate return node #9. Try simplifying control flow for better match
    }
}

void func_80A39DC8(EnElfgrp *arg0, GlobalContext *arg1, s32 arg2, s32 arg3) {
    f32 sp70;
    f32 sp6C;
    Actor *temp_v0_2;
    f32 temp_f20;
    s32 temp_s0;
    void *temp_v0;
    s32 phi_s3;
    s32 phi_s0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    if (arg3 == 0) {
        arg0->unk14A |= 8;
    }
    if (arg3 == 0) {
        sp6C.unk0 = arg0->actor.world.pos.x;
        sp6C.unk4 = (s32) arg0->actor.world.pos.y;
        sp6C.unk8 = (s32) arg0->actor.world.pos.z;
        sp70 += 20.0f;
        phi_s3 = ((arg0->unk147 & 7) << 6) | 1;
    } else {
        sp6C.unk0 = temp_v0->world.pos.x;
        sp6C.unk4 = (f32) temp_v0->world.pos.y;
        sp6C.unk8 = (f32) temp_v0->world.pos.z;
        sp70 += 20.0f;
        phi_s3 = ((arg0->unk147 & 7) << 6) | 8;
    }
    phi_s0 = 0;
    if (arg2 > 0) {
        do {
            temp_f20 = randPlusMinusPoint5Scaled(20.0f);
            temp_v0_2 = Actor_Spawn(arg1 + 0x1CA0, arg1, 0x1B0, temp_f20 + sp6C, sp70, randPlusMinusPoint5Scaled(20.0f) + sp74, (s16) 0, (s16) 0, (s16) 0, (s16) phi_s3);
            temp_s0 = phi_s0 + 1;
            phi_s0 = temp_s0;
            if (temp_v0_2 != 0) {
                temp_v0_2->home.pos.x = arg0->actor.home.pos.x;
                temp_v0_2->home.pos.y = arg0->actor.home.pos.y + 20.0f;
                temp_v0_2->home.pos.z = arg0->actor.home.pos.z;
            }
        } while (temp_s0 != arg2);
    }
}

? func_80A39F50(GlobalContext *arg0) {
    s32 temp_v1;
    u16 temp_v1_2;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg0->actorCtx.actorList[7].first;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if ((phi_v0->id != 0x1B0) || ((temp_v1 = phi_v0->params & 0xF, (temp_v1 != 1)) && (temp_v1 != 8))) {

            } else {
                temp_v1_2 = phi_v0->unk214;
                if ((temp_v1_2 & 1) == 0) {
                    phi_v0->unk214 = (u16) (temp_v1_2 | 1);
                }
            }
            temp_v0_2 = phi_v0->next;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
    return 0;
}

s32 func_80A39FBC(GlobalContext *arg0) {
    s32 temp_a0;
    u16 temp_a0_2;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    s32 phi_v1_3;

    temp_v0 = arg0->actorCtx.actorList[7].first;
    phi_v0 = temp_v0;
    phi_v1 = 0x1E;
    phi_v1_2 = 0x1E;
    if (temp_v0 != 0) {
loop_2:
        phi_v1_3 = phi_v1;
        if ((phi_v0->id != 0x1B0) || ((temp_a0 = phi_v0->params & 0xF, (temp_a0 != 1)) && (temp_a0 != 8))) {
            goto block_10;
        }
        temp_a0_2 = phi_v0->unk214;
        if ((temp_a0_2 & 4) == 0) {
            phi_v0->unk214 = (u16) (temp_a0_2 | 4);
            if (phi_v1 >= 0x64) {
                return phi_v1;
            }
            phi_v0->unk220 = phi_v1;
            phi_v1_3 = phi_v1 + 5;
            goto block_10;
        }
block_10:
        temp_v0_2 = phi_v0->next;
        phi_v0 = temp_v0_2;
        phi_v1 = phi_v1_3;
        phi_v1_2 = phi_v1_3;
        if (temp_v0_2 == 0) {
            // Duplicate return node #11. Try simplifying control flow for better match
            return phi_v1_2;
        }
        goto loop_2;
    }
    return phi_v1_2;
}

void func_80A3A044(void *arg0) {
    s32 temp_v1;
    void *temp_v0;
    void *temp_v0_2;
    void *phi_v0;

    temp_v0 = arg0->unk1D08;
    phi_v0 = temp_v0;
    if (temp_v0 != 0) {
        do {
            if ((phi_v0->unk0 != 0x1B0) || ((temp_v1 = phi_v0->unk1C & 0xF, (temp_v1 != 1)) && (temp_v1 != 8))) {

            } else {
                phi_v0->unk14 = 0x14;
                phi_v0->unk214 = (u16) (phi_v0->unk214 | 2);
            }
            temp_v0_2 = phi_v0->unk12C;
            phi_v0 = temp_v0_2;
        } while (temp_v0_2 != 0);
    }
}

void func_80A3A0AC(void *arg0, GlobalContext *arg1) {
    if (func_800EE29C(arg1, 0x64U) == 0) {
        arg0->unk14C = func_80A3A600;
        ActorCutscene_Stop((s16) arg0->unk38);
    }
}

void func_80A3A0F4(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0;
    s32 phi_v0;

    if (arg0->unk144 == 0xA) {
        play_sound(0x4834U);
        temp_v0 = arg0->params & 0xF;
        if (temp_v0 < 4) {
            Actor_Spawn(arg1 + 0x1CA0, arg1, 0x48, arg0->world.pos.x, arg0->world.pos.y + 30.0f, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) (temp_v0 + 4));
        } else {
            Actor_Spawn(&arg1->actorCtx, arg1, 0x48, arg0->world.pos.x, arg0->world.pos.y + 30.0f, arg0->world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 4);
        }
    }
    phi_v0 = (s32) arg0->unk144;
    if (((s32) arg0->unk144 >= 0xB) && ((arg0->unk14A & 1) != 0)) {
        func_800B9010(arg0, 0x2188U);
        phi_v0 = (s32) arg0->unk144;
    }
    if (phi_v0 == 0) {
        arg0->unk14C = func_80A3A0AC;
    }
}

void func_80A3A210(Actor *arg0, void *arg1) {
    Actor *temp_a2;
    Actor *phi_a2;

    temp_a2 = arg0;
    phi_a2 = temp_a2;
    if (temp_a2->unk144 == 0) {
        temp_a2->unk14C = func_80A3A0F4;
        arg0 = temp_a2;
        func_80A3A044(arg1, temp_a2);
        arg0->unk144 = 0x1E;
        phi_a2 = arg0;
    }
    if ((phi_a2->unk14A & 1) != 0) {
        func_800B9010(phi_a2, 0x2188U);
    }
}

void func_80A3A274(Actor *arg0, GlobalContext *arg1) {
    u16 temp_v1;
    u8 temp_a1;

    if (func_800EE29C(arg1, 0x64U) != 0) {
        if ((arg0->unk14A & 1) != 0) {
            func_800B9010(arg0, 0xCFU);
        }
        temp_v1 = arg1->csCtx.npcActions[func_800EE200(arg1, 0x64U)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                return;
            }
            func_80A39F50(arg1);
            arg0->unk14C = func_80A3A210;
            arg0->unk144 = 0x5A;
            // Duplicate return node #12. Try simplifying control flow for better match
            return;
        }
        if ((arg0->unk14A & 1) == 0) {
            temp_a1 = arg0->unk147;
            if (temp_a1 == 0) {
                func_80A39DC8((EnElfgrp *) arg0, arg1, 1, 1);
            } else {
                func_80A39DC8((EnElfgrp *) arg0, arg1, func_80A39BD0(arg1, temp_a1, 1, 1), 1);
            }
            arg0->unk14A = (u16) (arg0->unk14A | 1);
            func_80A39CD4(arg1, (s32) arg0->unk147, 0x19);
            return;
        }
        // Duplicate return node #12. Try simplifying control flow for better match
    }
}

void func_80A3A398(EnElfgrp *arg0, GlobalContext *arg1) {
    u16 phi_v1;
    u16 phi_v1_2;

    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, &arg0->actor);
        arg0->actionFunc = (void (*)(EnElfgrp *, GlobalContext *)) func_80A3A274;
        Actor_UnsetSwitchFlag(arg1, (s32) (arg0->actor.params & 0xFE00) >> 9);
        if ((arg0->unk14A & 2) != 0) {
            Item_Give(arg1, 0x40U);
        }
        phi_v1 = arg0->unk14A;
        if ((arg0->unk14A & 4) != 0) {
            gSaveContext.weekEventReg[23] |= 2;
            phi_v1 = arg0->unk14A;
        }
        phi_v1_2 = phi_v1;
        if ((phi_v1 & 0x10) != 0) {
            Item_Give(arg1, 0x10U);
            phi_v1_2 = arg0->unk14A;
        }
        arg0->unk14A = phi_v1_2 & 0xFFF7;
        return;
    }
    if (arg0->actor.xzDistToPlayer < 350.0f) {
        ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
    }
}

void func_80A3A484(void *arg0, ? arg1) {
    if (arg0->unk144 == 0) {
        arg0->unk14C = func_80A3A0F4;
        arg0->unk144 = 0x1E;
    }
}

void func_80A3A4AC(EnElfgrp *arg0, GlobalContext *arg1) {
    if ((func_800EE29C(arg1, 0x64U) != 0) && (arg1->csCtx.npcActions[func_800EE200(arg1, 0x64U)]->unk0 == 3)) {
        arg0->actionFunc = func_80A3A484;
        arg0->unk144 = 0x5A;
    }
}

void func_80A3A520(EnElfgrp *arg0, GlobalContext *arg1) {
    s16 temp_a1;

    if (func_800EE29C(arg1, 0x67U) != 0) {
        arg0->actionFunc = func_80A3A600;
        return;
    }
    if (ActorCutscene_GetCanPlayNext((s16) arg0->actor.cutscene) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields((s16) arg0->actor.cutscene, &arg0->actor);
        arg0->actionFunc = func_80A3A4AC;
        Actor_SetSwitchFlag(arg1, (s32) (arg0->actor.params & 0xFE00) >> 9);
        if ((arg0->unk14A & 2) != 0) {
            Item_Give(arg1, 0x40U);
        }
        temp_a1 = arg0->actor.home.rot.z;
        if (temp_a1 != 0) {
            Actor_SetSwitchFlag(arg1, (s32) temp_a1);
            return;
        }
        // Duplicate return node #9. Try simplifying control flow for better match
        return;
    }
    if (arg0->actor.xzDistToPlayer < 350.0f) {
        ActorCutscene_SetIntentToPlay((s16) arg0->actor.cutscene);
    }
}

void func_80A3A600(EnElfgrp *arg0, GlobalContext *arg1) {

}

void func_80A3A610(Actor *arg0, void *arg1) {
    void *sp1C;
    Actor *temp_a2;
    s16 temp_v1;
    s32 phi_v1;
    Actor *phi_a2;

    temp_a2 = arg0;
    temp_v1 = temp_a2->unk144;
    phi_v1 = (s32) temp_v1;
    phi_a2 = temp_a2;
    if (temp_v1 == 0x3C) {
        sp1C = arg1->unk1CCC;
        arg0 = temp_a2;
        Parameter_AddMagic(arg1, (s16) (gSaveContext.unk_3F30 + (gSaveContext.doubleMagic * 0x30) + 0x30), temp_a2, arg1);
        gSaveContext.healthAccumulator = 0x140;
        phi_v1 = (s32) arg0->unk144;
        phi_a2 = arg0;
    }
    if (phi_v1 > 0) {
        arg1->unk1CCC->unk118 = 0x64;
        arg1->unk1CCC->unkA6C = (s32) (arg1->unk1CCC->unkA6C | 0x20000000);
        Audio_PlayActorSound2(phi_a2, 0x2189U);
        return;
    }
    arg1->unk1CCC->unk118 = 0;
    arg1->unk1CCC->unkA6C = (s32) (arg1->unk1CCC->unkA6C & 0xDFFFFFFF);
    phi_a2->unk14C = func_80A3A600;
    phi_a2->unk14A = (u16) (phi_a2->unk14A | 8);
}

void func_80A3A6F4(Actor *arg0, GlobalContext *arg1) {
    void *sp18;
    Actor *temp_a2;
    Actor *temp_a2_2;
    void *temp_v1;

    temp_a2 = arg0;
    temp_v1 = arg1->actorCtx.actorList[2].first;
    arg0 = temp_a2;
    sp18 = temp_v1;
    temp_a2_2 = arg0;
    if (func_800B867C(temp_a2, arg1) != 0) {
        temp_v1->freezeTimer = 0x64;
        temp_v1->unkA6C = (s32) (temp_v1->unkA6C | 0x20000000);
        arg0 = temp_a2_2;
        arg0->unk144 = func_80A39FBC(arg1, arg1, temp_a2_2);
        arg0->unk14C = func_80A3A610;
        arg0->unk14A = (u16) (arg0->unk14A & 0xFFF7);
    }
}

void func_80A3A77C(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a0;
    Actor *temp_a2;
    void *temp_v0;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    temp_v0->freezeTimer = 0x64;
    temp_a0 = arg0;
    temp_v0->unkA6C = (s32) (temp_v0->unkA6C | 0x20000000);
    arg0 = arg0;
    temp_a2 = arg0;
    if (func_800B867C(temp_a0, arg1) != 0) {
        arg0 = temp_a2;
        arg0->unk144 = func_80A39FBC(arg1, arg1, temp_a2);
        arg0->unk14C = func_80A3A610;
        arg0->unk14A = (u16) (arg0->unk14A & 0xFFF7);
    }
}

void func_80A3A7FC(EnElfgrp *arg0, GlobalContext *arg1) {
    s32 temp_s0;
    s32 temp_s0_2;
    s32 temp_v0;
    s32 phi_s0;

    if (func_800B84D0(&arg0->actor, arg1) != 0) {
        gSaveContext.weekEventReg[9] |= arg0->unk146;
        arg0->actionFunc = (void (*)(EnElfgrp *, GlobalContext *)) func_80A3A6F4;
        temp_v0 = func_80A39BD0(arg1, arg0->unk147);
        temp_s0 = temp_v0;
        func_80A39DC8(arg0, arg1, temp_v0, 1);
        temp_s0_2 = temp_s0 + func_80A39C1C(arg1, (s32) arg0->unk147);
        phi_s0 = temp_s0_2;
        if (temp_s0_2 >= 0x1A) {
            phi_s0 = 0x19;
        }
        func_80A39CD4(arg1, (s32) arg0->unk147, phi_s0);
        return;
    }
    if (arg0->actor.xzDistToPlayer < 280.0f) {
        arg0->actor.flags |= 0x10000;
        func_800B8614(&arg0->actor, arg1, 300.0f);
    }
}

void func_80A3A8F8(EnElfgrp *arg0, GlobalContext *arg1) {
    Actor *sp20;
    Actor *temp_v1;
    GlobalContext *temp_a0;
    GlobalContext *temp_a3;
    u8 temp_a1;

    temp_a3 = arg1;
    temp_v1 = temp_a3->actorCtx.actorList[2].first;
    arg1 = temp_a3;
    sp20 = temp_v1;
    if (func_800B84D0(&arg0->actor, temp_a3) != 0) {
        gSaveContext.weekEventReg[9] |= arg0->unk146;
        arg0->actionFunc = (void (*)(EnElfgrp *, GlobalContext *)) func_80A3A6F4;
        return;
    }
    temp_a1 = arg0->unk147;
    temp_a0 = arg1;
    if ((temp_a1 != 0) && (sp20 = temp_v1, arg1 = arg1, (func_80A39BD0(temp_a0, temp_a1) > 0))) {
        arg0->actionFunc = func_80A3A7FC;
        return;
    }
    if (arg0->actor.xzDistToPlayer < 30.0f) {
        if (gSaveContext.playerForm == 3) {
            arg0->actor.flags &= 0xFFFEFFFF;
            temp_v1->freezeTimer = 0x64;
            temp_v1->unkA6C = (s32) (temp_v1->unkA6C | 0x20000000);
            func_801518B0(arg1, arg0->actor.textId, &arg0->actor);
            arg0->actionFunc = (void (*)(EnElfgrp *, GlobalContext *)) func_80A3A77C;
            gSaveContext.weekEventReg[9] |= arg0->unk146;
            return;
        }
        arg0->actor.flags |= 0x10000;
        func_800B8614(&arg0->actor, arg1, 100.0f);
        return;
    }
    arg0->actor.flags &= 0xFFFEFFFF;
}

void EnElfgrp_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnElfgrp *this = (EnElfgrp *) thisx;
    EnElfgrp *temp_a0;
    s16 temp_v0;
    EnElfgrp *phi_a0;

    this->actionFunc(this, globalCtx);
    temp_a0 = this;
    phi_a0 = temp_a0;
    if ((temp_a0->unk14A & 8) != 0) {
        this = temp_a0;
        Audio_PlayActorSound2(&temp_a0->actor, 0x2188U);
        phi_a0 = this;
    }
    temp_v0 = phi_a0->unk144;
    if (temp_v0 != 0) {
        phi_a0->unk144 = temp_v0 - 1;
    }
}

