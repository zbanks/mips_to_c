struct _mips2c_stack_ObjSyokudai_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_ObjSyokudai_Draw {
    /* 0x00 */ char pad_0[0x4C];
    /* 0x4C */ Gfx *sp4C;                           /* inferred */
    /* 0x50 */ char pad_50[0x8];                    /* maybe part of sp4C[3]? */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ char pad_5C[0x8];                    /* maybe part of sp58[3]? */
    /* 0x64 */ Gfx *sp64;                           /* inferred */
    /* 0x68 */ char pad_68[0xC];                    /* maybe part of sp64[4]? */
    /* 0x74 */ s32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_ObjSyokudai_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ LightInfo *sp30;                     /* inferred */
    /* 0x34 */ char pad_34[0x4];
    /* 0x38 */ s32 sp38;                            /* inferred */
    /* 0x3C */ s32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x8];
};                                                  /* size = 0x48 */

struct _mips2c_stack_ObjSyokudai_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ CollisionCheckContext *sp30;         /* inferred */
    /* 0x34 */ char pad_34[0x8];                    /* maybe part of sp30[3]? */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ f32 sp40;                            /* inferred */
    /* 0x44 */ f32 sp44;                            /* inferred */
    /* 0x48 */ u32 sp48;                            /* inferred */
    /* 0x4C */ s32 sp4C;                            /* inferred */
    /* 0x50 */ char pad_50[0x4];
    /* 0x54 */ Actor *sp54;                         /* inferred */
    /* 0x58 */ char pad_58[0x3];
    /* 0x5B */ u8 sp5B;                             /* inferred */
    /* 0x5C */ s32 sp5C;                            /* inferred */
    /* 0x60 */ f32 sp60;                            /* inferred */
    /* 0x64 */ WaterBox *sp64;                      /* inferred */
    /* 0x68 */ char pad_68[0x4];
    /* 0x6C */ s32 sp6C;                            /* inferred */
    /* 0x70 */ s32 sp70;                            /* inferred */
    /* 0x74 */ s32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

static ? sColTypes;                                 /* unable to generate initializer */
static ? sDLists;                                   /* unable to generate initializer */
static ColliderCylinderInit sFlameColliderInit = {
    {0xA, 0, 9, 0, 0, 1},
    {2, {0, 0, 0}, {0x820, 0, 0}, 0, 1, 0},
    {0xF, 0x2D, 0x2D, {0, 0, 0}},
};
static InitChainEntry sInitChain[4];                /* unable to generate initializer */
static s32 sNumLitTorchesInGroup;
static ColliderCylinderInit sStandColliderInit = {
    {9, 0, 0xD, 0x39, 0x20, 1},
    {2, {0x100000, 0, 0}, {0xF6CFFFFF, 0, 0}, 0, 5, 1},
    {0xC, 0x2D, 0, {0, 0, 0}},
};

void ObjSyokudai_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp3C;
    s32 sp38;
    LightInfo *sp30;
    LightInfo *temp_a0;
    s16 temp_v1;
    s32 temp_v0;
    ObjSyokudai *this = (ObjSyokudai *) thisx;

    temp_v1 = this->actor.params;
    sp3C = (s32) temp_v1 >> 0xC;
    sp38 = temp_v1 & 0x7F;
    Actor_ProcessInitChain((Actor *) this, sInitChain);
    func_800B4AEC(globalCtx, (Actor *) this, 50.0f);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B4B50, 1.0f);
    Collider_InitAndSetCylinder(globalCtx, &this->standCollider, (Actor *) this, &sStandColliderInit);
    this->standCollider.base.colType = *(&sColTypes + ((s32) this->actor.params >> 0xC));
    Collider_InitAndSetCylinder(globalCtx, &this->flameCollider, (Actor *) this, &sFlameColliderInit);
    this->actor.colChkInfo.mass = 0xFF;
    temp_a0 = &this->lightInfo;
    sp30 = temp_a0;
    Lights_PointGlowSetInfo(temp_a0, (s16) (s32) this->actor.world.pos.x, (s16) (s32) (this->actor.world.pos.y + 70.0f), (s16) (s32) this->actor.world.pos.z, (u8) 0xFF, (u8) 0xFF, (u8) 0xB4, (s16) -1);
    this->lightNode = LightContext_InsertLight(globalCtx, &globalCtx->lightCtx, sp30);
    if ((this->actor.params & 0x800) == 0) {
        if (((sp3C != 2) || (sp38 != 0x7F)) && (Flags_GetSwitch(globalCtx, sp38) != 0)) {
            goto block_5;
        }
        sNumLitTorchesInGroup = 0;
    } else {
block_5:
        temp_v0 = ((s32) this->actor.params >> 7) & 0xF;
        this->snuffTimer = -1;
        if (temp_v0 != 0) {
            sNumLitTorchesInGroup = temp_v0;
        }
    }
    this->flameTexScroll = (u8) (u32) (Rand_ZeroOne() * 20.0f);
    Actor_SetHeight((Actor *) this, 60.0f);
}

void ObjSyokudai_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    ObjSyokudai *this = (ObjSyokudai *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->standCollider);
    Collider_DestroyCylinder(globalCtx, &this->flameCollider);
    LightContext_RemoveLight(globalCtx, &globalCtx->lightCtx, this->lightNode);
}

void ObjSyokudai_Update(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp74;
    s32 sp70;
    s32 sp6C;
    WaterBox *sp64;
    f32 sp60;
    s32 sp5C;
    u8 sp5B;
    Actor *sp54;
    s32 sp4C;
    u32 sp48;
    f32 sp40;
    f32 sp3C;
    CollisionCheckContext *sp30;
    ColliderCylinder *sp2C;
    Actor *temp_v0_3;
    ColliderCylinder *temp_a1;
    ColliderCylinder *temp_a2;
    CollisionCheckContext *temp_a1_2;
    f32 temp_f0;
    f32 temp_f6;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1;
    s16 temp_v1_2;
    s32 temp_t2;
    s32 temp_t2_2;
    s32 temp_t8;
    s32 temp_v0_4;
    s8 temp_a0;
    u32 temp_t1;
    s32 phi_t0;
    u32 phi_t1;
    s32 phi_t2;
    s16 phi_t3;
    ObjSyokudai *this = (ObjSyokudai *) thisx;

    temp_v0 = this->actor.params;
    sp5C = -1;
    sp70 = temp_v0 & 0x7F;
    sp6C = (s32) temp_v0 >> 0xC;
    sp5B = 0;
    temp_t2 = (s32) temp_v0 >> 7;
    temp_t2_2 = temp_t2 & 0xF;
    if (this->pendingAction != 0) {
        temp_a0 = this->actor.cutscene;
        if (ActorCutscene_GetCurrentIndex() != temp_a0) {
            if (ActorCutscene_GetCanPlayNext((s16) temp_a0) != 0) {
                ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
                if ((s32) this->pendingAction > 0) {
                    Actor_SetSwitchFlag(globalCtx, sp70);
                }
            } else {
                ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
            }
        } else if (func_800F22C4((s16) temp_a0, (Actor *) this) != 0) {
            this->snuffTimer = -1;
            this->pendingAction = 0;
        }
    } else {
        sp74 = temp_t2_2;
        if ((func_800CA1E8(globalCtx, &globalCtx->colCtx, this->actor.world.pos.x, this->actor.world.pos.z, &sp60, &sp64) != 0) && ((sp60 - this->actor.world.pos.y) > 52.0f)) {
            this->snuffTimer = 0;
            if (sp6C == 1) {
                sp74 = temp_t2_2;
                Actor_UnsetSwitchFlag(globalCtx, sp70);
                if (temp_t2_2 != 0) {
                    this->snuffTimer = 1;
                }
            }
        } else {
            if ((this->actor.params & 0x800) != 0) {
                this->snuffTimer = -1;
            }
            phi_t3 = -1;
            if (temp_t2_2 != 0) {
                sp54 = globalCtx->actorCtx.actorList[2].first;
                sp4C = 0;
                sp48 = 0;
                sp74 = temp_t2_2;
                if (Flags_GetSwitch(globalCtx, sp70) != 0) {
                    temp_v1 = this->snuffTimer;
                    if (temp_v1 == 0) {
                        if (sp6C != 0) {
                            this->snuffTimer = -1;
                        } else {
                            this->pendingAction = (s8) -1;
                        }
                    } else if ((s32) temp_v1 > 0) {
                        this->snuffTimer = -1;
                    }
                } else if ((s32) this->snuffTimer < 0) {
                    this->snuffTimer = 0x14;
                }
            }
            phi_t0 = 0;
            phi_t1 = 0U;
            phi_t3 = -1;
            if ((this->flameCollider.base.acFlags & 2) != 0) {
                temp_t1 = this->flameCollider.info.acHitInfo->toucher.dmgFlags;
                phi_t1 = temp_t1;
                if ((temp_t1 & 0x820) != 0) {
                    phi_t0 = 1;
                }
            } else if (globalCtx->actorCtx.actorList[2].first->unk_147 == 7) {
                sp54 = globalCtx->actorCtx.actorList[2].first;
                sp4C = 0;
                sp48 = 0;
                sp74 = temp_t2 & 0xF;
                Math_Vec3f_Diff(globalCtx->actorCtx.actorList[2].first + 0xB9C, (Vec3f *) &this->actor.world, (Vec3f *) &sp3C);
                temp_f0 = sp40 - 67.0f;
                temp_f6 = temp_f0 * temp_f0;
                sp40 = temp_f0;
                phi_t0 = 0;
                phi_t1 = 0U;
                if (((sp3C * sp3C) + temp_f6 + (sp44 * sp44)) < 400.0f) {
                    phi_t0 = -1;
                }
            }
            phi_t2 = temp_t2 & 0xF;
            if (phi_t0 != 0) {
                if (this->snuffTimer != 0) {
                    if (phi_t0 < 0) {
                        temp_v0_2 = globalCtx->actorCtx.actorList[2].first->unk_B28;
                        if (temp_v0_2 == 0) {
                            globalCtx->actorCtx.actorList[2].first->unk_B28 = 0xD2;
                            sp74 = temp_t2 & 0xF;
                            func_8019F1C0(&this->actor.projectedPos, 0x2822U);
                            goto block_42;
                        }
                        if ((s32) temp_v0_2 < 0xC8) {
                            globalCtx->actorCtx.actorList[2].first->unk_B28 = 0xC8;
                            goto block_42;
                        }
                    } else if ((phi_t1 & 0x20) != 0) {
                        temp_v0_3 = this->flameCollider.base.ac;
                        if ((temp_v0_3->update != 0) && (temp_v0_3->id == 0xF)) {
                            temp_v0_3->params = 0;
                            temp_v0_3->unk_1C0 = 0x800;
block_42:
                            phi_t2 = temp_t2 & 0xF;
                        }
                    }
                    if ((s32) this->snuffTimer >= 0) {
                        temp_v0_4 = (phi_t2 * 0x32) + 0x64;
                        if (((s32) this->snuffTimer < temp_v0_4) && (sp6C != 0)) {
                            this->snuffTimer = (s16) temp_v0_4;
                        }
                    }
                } else if ((sp6C != 0) && (((phi_t0 > 0) && ((phi_t1 & 0x800) != 0)) || ((phi_t0 < 0) && (globalCtx->actorCtx.actorList[2].first->unk_B28 != 0)))) {
                    if ((phi_t0 < 0) && ((s32) globalCtx->actorCtx.actorList[2].first->unk_B28 < 0xC8)) {
                        globalCtx->actorCtx.actorList[2].first->unk_B28 = 0xC8;
                    }
                    if ((temp_t2 & 0xF) == 0) {
                        if ((sp6C == 2) && (sp70 == 0x7F)) {
                            this->snuffTimer = phi_t3;
                        } else if ((s32) this->actor.cutscene >= 0) {
                            this->pendingAction = 1;
                        } else {
                            Actor_SetSwitchFlag(globalCtx, sp70);
                            this->snuffTimer = -1;
                        }
                    } else {
                        temp_t8 = sNumLitTorchesInGroup + 1;
                        sNumLitTorchesInGroup = temp_t8;
                        if (temp_t8 >= (temp_t2 & 0xF)) {
                            this->pendingAction = 1;
                        } else {
                            this->snuffTimer = ((temp_t2 & 0xF) * 0x32) + 0x6E;
                        }
                    }
                    func_801A5CFC(0x2822U, &this->actor.projectedPos, 4U, &D_801DB4B0, &D_801DB4B0, &D_801DB4B8);
                }
            }
        }
    }
    temp_a1 = &this->standCollider;
    sp2C = temp_a1;
    Collider_UpdateCylinder((Actor *) this, temp_a1);
    temp_a1_2 = &globalCtx->colChkCtx;
    sp30 = temp_a1_2;
    CollisionCheck_SetOC(globalCtx, temp_a1_2, (Collider *) sp2C);
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) sp2C);
    temp_a2 = &this->flameCollider;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetAC(globalCtx, temp_a1_2, (Collider *) temp_a2);
    temp_v1_2 = this->snuffTimer;
    if ((s32) temp_v1_2 > 0) {
        this->snuffTimer = temp_v1_2 - 1;
        if ((this->snuffTimer == 0) && (sp6C != 0)) {
            sNumLitTorchesInGroup += -1;
        }
    }
    if ((s32) this->snuffTimer != 0) {
        if (((s32) this->snuffTimer < 0) || ((s32) this->snuffTimer >= 0x14)) {
            sp5C = 0xFA;
        } else {
            sp5C = (s32) (((f32) (s32) this->snuffTimer * 250.0f) / 20.0f);
        }
        sp5B = (u32) (Rand_ZeroOne() * 127.0f) + 0x80;
        func_800B9010((Actor *) this, 0x2031U);
    }
    Lights_PointSetColorAndRadius(&this->lightInfo, sp5B, (u32) ((f32) sp5B * 0.7f) & 0xFF, 0U, (s16) sp5C);
    this->flameTexScroll += 1;
}

void ObjSyokudai_Draw(Actor *thisx, GlobalContext *globalCtx) {
    s32 sp74;
    Gfx *sp64;
    Gfx *sp58;
    Gfx *sp4C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f20;
    s16 temp_v0_3;
    s32 temp_v1;
    f32 phi_f20;
    ObjSyokudai *this = (ObjSyokudai *) thisx;

    sp74 = ((s32) this->actor.params >> 7) & 0xF;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp64 = temp_v0;
    sp64->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = *(&sDLists + (((s32) this->actor.params >> 0xC) * 4));
    temp_v0_3 = this->snuffTimer;
    if (temp_v0_3 != 0) {
        temp_v1 = (sp74 * 0x32) + 0x64;
        phi_f20 = 1.0f;
        if (temp_v1 < (s32) temp_v0_3) {
            phi_f20 = (f32) ((temp_v1 - temp_v0_3) + 0xA) / 10.0f;
        } else if (((s32) temp_v0_3 > 0) && ((s32) temp_v0_3 < 0x14)) {
            phi_f20 = (f32) temp_v0_3 / 20.0f;
        }
        temp_f20 = phi_f20 * 0.0027f;
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_4 + 8;
        temp_v0_4->words.w0 = 0xDB060020;
        sp58 = temp_v0_4;
        sp58->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, 0U, 0U, 0x20, 0x40, 1, 0U, ((s32) this->flameTexScroll * -0x14) & 0x1FF, 0x20, 0x80);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_5 + 8;
        temp_v0_5->words.w1 = 0xFFFF00FF;
        temp_v0_5->words.w0 = 0xFA008080;
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_6 + 8;
        temp_v0_6->words.w1 = 0xFF000000;
        temp_v0_6->words.w0 = 0xFB000000;
        SysMatrix_InsertTranslation(0.0f, 52.0f, 0.0f, 1);
        Matrix_RotateY((s16) ((func_800DFCDC(globalCtx->cameraPtrs[globalCtx->activeCamera]) - this->actor.shape.rot.y) + 0x8000), 1U);
        Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_7 + 8;
        temp_v0_7->words.w0 = 0xDA380003;
        sp4C = temp_v0_7;
        sp4C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = temp_v0_8 + 8;
        temp_v0_8->words.w1 = (u32) D_0407D590;
        temp_v0_8->words.w0 = 0xDE000000;
    }
}
