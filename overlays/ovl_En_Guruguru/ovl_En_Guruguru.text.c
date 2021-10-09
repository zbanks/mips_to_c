struct _mips2c_stack_EnGuruguru_ChangeAnimation {
    /* 0x00 */ char pad_0[0x28];
    /* 0x28 */ AnimationHeaderCommon **sp28;        /* inferred */
    /* 0x2C */ s32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnGuruguru_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnGuruguru_DoNothing {};       /* size 0x0 */

struct _mips2c_stack_EnGuruguru_Draw {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ GraphicsContext *sp30;               /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnGuruguru_Init {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_EnGuruguru_OverrideLimbDraw {}; /* size 0x0 */

struct _mips2c_stack_EnGuruguru_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ ColliderCylinder *sp2C;              /* inferred */
    /* 0x30 */ char pad_30[0x4];
    /* 0x34 */ Actor *sp34;                         /* inferred */
    /* 0x38 */ char pad_38[0x8];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80BC6E10 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC6F14 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BC701C {};              /* size 0x0 */

struct _mips2c_stack_func_80BC7068 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Actor *sp24;                         /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC73F4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BC7440 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BC7520 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

void EnGuruguru_ChangeAnimation(void *arg0, s32 arg1); /* static */
s32 EnGuruguru_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5); /* static */
extern AnimationHeader D_06000B04;
extern FlexSkeletonHeader D_06006C90;
static ? D_80BC7980;                                /* unable to generate initializer */
static ColliderCylinderInit D_80BC79A0 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0xF, 0x14, 0, {0, 0, 0}},
};
static ? D_80BC79CC;                                /* unable to generate initializer */
static ? D_80BC79D4;                                /* unable to generate initializer */
static ? D_80BC79D8;                                /* unable to generate initializer */
static ? D_80BC79E0;                                /* unable to generate initializer */
static ? D_80BC79E8;                                /* unable to generate initializer */

void EnGuruguru_Init(Actor *thisx, GlobalContext *globalCtx) {
    u32 temp_t2;
    EnGuruguru *this = (EnGuruguru *) thisx;

    this->actor.colChkInfo.mass = 0xFF;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 19.0f);
    SkelAnime_InitSV(globalCtx, &this->skelAnime, &D_06006C90, &D_06000B04, this->jointTable, this->morphTable, 0x10);
    this->actor.targetMode = 0;
    if (this->actor.params != 2) {
        Collider_InitAndSetCylinder(globalCtx, &this->collider, (Actor *) this, &D_80BC79A0);
    }
    if (gSaveContext.isNight == 0) {
        if (this->actor.params == 0) {
            func_80BC6E10(this);
            return;
        }
        if (this->actor.params == 2) {
            temp_t2 = this->actor.flags | 0x8000000;
            this->actor.flags = temp_t2;
            this->actor.draw = NULL;
            this->actor.flags = temp_t2 & ~1;
            this->actionFunc = EnGuruguru_DoNothing;
            return;
        }
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (this->actor.params == 1) {
        func_80BC6E10(this);
        return;
    }
    Actor_MarkForDeath((Actor *) this);
}

void EnGuruguru_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGuruguru *this = (EnGuruguru *) thisx;
    if (this->actor.params != 2) {
        Collider_DestroyCylinder(globalCtx, &this->collider);
    }
}

void EnGuruguru_ChangeAnimation(void *arg0, s32 arg1) {
    s32 sp2C;
    AnimationHeaderCommon **sp28;
    AnimationHeaderCommon **temp_t0;
    f32 temp_f0;
    s32 temp_v1;

    temp_v1 = arg1 * 4;
    temp_t0 = temp_v1 + &D_80BC79CC;
    sp28 = temp_t0;
    sp2C = temp_v1;
    temp_f0 = (f32) SkelAnime_GetFrameCount(*temp_t0);
    arg0->unk_26C = temp_f0;
    SkelAnime_ChangeAnim(arg0 + 0x144, (AnimationHeader *) *temp_t0, *(&D_80BC79D8 + temp_v1), 0.0f, temp_f0, (u8) (s32) *(&D_80BC79D4 + arg1), -4.0f);
}

void EnGuruguru_DoNothing(EnGuruguru *this, GlobalContext *globalCtx) {

}

void func_80BC6E10(EnGuruguru *this) {
    s16 temp_v0;

    EnGuruguru_ChangeAnimation(NULL);
    this->textIdIndex = 0;
    this->unk270 = 0;
    if (this->actor.params == 0) {
        if ((gSaveContext.weekEventReg[38] & 0x10) != 0) {
            this->textIdIndex = 1;
        }
    } else if ((gSaveContext.weekEventReg[38] & 0x40) != 0) {
        this->textIdIndex = 2;
    } else {
        this->textIdIndex = 3;
        this->unk270 = 1;
    }
    temp_v0 = this->textIdIndex;
    this->headZRotTarget = 0;
    this->unk268 = 1;
    this->actor.textId = *(&D_80BC7980 + (temp_v0 * 2));
    if (((temp_v0 == 0) || (temp_v0 == 1)) && ((gSaveContext.weekEventReg[77] & 4) != 0)) {
        if ((gSaveContext.weekEventReg[88] & 4) == 0) {
            this->actor.textId = 0x295F;
        } else {
            this->actor.textId = 0x2960;
        }
    }
    this->unk272 = 0;
    this->actionFunc = func_80BC6F14;
}

void func_80BC6F14(EnGuruguru *this, GlobalContext *globalCtx) {
    s16 sp1E;
    EnGuruguru *temp_a0_2;
    SkelAnime *temp_a0;
    s16 temp_v0;
    s32 temp_v1;
    s32 phi_v1;

    temp_a0 = &this->skelAnime;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_a0_2 = this;
    if (this->unk270 != 0) {
        this->textIdIndex = 3;
        if (globalCtx->actorCtx.actorList[2].first->unk_14B == 3) {
            this->textIdIndex = 0xD;
            if ((gSaveContext.weekEventReg[79] & 4) != 0) {
                this->textIdIndex = 0xE;
            }
        }
        this->actor.textId = *(&D_80BC7980 + (this->textIdIndex * 2));
    }
    temp_v0 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
    phi_v1 = temp_v0 << 0x10;
    if ((s32) temp_v0 < 0) {
        phi_v1 = (s32) temp_v0 * -0x10000;
    }
    temp_v1 = phi_v1 >> 0x10;
    sp1E = (s16) temp_v1;
    this = this;
    if (func_800B84D0((Actor *) temp_a0_2, globalCtx) != 0) {
        func_80BC701C(this, globalCtx);
        return;
    }
    if (temp_v1 < 0x2891) {
        func_800B8614((Actor *) this, globalCtx, 60.0f);
    }
}

void func_80BC701C(EnGuruguru *this, GlobalContext *globalCtx) {
    u8 temp_v1;

    if ((this->unk268 != 0) && ((temp_v1 = globalCtx->actorCtx.actorList[2].first->unk_14B, (temp_v1 == 4)) || (temp_v1 == 3))) {
        this->headZRotTarget = 0x1388;
    }
    this->unk266 = 1;
    this->unk272 = 1;
    this->actionFunc = func_80BC7068;
}

void func_80BC7068(EnGuruguru *this, GlobalContext *globalCtx) {
    Actor *sp24;
    Actor *temp_v1;
    s16 temp_v0_2;
    u8 temp_v0;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (this->unk268 != 0) {
        SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    } else if (this->unusedTimer == 0) {
        this->unusedTimer = 6;
        sp24 = temp_v1;
        if (func_80152498(&globalCtx->msgCtx) != 5) {
            if (this->unk266 == 0) {
                if (this->headZRotTarget != 0) {
                    goto block_11;
                }
                this->headZRotTarget = 0x1388;
            }
        } else {
            temp_v0 = temp_v1->unk_14B;
            if ((temp_v0 == 4) || (temp_v0 == 3)) {
                this->headZRotTarget = 0x1388;
            } else {
block_11:
                this->headZRotTarget = 0;
            }
        }
    }
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
        func_801477B4(globalCtx);
        temp_v0_2 = this->textIdIndex;
        this->headZRotTarget = 0;
        if ((temp_v0_2 == 0xD) || (temp_v0_2 == 0xE)) {
            func_80151BB4(globalCtx, 0x13U);
            gSaveContext.weekEventReg[79] |= 4;
            func_80BC6E10(this);
            return;
        }
        if (this->actor.params == 0) {
            if (this->actor.textId == 0x295F) {
                gSaveContext.weekEventReg[88] |= 4;
            }
            if (this->actor.textId == 0x292A) {
                gSaveContext.weekEventReg[38] |= 0x10;
            }
            func_80151BB4(globalCtx, 0x13U);
            func_80BC6E10(this);
            return;
        }
        if (temp_v0_2 == 0xB) {
            func_80BC73F4(this);
            return;
        }
        if (temp_v0_2 == 0xC) {
            gSaveContext.weekEventReg[38] |= 0x40;
            func_801A3B48(0);
            func_80151BB4(globalCtx, 0x36U);
            func_80151BB4(globalCtx, 0x13U);
            func_80BC6E10(this);
            return;
        }
        if ((s32) temp_v0_2 >= 3) {
            if ((temp_v0_2 == 0xA) && (gSaveContext.inventory.items[gItemSlots[0x46]] == 0x46)) {
                this->textIdIndex = 0xC;
                this->unk268 = 0;
            } else {
                this->textIdIndex = temp_v0_2 + 1;
                this->unk268 += 1;
                this->unk268 &= 1;
                if (this->textIdIndex == 0xB) {
                    this->unk268 = 0;
                }
            }
            this->texIndex = 0;
            if (this->textIdIndex == 7) {
                this->texIndex = 1;
            }
            if ((this->unk268 != 0) && ((s32) this->textIdIndex >= 7)) {
                this->skelAnime.animPlaybackSpeed = 2.0f;
                func_801A29D4(3, 1.18921f, 2);
                func_801A3B48(0);
            } else {
                if (this->skelAnime.animPlaybackSpeed == 2.0f) {
                    func_801A29D4(3, 1.0f, 2);
                }
                if (this->unk268 == 0) {
                    func_801A3B48(1);
                } else {
                    func_801A3B48(0);
                }
                this->skelAnime.animPlaybackSpeed = 1.0f;
            }
            this->unk266 = 1;
            func_80151938(globalCtx, *(&D_80BC7980 + (this->textIdIndex * 2)));
            return;
        }
        func_801A3B48(0);
        func_80151BB4(globalCtx, 0x13U);
        func_80BC6E10(this);
        /* Duplicate return node #46. Try simplifying control flow for better match */
    }
}

void func_80BC73F4(EnGuruguru *this) {
    this = this;
    func_801A3B48(0);
    this->unk268 = 1;
    this->headZRotTarget = 0;
    this->unk272 = 2;
    this->actionFunc = func_80BC7440;
}

void func_80BC7440(EnGuruguru *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->textIdIndex += 1;
        this->actor.textId = *(&D_80BC7980 + (this->textIdIndex * 2));
        func_801A3B48(1);
        func_800B8500((Actor *) this, globalCtx, 400.0f, 400.0f, -1);
        this->unk268 = 0;
        gSaveContext.weekEventReg[38] |= 0x40;
        this->actionFunc = func_80BC7520;
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 0x8C, 300.0f, 300.0f);
}

void func_80BC7520(EnGuruguru *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->skelAnime);
    if (func_800B84D0((Actor *) this, globalCtx) != 0) {
        this->actionFunc = func_80BC7068;
        return;
    }
    func_800B8500((Actor *) this, globalCtx, 400.0f, 400.0f, -1);
}

void EnGuruguru_Update(Actor *thisx, GlobalContext *globalCtx) {
    Actor *sp34;
    ColliderCylinder *sp2C;
    Actor *temp_v1;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v0_3;
    s16 temp_v0_4;
    s16 temp_v0_5;
    s32 phi_v1;
    EnGuruguru *this = (EnGuruguru *) thisx;

    temp_v1 = globalCtx->actorCtx.actorList[2].first;
    if (gSaveContext.isNight == 0) {
        if (this->actor.params == 1) {
            Actor_MarkForDeath((Actor *) this);
            return;
        }
        goto block_6;
    }
    temp_v0 = this->actor.params;
    if ((temp_v0 == 0) || (temp_v0 == 2)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
block_6:
    sp34 = temp_v1;
    this->actionFunc(this, globalCtx);
    if (this->actor.params == 2) {
        if (fabsf(temp_v1->world.pos.y - this->actor.world.pos.y) < 100.0f) {
            func_801A1DB8(&this->actor.projectedPos, 0x2E, 540.0f);
            return;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
        return;
    }
    if (fabsf(temp_v1->world.pos.y - this->actor.world.pos.y) < 200.0f) {
        func_801A1D44(&this->actor.projectedPos, 0x2E, 540.0f);
    }
    temp_v0_2 = this->unusedTimer;
    if (temp_v0_2 != 0) {
        this->unusedTimer = temp_v0_2 - 1;
    }
    temp_v0_3 = this->unk266;
    if (temp_v0_3 != 0) {
        this->unk266 = temp_v0_3 - 1;
    }
    temp_v0_4 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
    phi_v1 = (s32) temp_v0_4;
    if ((s32) temp_v0_4 < 0) {
        phi_v1 = -(s32) temp_v0_4;
    }
    this->headXRotTarget = 0;
    if (phi_v1 < 0x2AF8) {
        this->headXRotTarget = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
        temp_v0_5 = this->headXRotTarget;
        if ((s32) temp_v0_5 >= 0x1389) {
            this->headXRotTarget = 0x1388;
        } else if ((s32) temp_v0_5 < -0x1388) {
            this->headXRotTarget = -0x1388;
        }
    }
    Actor_SetScale((Actor *) this, 0.01f);
    Actor_SetHeight((Actor *) this, 50.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity((Actor *) this);
    Math_SmoothStepToS(&this->headXRot, this->headXRotTarget, 1, 0xBB8, (s16) 0);
    Math_SmoothStepToS(&this->headZRot, this->headZRotTarget, 1, 0x3E8, (s16) 0);
    Actor_UpdateBgCheckInfo(globalCtx, (Actor *) this, 20.0f, 20.0f, 50.0f, 0x1DU);
    temp_a2 = &this->collider;
    sp2C = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

s32 EnGuruguru_OverrideLimbDraw(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0xE) {
        arg4->x += arg5->unk_24E;
        arg4->z += arg5->unk_24C;
    }
    return 0;
}

void EnGuruguru_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp30;
    Gfx *temp_v1;
    Gfx *temp_v1_2;
    GraphicsContext *temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    EnGuruguru *this = (EnGuruguru *) thisx;

    temp_a0 = globalCtx->state.gfxCtx;
    sp30 = temp_a0;
    func_8012C28C(temp_a0);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_v1 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1 + 8;
    temp_v1->words.w0 = 0xDB060020;
    temp_a0_2 = *(&D_80BC79E0 + (this->texIndex * 4));
    temp_v1->words.w1 = (temp_a0_2 & 0xFFFFFF) + gSegments[(u32) (temp_a0_2 * 0x10) >> 0x1C] + 0x80000000;
    temp_v1_2 = sp30->polyOpa.p;
    sp30->polyOpa.p = temp_v1_2 + 8;
    temp_v1_2->words.w0 = 0xDB060024;
    temp_a0_3 = *(&D_80BC79E8 + (this->texIndex * 4));
    temp_v1_2->words.w1 = (temp_a0_3 & 0xFFFFFF) + gSegments[(u32) (temp_a0_3 * 0x10) >> 0x1C] + 0x80000000;
    SkelAnime_DrawSV(globalCtx, this->skelAnime.skeleton, this->skelAnime.limbDrawTbl, (s32) this->skelAnime.dListCount, EnGuruguru_OverrideLimbDraw, NULL, (Actor *) this);
}
