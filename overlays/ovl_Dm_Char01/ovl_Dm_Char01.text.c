void func_80AA8698(DmChar01 *, GlobalContext *);    /* static */
void func_80AA884C(DmChar01 *, GlobalContext *);    /* static */
void func_80AA88A8(DmChar01 *, GlobalContext *);    /* static */
void func_80AA892C(DmChar01 *, GlobalContext *);    /* static */
void func_80AA8C28(DmChar01 *, GlobalContext *);    /* static */
void func_80AA8F0C(DmChar01 *arg0, GlobalContext *arg1); /* static */
void func_80AA8F1C(DmChar01 *, GlobalContext *);    /* static */
void func_80AA8F2C(DmChar01 *, GlobalContext *);    /* static */
void func_80AA9020(DmChar01 *, GlobalContext *);    /* static */
void func_80AA90AC(DmChar01 *, GlobalContext *);    /* static */
void func_80AA90F4(DmChar01 *, GlobalContext *);    /* static */
extern ? D_06009928;
extern void D_06009D70;
extern CollisionHeader D_06009E4C;
extern Gfx D_0600A398;
extern void D_0600A5C0;
extern Gfx D_0600A8F8;
extern void D_0600AA50;
extern Gfx D_0600AF98;
extern void D_0600B1A0;
extern Gfx D_0600DE50;
extern Gfx D_0600DF18;
extern ? D_0600F3C0;
extern void D_0600F768;
extern Gfx D_0600FAE8;
extern CollisionHeader D_0600FE5C;
extern void D_0600FE90;
extern CollisionHeader D_06010C3C;
extern Gfx D_06010EF0;
extern Gfx D_06010FD8;
extern void D_060110B8;
static void D_80AA9DC0;                             /* unable to generate initializer */
static s16 D_80AA9DC2 = {0xFFD8, 0x1B, 0, 0, 0x400, 0xA568, 0x59FF};
static ? D_80AA9DD0;                                /* unable to generate initializer */
static InitChainEntry D_80AAAAB0;                   /* unable to generate initializer */
static s16 D_80AAAAB4 = 0;
static f32 D_80AAAAB8 = 0.0f;
static f32 D_80AAAABC = 0.0f;
static s16 D_80AAAAC0 = 0;
static s16 D_80AAAAC4 = 0;
static s16 D_80AAAAC8 = 0;
static s16 D_80AAAACC = 0;
static s16 D_80AAAE20;
static s16 D_80AAAE22;
static s16 D_80AAAE24;
static s16 D_80AAAE26;
ActorInit Dm_Char01_InitVars = {
    0x193,
    7,
    0x2000030,
    0x1A2,
    0x350,
    DmChar01_Init,
    DmChar01_Destroy,
    DmChar01_Update,
    DmChar01_Draw,
};

typedef struct DmChar01 {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ s32 unk144;                        /* inferred */
    /* 0x0148 */ char pad148[0x58];                 /* maybe part of unk144[23]? */
    /* 0x01A0 */ void (*actionFunc)(DmChar01 *, GlobalContext *);
    /* 0x01A4 */ char pad1A4[0x8];                  /* maybe part of actionFunc[3]? */
    /* 0x01AC */ s16 unk1AC;                        /* inferred */
    /* 0x01AE */ char pad1AE[0x198];                /* maybe part of unk1AC[205]? */
    /* 0x0346 */ s16 unk346;                        /* inferred */
    /* 0x0348 */ f32 unk348;                        /* inferred */
    /* 0x034C */ u8 unk34C;                         /* inferred */
    /* 0x034D */ u8 unk34D;                         /* inferred */
    /* 0x034E */ char pad34E[0x2];                  /* maybe part of unk34D[3]? */
} DmChar01;                                         /* size 0x350 */

void DmChar01_Init(Actor *thisx, GlobalContext *globalCtx) {
    DmChar01 *this = (DmChar01 *) thisx;
    s16 temp_t7;
    s16 temp_t7_2;
    s16 temp_v0;
    u8 *temp_v1;
    u8 *temp_v1_2;
    void *temp_v0_2;
    void *temp_v0_3;
    void *temp_v1_3;
    s16 phi_t7;
    u8 *phi_v1;
    void *phi_v0;
    s16 phi_t7_2;
    u8 *phi_v1_2;
    void *phi_v0_2;

    Actor_ProcessInitChain(&this->actor, &D_80AAAAB0);
    Actor_SetScale(&this->actor, 1.0f);
    this->unk346 = 0;
    this->unk34D = 0;
    D_80AAAE24 = 0;
    D_80AAAE26 = 0;
    temp_v0 = this->actor.params;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    this->actionFunc = func_80AA88A8;
                    return;
                }
                this->actor.world.rot.y += 0x8000;
                this->actor.shape.rot.y += 0x8000;
                if ((gSaveContext.weekEventReg[20] & 1) == 0) {
                    Actor_MarkForDeath(&this->actor);
                    return;
                }
                Actor_Spawn(&globalCtx->actorCtx, globalCtx, 0x183, 5.0f, 202.0f, 294.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0x80);
                BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
                BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_0600FE5C);
                this->unk34D = 1;
                if ((gSaveContext.weekEventReg[20] & 2) == 0) {
                    this->actionFunc = func_80AA9020;
                    this->actor.world.pos.y -= 120.0f;
                    return;
                }
                goto block_25;
            }
            this->unk34C = 0;
            if ((gSaveContext.weekEventReg[20] & 1) == 0) {
                this->unk34C = 1;
                this->actor.world.pos.y -= 400.0f;
            }
            this->actor.world.rot.y += 0x8000;
            this->actor.shape.rot.y += 0x8000;
            BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
            BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06010C3C);
            this->unk34D = 1;
            this->actionFunc = func_80AA8F2C;
            this->unk348 = 200.0f;
            return;
        }
        if (((gSaveContext.weekEventReg[20] & 2) != 0) || (gSaveContext.sceneSetupIndex == 1)) {
            this->unk34C = 1;
            this->actionFunc = func_80AA8F1C;
            return;
        }
        this->actionFunc = func_80AA8698;
        return;
    }
    if ((gSaveContext.weekEventReg[20] & 2) != 0) {
        this->unk34C = 2;
block_25:
        this->actionFunc = func_80AA8F1C;
        return;
    }
    if (gSaveContext.sceneSetupIndex == 0) {
        globalCtx->envCtx.unk_1F = 5;
        globalCtx->envCtx.unk_20 = 5;
    }
    this->unk348 = 255.0f;
    temp_v1 = &this->actor.category;
    this->unk1AC = (s16) (s32) ((f32) D_80AA9DC2 * 409.6f);
    temp_v0_2 = &D_80AA9DD0 + 0x40;
    temp_t7 = temp_v0_2->unk-3E;
    phi_t7 = temp_t7;
    phi_v1 = temp_v1;
    phi_v0 = temp_v0_2;
    phi_t7_2 = temp_t7;
    phi_v1_2 = temp_v1;
    phi_v0_2 = temp_v0_2;
    if (temp_v0_2 != &Dm_Char01_InitVars) {
        do {
            temp_v0_3 = phi_v0 + 0x40;
            temp_v1_2 = phi_v1 + 8;
            temp_v1_2->unk1A4 = (s16) (s32) ((f32) phi_t7 * 409.6f);
            temp_v1_2->unk1A6 = (s16) (s32) ((f32) temp_v0_3->unk-6E * 409.6f);
            temp_v1_2->unk1A8 = (s16) (s32) ((f32) temp_v0_3->unk-5E * 409.6f);
            temp_v1_2->unk1AA = (s16) (s32) ((f32) temp_v0_3->unk-4E * 409.6f);
            temp_t7_2 = temp_v0_3->unk-3E;
            phi_t7 = temp_t7_2;
            phi_v1 = temp_v1_2;
            phi_v0 = temp_v0_3;
            phi_t7_2 = temp_t7_2;
            phi_v1_2 = temp_v1_2;
            phi_v0_2 = temp_v0_3;
        } while (temp_v0_3 != &Dm_Char01_InitVars);
    }
    temp_v1_3 = phi_v1_2 + 8;
    temp_v1_3->unk1A4 = (s16) (s32) ((f32) phi_t7_2 * 409.6f);
    temp_v1_3->unk1A6 = (s16) (s32) ((f32) phi_v0_2->unk-2E * 409.6f);
    temp_v1_3->unk1A8 = (s16) (s32) ((f32) phi_v0_2->unk-1E * 409.6f);
    temp_v1_3->unk1AA = (s16) (s32) ((f32) phi_v0_2->unk-E * 409.6f);
    BcCheck3_BgActorInit((DynaPolyActor *) this, 0);
    BgCheck3_LoadMesh(globalCtx, (DynaPolyActor *) this, &D_06009E4C);
    this->unk34D = 1;
    if (gSaveContext.sceneSetupIndex == 1) {
        this->unk34C = 1;
        this->actionFunc = func_80AA8C28;
        return;
    }
    this->unk34C = 0;
    this->actionFunc = func_80AA892C;
}

void DmChar01_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmChar01 *this = (DmChar01 *) thisx;
    if (this->unk34D != 0) {
        BgCheck_RemoveActorMesh(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
    }
}

void func_80AA8698(DmChar01 *arg0, GlobalContext *arg1) {
    Actor *sp1C;
    Actor *sp18;
    Actor *temp_v0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f0_4;
    Actor *phi_a2;
    Actor *phi_v1;

    temp_v0 = arg1->actorCtx.actorList[2].first;
    phi_a2 = temp_v0;
    phi_v1 = temp_v0;
    if ((gSaveContext.weekEventReg[20] & 1) == 0) {
        if (((temp_v0->unkA70 * 0x10) < 0) && (temp_f0 = temp_v0->world.pos.x, (temp_f0 > -40.0f)) && (temp_f0 < 40.0f) && (temp_f0_2 = temp_v0->world.pos.z, (temp_f0_2 > 1000.0f)) && (temp_f0_2 < 1078.0f)) {
            if (D_80AAAAB4 == 0) {
                sp18 = temp_v0;
                sp1C = temp_v0;
                play_sound(0x4807U);
                D_80AAAAB4 = 1;
                phi_a2 = sp1C;
                phi_v1 = sp18;
            }
        } else {
            D_80AAAAB4 = 0;
        }
        if ((phi_a2->unk14B == 3) && (arg1->msgCtx.unk1202A == 3) && (arg1->msgCtx.unk1202E == 0)) {
            temp_f0_3 = phi_v1->world.pos.x;
            if ((temp_f0_3 > -40.0f) && (temp_f0_3 < 40.0f)) {
                temp_f0_4 = phi_v1->world.pos.z;
                if ((temp_f0_4 > 1000.0f) && (temp_f0_4 < 1078.0f)) {
                    gSaveContext.weekEventReg[20] |= 1;
                    arg0->actionFunc = func_80AA884C;
                }
            }
        }
    }
}

void func_80AA884C(DmChar01 *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s8 temp_a0;

    temp_a0 = arg0->actor.cutscene;
    sp1E = (s16) temp_a0;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
        ActorCutscene_Start((s16) temp_a0, &arg0->actor);
        arg0->actionFunc = func_80AA88A8;
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a0);
}

void func_80AA88A8(DmChar01 *arg0, GlobalContext *arg1) {
    if (func_800EE29C(arg1, 0x87U) != 0) {
        if (arg1->csCtx.frames == arg1->csCtx.npcActions[func_800EE200(arg1, 0x87U)]->startFrame) {
            D_80AAAE24 = 1;
            Audio_PlayActorSound2(&arg0->actor, 0x2964U);
            return;
        }
        // Duplicate return node #4. Try simplifying control flow for better match
        return;
    }
    D_80AAAE24 = 0;
}

void func_80AA892C(DmChar01 *arg0, GlobalContext *arg1) {
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v1;
    s32 temp_s2;
    s32 temp_v0_4;
    void *temp_s0;
    void *phi_s0;
    s32 phi_v1;
    DmChar01 *phi_s1;
    f32 phi_f20;

    temp_v1 = arg0->unk346;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {

            } else {
                D_80AAAE22 += -0x28;
                if ((s32) D_80AAAE22 < -0x897) {
                    temp_v0 = D_80AAAE20;
                    if ((s32) temp_v0 >= 0x65) {
                        D_80AAAE20 = temp_v0 - 0x46;
                    }
                    arg0->unk346 += -1;
                }
            }
        } else if (D_80AAAE24 != 0) {
            arg0->unk34C = 1;
            temp_v0_2 = D_80AAAE22;
            if ((s32) temp_v0_2 >= -0x7CF) {
                D_80AAAE26 = 1;
            }
            D_80AAAE22 = temp_v0_2 + 0x28;
            if ((s32) D_80AAAE22 >= 0xD49) {
                temp_v0_3 = D_80AAAE20;
                if ((s32) temp_v0_3 >= 0x65) {
                    D_80AAAE20 = temp_v0_3 - 0xE6;
                }
                arg0->unk346 += 1;
            }
        }
    } else {
        D_80AAAE22 = -0x898;
        D_80AAAE20 = 0x17C;
        arg0->unk346 += 1;
    }
    if (D_80AAAE24 == 0) {
        arg0->unk34C = 0;
    }
    phi_s0 = &D_80AA9DC0;
    phi_s1 = arg0;
    do {
        temp_f2 = (f32) phi_s0->unk0;
        temp_f12 = (f32) phi_s0->unk4;
        temp_s2 = (s32) sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        temp_v0_4 = temp_s2 - D_80AAAE22;
        phi_v1 = temp_v0_4;
        if (temp_v0_4 < 0) {
            phi_v1 = -temp_v0_4;
        }
        temp_f20 = (1.0f - ((f32) phi_v1 / 1892.0f)) * (f32) D_80AAAE20 * Math_CosS((s16) (s32) (((f32) temp_s2 / 1892.0f) * 16384.0f));
        phi_f20 = temp_f20;
        if (temp_f20 < 0.0f) {
            phi_f20 = 0.0f;
        }
        temp_f18 = Math_SinS(phi_s1->unk1AC) * 15.0f;
        temp_s0 = phi_s0 + 0x10;
        phi_s1->unk1AC += 0x640;
        temp_s0->unk-E = (s16) (s32) (phi_f20 + temp_f18);
        phi_s0 = temp_s0;
        phi_s1 += 2;
    } while (temp_s0 != &Dm_Char01_InitVars);
}

void func_80AA8C28(DmChar01 *arg0, GlobalContext *arg1) {
    f32 temp_f12;
    f32 temp_f18;
    f32 temp_f20;
    f32 temp_f2;
    s16 temp_v1;
    s32 temp_s2;
    s32 temp_v0;
    void *temp_s0;
    s16 phi_t9;
    void *phi_s0;
    s16 *phi_s4;
    s32 phi_v1;
    s16 *phi_s5;
    DmChar01 *phi_s1;
    f32 phi_f20;

    temp_v1 = arg0->unk346;
    if (temp_v1 != 0) {
        if (temp_v1 != 1) {
            if (temp_v1 != 2) {
                phi_s4 = &D_80AAAE22;
                phi_s5 = &D_80AAAE20;
            } else {
                D_80AAAE22 += -0x28;
                phi_s4 = &D_80AAAE22;
                phi_s5 = &D_80AAAE20;
                if ((s32) D_80AAAE22 < -0x897) {
                    phi_t9 = arg0->unk346 - 1;
                    goto block_10;
                }
            }
        } else {
            D_80AAAE22 += 0x28;
            phi_s4 = &D_80AAAE22;
            if ((s32) D_80AAAE22 >= 0xD49) {
                arg0->unk346 += 1;
            }
            phi_s5 = &D_80AAAE20;
        }
    } else {
        Audio_PlayActorSound2(&arg0->actor, 0x2966U);
        D_80AAAE22 = -0x898;
        D_80AAAE20 = 0x64;
        phi_t9 = arg0->unk346 + 1;
block_10:
        arg0->unk346 = phi_t9;
        phi_s4 = &D_80AAAE22;
        phi_s5 = &D_80AAAE20;
    }
    phi_s0 = &D_80AA9DC0;
    phi_s1 = arg0;
    do {
        temp_f2 = (f32) phi_s0->unk0;
        temp_f12 = (f32) phi_s0->unk4;
        temp_s2 = (s32) sqrtf((temp_f2 * temp_f2) + (temp_f12 * temp_f12));
        temp_v0 = temp_s2 - *phi_s4;
        phi_v1 = temp_v0;
        if (temp_v0 < 0) {
            phi_v1 = -temp_v0;
        }
        temp_f20 = (1.0f - ((f32) phi_v1 / 1892.0f)) * (f32) *phi_s5 * Math_CosS((s16) (s32) (((f32) temp_s2 / 1892.0f) * 16384.0f));
        phi_f20 = temp_f20;
        if (temp_f20 < 0.0f) {
            phi_f20 = 0.0f;
        }
        temp_f18 = Math_SinS(phi_s1->unk1AC) * 15.0f;
        temp_s0 = phi_s0 + 0x10;
        phi_s1->unk1AC += 0x640;
        temp_s0->unk-E = (s16) (s32) (phi_f20 + temp_f18);
        phi_s0 = temp_s0;
        phi_s1 += 2;
    } while (temp_s0 != &Dm_Char01_InitVars);
    Math_SmoothStepToF(&arg0->unk348, 0.0f, 0.02f, 0.6f, 0.4f);
    if (arg0->unk348 < 0.01f) {
        arg0->unk34C = 2;
        arg0->actionFunc = func_80AA8F1C;
    }
}

void func_80AA8F0C(DmChar01 *arg0, GlobalContext *arg1) {

}

void func_80AA8F1C(DmChar01 *arg0, GlobalContext *arg1) {

}

void func_80AA8F2C(DmChar01 *arg0, GlobalContext *arg1) {
    if (D_80AAAE26 != 0) {
        Math_SmoothStepToF(&arg0->actor.world.pos.y, 0.0f, 0.05f, 6.0f, 0.001f);
        Math_SmoothStepToF(&arg0->unk348, 0.0f, 0.01f, 0.5f, 0.4f);
        if ((s32) arg0->actor.world.pos.y >= 0) {
            D_80AAAE26 = 2;
            Actor_Spawn(&arg1->actorCtx, arg1, 0x183, 5.0f, 202.0f, 294.0f, (s16) 0, (s16) 0, (s16) 0, (s16) 0x80);
            arg0->actionFunc = func_80AA90F4;
        }
    }
    func_80AA8F0C(arg0, arg1);
}

void func_80AA9020(DmChar01 *arg0, GlobalContext *arg1) {
    CsCmdActorAction *temp_v1;

    if (func_800EE29C(arg1, 0x87U) != 0) {
        temp_v1 = arg1->csCtx.npcActions[func_800EE200(arg1, 0x87U)];
        if ((arg1->csCtx.frames == temp_v1->startFrame) && (temp_v1->unk0 == 2)) {
            gSaveContext.weekEventReg[20] |= 2;
            arg0->actionFunc = func_80AA90AC;
        }
    }
}

void func_80AA90AC(DmChar01 *arg0, GlobalContext *arg1) {
    Math_SmoothStepToF(&arg0->actor.world.pos.y, 0.0f, 0.05f, 2.0f, 0.001f);
}

void func_80AA90F4(DmChar01 *arg0, GlobalContext *arg1) {
    Math_SmoothStepToF(&arg0->unk348, 0.0f, 0.02f, 0.8f, 0.4f);
}

void DmChar01_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmChar01 *this = (DmChar01 *) thisx;
    DynaCollisionContext *temp_a1;

    this->actionFunc(this, globalCtx);
    if (this->unk34D != 0) {
        if (this->actor.params == 0) {
            if (globalCtx->actorCtx.actorList[2].first->world.pos.y > 5.0f) {
                func_800C62BC(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
            } else {
                func_800C6314(globalCtx, &globalCtx->colCtx.dyna, this->unk144);
            }
        }
        if (this->actor.params == 2) {
            temp_a1 = &globalCtx->colCtx.dyna;
            if (this->actor.xzDistToPlayer > 600.0f) {
                func_800C62BC(globalCtx, temp_a1, this->unk144);
                return;
            }
            func_800C6314(globalCtx, temp_a1, this->unk144);
            // Duplicate return node #10. Try simplifying control flow for better match
            return;
        }
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void DmChar01_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DmChar01 *this = (DmChar01 *) thisx;
    f32 spBC;
    s32 spB8;
    u8 spB7;
    GraphicsContext *spB0;
    Gfx *sp98;
    Gfx *sp94;
    Gfx *sp7C;
    Gfx *sp78;
    GraphicsContext *sp70;
    Gfx *sp5C;
    f32 sp4C;
    f32 sp48;
    f32 sp44;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_16;
    Gfx *temp_v0_17;
    Gfx *temp_v0_18;
    Gfx *temp_v0_19;
    Gfx *temp_v0_20;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_9;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    Gfx *temp_v1_3;
    Gfx *temp_v1_4;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_a0_2;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f12;
    f32 temp_f20;
    f32 temp_f2;
    f32 temp_f8;
    s16 temp_v0;
    s16 temp_v0_5;
    s32 temp_v0_6;
    u8 temp_v0_7;
    u8 temp_v0_8;
    f32 phi_f2;

    spB7 = 0;
    temp_v0 = this->actor.params;
    if (temp_v0 != 0) {
        if (temp_v0 != 1) {
            if (temp_v0 != 2) {
                if (temp_v0 != 3) {
                    return;
                }
                if (this->actor.world.pos.y > -120.0f) {
                    func_800BDFC0(globalCtx, &D_0600FAE8);
                }
                return;
            }
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600FE90));
            func_800BDFC0(globalCtx, &D_0600DF18);
            if ((this->unk34C != 0) && (((u32) this->unk348 & 0xFF) != 0)) {
                AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600F768));
                temp_a0 = globalCtx->state.gfxCtx;
                sp70 = temp_a0;
                func_8012C2DC(temp_a0);
                temp_v0_2 = sp70->polyXlu.p;
                sp70->polyXlu.p = temp_v0_2 + 8;
                temp_v0_2->words.w1 = 0;
                temp_v0_2->words.w0 = 0xE7000000;
                temp_v1 = sp70->polyXlu.p;
                sp70->polyXlu.p = temp_v1 + 8;
                temp_v1->words.w0 = 0xFB000000;
                temp_v1->words.w1 = (u32) this->unk348 & 0xFF;
                temp_v1_2 = sp70->polyXlu.p;
                sp70->polyXlu.p = temp_v1_2 + 8;
                temp_v1_2->words.w0 = 0xFA000080;
                temp_v1_2->words.w1 = ((u32) this->unk348 & 0xFF) | ~0xFF;
                temp_v0_3 = sp70->polyXlu.p;
                sp70->polyXlu.p = temp_v0_3 + 8;
                temp_v0_3->words.w0 = 0xDA380003;
                sp70 = sp70;
                sp5C = temp_v0_3;
                sp5C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
                temp_v0_4 = sp70->polyXlu.p;
                sp70->polyXlu.p = temp_v0_4 + 8;
                temp_v0_4->words.w1 = (u32) &D_0600F3C0;
                temp_v0_4->words.w0 = 0xDE000000;
            }
            if (D_80AAAE24 != 0) {
                temp_v0_5 = D_80AAAE22;
                if (((s32) temp_v0_5 >= -0x707) && ((s32) temp_v0_5 < 0xBB8)) {
                    temp_f12 = (f32) temp_v0_5 - 640.0f;
                    if ((D_80AAAE20 == 0x17C) && ((s32) temp_v0_5 >= 0x281)) {
                        D_80AAAAC0 = 2;
                        D_80AAAAC4 = 0;
                        D_80AAAAC8 = 0x384;
                        D_80AAAACC = 0x2BC;
                        spB7 = 1;
                        if ((s32) temp_v0_5 < 0x546) {
                            temp_f0 = temp_f12 / 2000.0f;
                            D_80AAAAB8 = 420.0f - (420.0f * temp_f0);
                            phi_f2 = (200.0f * temp_f0) + 200.0f;
                        } else {
                            D_80AAAAB8 = 420.0f - (420.0f * (temp_f12 / 2000.0f));
                            phi_f2 = 400.0f;
                        }
                        D_80AAAABC = phi_f2;
                    }
                }
                temp_f2 = D_80AAAABC;
                if (spB7 != 0) {
                    D_80AAAABC = temp_f2;
                    spB8 = 0;
                    if ((D_80AAAAC0 * 2) > 0) {
                        D_80AAAABC = temp_f2;
                        do {
                            temp_f20 = D_80AAAABC;
                            spBC = Rand_ZeroOne() * (f32) D_80AAAAC8;
                            if ((globalCtx->state.frames & 1) != 0) {
                                temp_f8 = Rand_ZeroOne() - 0.5f;
                                sp48 = D_80AAAAB8;
                                sp44 = temp_f8 * (2.0f * temp_f20);
                                sp4C = (Rand_ZeroOne() * (f32) D_80AAAAC4) + temp_f20;
                                EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp44, NULL, NULL, (s16) 0, (s16) ((s16) (s32) spBC + D_80AAAACC));
                            } else {
                                temp_f0_2 = Rand_ZeroOne();
                                sp48 = D_80AAAAB8;
                                sp44 = -temp_f20 - (temp_f0_2 * (f32) D_80AAAAC4);
                                sp4C = (Rand_ZeroOne() - 0.5f) * (2.0f * temp_f20);
                                EffectSsGSplash_Spawn(globalCtx, (Vec3f *) &sp44, NULL, NULL, (s16) 0, (s16) ((s16) (s32) spBC + D_80AAAACC));
                            }
                            temp_v0_6 = spB8 + 1;
                            spB8 = temp_v0_6;
                        } while (temp_v0_6 < (D_80AAAAC0 * 2));
                    }
                }
            }
            func_800BE03C(globalCtx, &D_0600DE50);
            return;
        }
        temp_v0_7 = this->unk34C;
        if (temp_v0_7 != 0) {
            if (temp_v0_7 != 1) {
                return;
            }
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600B1A0));
            func_800BDFC0(globalCtx, &D_0600AF98);
            return;
        }
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600A5C0));
        func_800BDFC0(globalCtx, &D_0600A398);
        return;
    }
    temp_v0_8 = this->unk34C;
    if (temp_v0_8 != 0) {
        if (temp_v0_8 != 1) {
            if (temp_v0_8 != 2) {
                return;
            }
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060110B8));
            func_800BDFC0(globalCtx, &D_06010FD8);
            func_800BE03C(globalCtx, &D_06010EF0);
            return;
        }
        if (gSaveContext.sceneSetupIndex == 1) {
            AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_060110B8));
            func_800BDFC0(globalCtx, &D_06010FD8);
            func_800BE03C(globalCtx, &D_06010EF0);
            SysMatrix_InsertTranslation(0.0f, 10.0f, 0.0f, 1);
        }
        AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06009D70));
        temp_a0_2 = globalCtx->state.gfxCtx;
        if (((u32) this->unk348 & 0xFF) == 0xFF) {
            spB0 = temp_a0_2;
            func_8012C28C(temp_a0_2);
            temp_v0_9 = temp_a0_2->polyOpa.p;
            temp_a0_2->polyOpa.p = temp_v0_9 + 8;
            temp_v0_9->words.w0 = 0xE200001C;
            temp_v0_9->words.w1 = 0xC8112078;
            temp_v0_10 = temp_a0_2->polyOpa.p;
            temp_a0_2->polyOpa.p = temp_v0_10 + 8;
            temp_v0_10->words.w1 = 0;
            temp_v0_10->words.w0 = 0xE7000000;
            temp_v0_11 = temp_a0_2->polyOpa.p;
            temp_a0_2->polyOpa.p = temp_v0_11 + 8;
            temp_v0_11->words.w1 = 0xFF;
            temp_v0_11->words.w0 = 0xFB000000;
            temp_v0_12 = temp_a0_2->polyOpa.p;
            temp_a0_2->polyOpa.p = temp_v0_12 + 8;
            temp_v0_12->words.w1 = -1;
            temp_v0_12->words.w0 = 0xFA000096;
            temp_v0_13 = temp_a0_2->polyOpa.p;
            temp_a0_2->polyOpa.p = temp_v0_13 + 8;
            temp_v0_13->words.w0 = 0xDB06002C;
            spB0 = temp_a0_2;
            sp98 = temp_v0_13;
            sp98->words.w1 = Lib_SegmentedToVirtual(&D_80AA9DC0);
            temp_v0_14 = temp_a0_2->polyOpa.p;
            temp_a0_2->polyOpa.p = temp_v0_14 + 8;
            temp_v0_14->words.w0 = 0xDA380003;
            spB0 = temp_a0_2;
            sp94 = temp_v0_14;
            sp94->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_15 = temp_a0_2->polyOpa.p;
            temp_a0_2->polyOpa.p = temp_v0_15 + 8;
            temp_v0_15->words.w1 = (u32) &D_06009928;
            temp_v0_15->words.w0 = 0xDE000000;
            return;
        }
        spB0 = temp_a0_2;
        func_8012C2DC(temp_a0_2);
        temp_v0_16 = temp_a0_2->polyXlu.p;
        temp_a0_2->polyXlu.p = temp_v0_16 + 8;
        temp_v0_16->words.w0 = 0xE200001C;
        temp_v0_16->words.w1 = 0xC81049D8;
        temp_v0_17 = temp_a0_2->polyXlu.p;
        temp_a0_2->polyXlu.p = temp_v0_17 + 8;
        temp_v0_17->words.w1 = 0;
        temp_v0_17->words.w0 = 0xE7000000;
        temp_v1_3 = temp_a0_2->polyXlu.p;
        temp_a0_2->polyXlu.p = temp_v1_3 + 8;
        temp_v1_3->words.w0 = 0xFB000000;
        temp_v1_3->words.w1 = (u32) this->unk348 & 0xFF;
        temp_v1_4 = temp_a0_2->polyXlu.p;
        temp_a0_2->polyXlu.p = temp_v1_4 + 8;
        temp_v1_4->words.w0 = 0xFA000096;
        temp_v1_4->words.w1 = ((u32) this->unk348 & 0xFF) | ~0xFF;
        temp_v0_18 = temp_a0_2->polyXlu.p;
        temp_a0_2->polyXlu.p = temp_v0_18 + 8;
        temp_v0_18->words.w0 = 0xDB06002C;
        spB0 = temp_a0_2;
        sp7C = temp_v0_18;
        sp7C->words.w1 = Lib_SegmentedToVirtual(&D_80AA9DC0);
        temp_v0_19 = temp_a0_2->polyXlu.p;
        temp_a0_2->polyXlu.p = temp_v0_19 + 8;
        temp_v0_19->words.w0 = 0xDA380003;
        spB0 = temp_a0_2;
        sp78 = temp_v0_19;
        sp78->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_20 = temp_a0_2->polyXlu.p;
        temp_a0_2->polyXlu.p = temp_v0_20 + 8;
        temp_v0_20->words.w1 = (u32) &D_06009928;
        temp_v0_20->words.w0 = 0xDE000000;
        return;
    }
    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_0600AA50));
    func_800BDFC0(globalCtx, &D_0600A8F8);
}

