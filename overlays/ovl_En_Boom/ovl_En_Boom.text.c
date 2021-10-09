void func_808A24DC(Actor *arg0, GlobalContext *arg1); /* static */
static ColliderQuadInit D_808A3010 = {
    {0xA, 9, 0, 0, 8, 3},
    {2, {0x10, 0, 2}, {0xF7CFFFFF, 0, 0}, 5, 0, 0},
    {
        {
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
            {0.0f, 0.0f, 0.0f},
        },
    },
};
static InitChainEntry D_808A3060;                   /* unable to generate initializer */
static u8 D_808A3068 = 0xFF;
static u8 D_808A3069 = 0xFF;
static u8 D_808A306A = 0x64;
static u8 D_808A306B = 0xFF;
static u8 D_808A306C = 0xFF;
static u8 D_808A306D = 0xFF;
static u8 D_808A306E = 0x64;
static u8 D_808A306F = 0x40;
static u8 D_808A3070 = 0xFF;
static u8 D_808A3071 = 0xFF;
static u8 D_808A3072 = 0x64;
static u8 D_808A3073 = 0;
static u8 D_808A3074 = 0xFF;
static u8 D_808A3075 = 0xFF;
static u8 D_808A3076 = 0x64;
static u8 D_808A3077 = 0;
static ? D_808A3078;                                /* unable to generate initializer */

typedef struct EnBoom {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ ColliderQuad unk144;               /* inferred */
    /* 0x01C4 */ Actor *unk1C4;                     /* inferred */
    /* 0x01C8 */ Actor *unk1C8;                     /* inferred */
    /* 0x01CC */ u8 unk1CC;                         /* inferred */
    /* 0x01CD */ u8 unk1CD;                         /* inferred */
    /* 0x01CE */ u8 unk1CE;                         /* inferred */
    /* 0x01CF */ s8 unk1CF;                         /* inferred */
    /* 0x01D0 */ s32 unk1D0;                        /* inferred */
    /* 0x01D4 */ s32 unk1D4;                        /* inferred */
    /* 0x01D8 */ char pad1D8[0x18];                 /* maybe part of unk1D4[7]? */
    /* 0x01F0 */ void (*actionFunc)(EnBoom *, GlobalContext *);
} EnBoom;                                           /* size 0x1F4 */

void EnBoom_SetupAction(EnBoom *this, void (*actionFunc)(EnBoom *, GlobalContext *)) {
    EnBoom *self = (EnBoom *) this;
    self->actionFunc = actionFunc;
}

void func_808A24DC(Actor *arg0, GlobalContext *arg1) {
    WaterBox *sp54;
    f32 sp50;
    u16 sp4E;
    f32 sp48;
    f32 sp44;
    f32 sp40;
    Vec3f sp34;
    Vec3f *temp_a1;
    f32 *temp_t8;
    f32 temp_f0;
    u16 temp_v0;
    f32 phi_f2;

    temp_t8 = &sp50;
    sp50 = arg0->world.pos.y;
    sp4E = arg0->bgCheckFlags & 0x20;
    if ((func_800CA1AC(arg1, arg1 + 0x830, arg0->world.pos.x, arg0->world.pos.z, temp_t8, &sp54) != 0) && (arg0->world.pos.y < sp50)) {
        arg0->bgCheckFlags |= 0x20;
        sp40 = arg0->world.pos.x;
        sp44 = arg0->world.pos.y - 20.0f;
        sp48 = arg0->world.pos.z;
        EffectSsBubble_Spawn(arg1, (Vec3f *) &sp40, 20.0f, 10.0f, 20.0f, 0.13f);
    } else {
        arg0->bgCheckFlags &= 0xFFDF;
    }
    temp_v0 = arg0->bgCheckFlags;
    if (((temp_v0 & 0x40) != 0) && (sp4E != (temp_v0 & 0x20))) {
        Math_Vec3f_Diff(arg0 + 0x24, arg0 + 0x108, &sp34);
        if (sp34.y != 0.0f) {
            temp_f0 = sqrtf((sp34.x * sp34.x) + (sp34.z * sp34.z));
            phi_f2 = temp_f0;
            if (temp_f0 != 0.0f) {
                phi_f2 = (((sp50 - arg0->prevPos.y) / sp34.y) * temp_f0) / temp_f0;
            }
            sp34.y = sp50;
            temp_a1 = &sp34;
            sp34.x = arg0->prevPos.x + (sp34.x * phi_f2);
            sp34.z = arg0->prevPos.z + (sp34.z * phi_f2);
            EffectSsGSplash_Spawn(arg1, temp_a1, NULL, NULL, (s16) 0, (s16) 0x12C);
        }
        Audio_PlayActorSound2(arg0, 0x28C5U);
        EffectSsGRipple_Spawn(arg1, &sp34, 0x64, 0x1F4, (s16) 0);
        EffectSsGRipple_Spawn(arg1, &sp34, 0x64, 0x1F4, (s16) 4);
        EffectSsGRipple_Spawn(arg1, &sp34, 0x64, 0x1F4, (s16) 8);
    }
    arg0->bgCheckFlags |= 0x40;
}

void EnBoom_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnBoom *this = (EnBoom *) thisx;
    s32 sp1CC;
    s32 sp1C8;
    s32 sp1C4;
    u8 sp1C3;
    u8 sp1C2;
    u8 sp1C1;
    u8 sp1C0;
    u8 sp1BF;
    u8 sp1BE;
    u8 sp1BD;
    u8 sp1BC;
    u8 sp1BB;
    u8 sp1BA;
    u8 sp1B9;
    u8 sp1B8;
    u8 sp1B7;
    u8 sp1B6;
    u8 sp1B5;
    u8 sp1B4;
    void sp30;
    ColliderQuad *sp28;
    ColliderQuad *temp_a1;

    this->actor.room = -1;
    Actor_ProcessInitChain(&this->actor, &D_808A3060);
    sp1B9 = D_808A306D;
    sp1B5 = D_808A3069;
    sp1B4 = D_808A3068;
    sp1B8 = D_808A306C;
    sp1BC = D_808A3070;
    sp1C0 = D_808A3074;
    sp1C1 = D_808A3075;
    sp1BD = D_808A3071;
    sp1C4 = 8;
    sp1C8 = 0;
    sp1CC = 0;
    sp1BA = D_808A306E;
    sp1B6 = D_808A306A;
    sp1C3 = D_808A3077;
    sp1BF = D_808A3073;
    sp1BE = D_808A3072;
    sp1C2 = D_808A3076;
    sp1B7 = D_808A306B;
    sp1BB = D_808A306F;
    Effect_Add(globalCtx, &this->unk1D0, 1, 0U, (u8) 0, &sp30);
    temp_a1 = &this->unk144;
    sp28 = temp_a1;
    Collider_InitQuad(globalCtx, temp_a1);
    Collider_SetQuad(globalCtx, temp_a1, &this->actor, &D_808A3010);
    EnBoom_SetupAction(this, func_808A2918);
}

void EnBoom_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnBoom *this = (EnBoom *) thisx;
    Actor *sp18;
    Actor *temp_v0;
    Actor *temp_v0_2;
    Actor *temp_v1;
    GlobalContext *temp_a2;

    temp_a2 = globalCtx;
    temp_v1 = temp_a2->actorCtx.actorList[2].first;
    if (temp_v1 != 0) {
        globalCtx = temp_a2;
        sp18 = temp_v1;
        Effect_Destroy(temp_a2, this->unk1D0);
        Collider_DestroyQuad(globalCtx, &this->unk144);
        temp_v0 = this->actor.child;
        if (temp_v0 != 0) {
            temp_v0->parent = NULL;
            temp_v1->unkA7C = temp_v0;
        } else {
            temp_v0_2 = this->actor.parent;
            if (temp_v0_2 != 0) {
                temp_v0_2->child = NULL;
            } else {
                temp_v1->unkA7C = NULL;
                temp_v1->unkA6C = (s32) (temp_v1->unkA6C & 0xFDFFFFFF);
            }
        }
        temp_v1->unkA74 = (s32) (temp_v1->unkA74 | 0x800000);
    }
}

void func_808A2918(EnBoom *this, GlobalContext *globalCtx) {
    Actor *sp7C;
    Actor *sp78;
    s32 sp74;
    s16 sp72;
    s16 sp70;
    s16 sp6E;
    s16 sp6C;
    f32 sp64;
    u32 sp5C;
    Vec3f sp50;
    Vec3f *sp40;
    Actor *temp_v0_5;
    Actor *temp_v0_7;
    Actor *temp_v1;
    Actor *temp_v1_4;
    Actor *temp_v1_5;
    Vec3f *temp_a1;
    f32 temp_f12;
    s16 temp_a0;
    s16 temp_a2;
    s16 temp_a3;
    s16 temp_v0;
    s16 temp_v0_2;
    s16 temp_v1_2;
    s32 temp_v0_6;
    s32 temp_v1_3;
    s8 temp_v0_4;
    u8 temp_a0_2;
    u8 temp_t7;
    u8 temp_v0_3;
    s32 phi_v0;
    s32 phi_v0_2;
    f32 phi_f12;
    s16 phi_v0_3;
    s32 phi_v0_4;
    s32 phi_v0_5;
    s32 phi_v1;
    s32 phi_v1_2;
    s16 phi_v1_3;

    sp78 = globalCtx->actorCtx.actorList[2].first;
    temp_v1 = this->unk1C4;
    temp_a1 = temp_v1 + 0x3C;
    if (temp_v1 != 0) {
        sp7C = temp_v1;
        sp40 = temp_a1;
        temp_v0 = Actor_YawToPoint(&this->actor, temp_a1);
        sp72 = temp_v0;
        temp_a2 = this->actor.world.rot.y - temp_v0;
        sp70 = temp_a2;
        temp_v0_2 = Actor_PitchToPoint(&this->actor, temp_a1);
        sp6E = temp_v0_2;
        temp_a3 = this->actor.world.rot.x - temp_v0_2;
        sp6C = temp_a3;
        temp_f12 = (200.0f - Math_Vec3f_DistXYZ(&this->actor.world.pos, temp_a1)) * 0.005f;
        phi_f12 = temp_f12;
        if (temp_f12 < 0.12f) {
            phi_f12 = 0.12f;
        }
        if (sp78 != temp_v1) {
            if (temp_v1->update != 0) {
                if ((s32) this->unk1CF < 0) {
                    phi_v0 = (s32) temp_a2;
                    if ((s32) temp_a2 < 0) {
                        phi_v0 = -(s32) temp_a2;
                    }
                    if (phi_v0 >= 0x4001) {
                        goto block_9;
                    }
                    goto block_10;
                }
                goto block_10;
            }
block_9:
            this->unk1C4 = NULL;
        } else {
block_10:
            temp_v0_3 = this->unk1CE;
            if (temp_v0_3 != 0) {
                this->unk1CE = temp_v0_3 - 1;
                phi_v0_2 = -0x190;
                if (this->actor.params == 0) {
                    phi_v0_2 = 0x190;
                }
                this->actor.world.rot.y += phi_v0_2;
            } else {
                temp_v0_4 = this->unk1CF;
                if ((s32) temp_v0_4 > 0) {
                    this->unk1CF = temp_v0_4 - 1;
                } else {
                    this->unk1CF = -1;
                }
                if ((s32) this->unk1CF > 0) {
                    phi_v0_3 = 0x3E8;
                } else {
                    phi_v1_3 = temp_a2;
                    if ((s32) temp_a2 < 0) {
                        phi_v1_3 = (s16) -(s32) temp_a2;
                    }
                    phi_v0_3 = (s16) (s32) ((f32) phi_v1_3 * phi_f12);
                }
                sp6C = temp_a3;
                sp64 = phi_f12;
                Math_ScaledStepToS(&this->actor.world.rot.y, sp72, phi_v0_3);
            }
            phi_v0_4 = (s32) temp_a3;
            if ((s32) temp_a3 < 0) {
                phi_v0_4 = -(s32) temp_a3;
            }
            Math_ScaledStepToS(&this->actor.world.rot.x, sp6E, (s16) (s32) ((f32) phi_v0_4 * phi_f12));
        }
    }
    func_800B6C04(&this->actor, 12.0f);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    func_808A24DC(&this->actor, globalCtx);
    func_800B9010(&this->actor, 0x1010U);
    if (((this->unk144.base.atFlags & 2) != 0) && (((temp_v0_5 = this->unk144.base.at, temp_v1_2 = temp_v0_5->id, (temp_v1_2 == 0xE)) && (temp_a0 = temp_v0_5->params, (temp_a0 != 7)) && (temp_a0 != 6)) || (temp_v1_2 == 0xE3))) {
        this->unk1C8 = temp_v0_5;
        if (temp_v0_5->id == 0xE3) {
            temp_v0_5->flags |= 0x2000;
        }
    }
    temp_a0_2 = this->unk1CC;
    phi_v1_2 = (s32) temp_a0_2;
    if (temp_a0_2 == 0) {
        phi_v0_5 = 0;
    } else {
        temp_t7 = temp_a0_2 - 1;
        temp_v1_3 = temp_t7 & 0xFF;
        this->unk1CC = temp_t7;
        phi_v0_5 = temp_v1_3;
        phi_v1_2 = temp_v1_3;
    }
    if (phi_v0_5 != 0) {
        temp_v0_6 = func_800C55C4(&globalCtx->colCtx, &this->actor.prevPos, &this->actor.world.pos, &sp50, &this->actor.wallPoly, 1U, 1U, 1U, 1U, &sp5C);
        phi_v1 = temp_v0_6;
        if (temp_v0_6 != 0) {
            sp74 = temp_v0_6;
            if (func_800B90AC(globalCtx, &this->actor, (s32) this->actor.wallPoly, (s32) sp5C, (s32) &sp50) != 0) {
                phi_v1 = 0;
            } else {
                sp74 = sp74;
                CollisionCheck_SpawnShieldParticlesMetal(globalCtx, &sp50);
                phi_v1 = sp74;
            }
        }
        if (phi_v1 != 0) {
            this->actor.world.rot.x = (s16) -(s32) this->actor.world.rot.x;
            this->actor.world.rot.y += 0x8000;
            this->unk1CC = 0;
            this->unk1C4 = sp78;
        }
        phi_v1_2 = (s32) this->unk1CC;
    }
    if (phi_v1_2 < 0x11) {
        temp_v0_7 = this->unk1C4;
        if (sp78 != temp_v0_7) {
            if (temp_v0_7 == 0) {
                this->unk1CE = 8;
            }
            this->unk1C4 = sp78;
        }
        if (Math_Vec3f_DistXYZ(&this->actor.world.pos, &sp78->focus.pos) < 40.0f) {
            temp_v1_4 = this->unk1C8;
            if (temp_v1_4 != 0) {
                sp7C = temp_v1_4;
                Math_Vec3f_Copy(&temp_v1_4->world.pos, &sp78->world.pos);
                if (temp_v1_4->id == 0xE) {
                    temp_v1_4->bgCheckFlags &= 0xFFFC;
                    temp_v1_4->gravity = -0.9f;
                } else {
                    temp_v1_4->flags &= -0x2001;
                }
            }
            Actor_MarkForDeath(&this->actor);
        }
    }
    temp_v1_5 = this->unk1C8;
    if (temp_v1_5 != 0) {
        if (temp_v1_5->update == 0) {
            this->unk1C8 = NULL;
            return;
        }
        Math_Vec3f_Copy(&temp_v1_5->world.pos, &this->actor.world.pos);
        // Duplicate return node #59. Try simplifying control flow for better match
    }
}

void EnBoom_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnBoom *this = (EnBoom *) thisx;
    Actor *temp_v0;
    Actor *temp_v0_2;
    EnBoom *temp_a0;
    Actor *phi_v0;
    EnBoom *phi_a0;

    if ((globalCtx->actorCtx.actorList[2].first->unkA6C * 4) >= 0) {
        this->actionFunc(this, globalCtx);
        temp_a0 = this;
        temp_v0 = temp_a0->actor.child;
        phi_v0 = temp_v0;
        phi_a0 = temp_a0;
        if ((temp_v0 != 0) || (temp_v0_2 = temp_a0->actor.parent, phi_v0 = temp_v0_2, (temp_v0_2 != 0))) {
            temp_a0->actor.focus.pos.x = (temp_a0->actor.world.pos.x + phi_v0->world.pos.x) * 0.5f;
            temp_a0->actor.focus.pos.y = (temp_a0->actor.world.pos.y + phi_v0->world.pos.y) * 0.5f;
            temp_a0->actor.focus.pos.z = (temp_a0->actor.world.pos.z + phi_v0->world.pos.z) * 0.5f;
        } else {
            this = temp_a0;
            Actor_SetHeight(&temp_a0->actor, 0.0f);
            phi_a0 = this;
        }
        if (phi_a0->actor.params != 0) {
            phi_a0->unk1CD += -1;
            return;
        }
        phi_a0->unk1CD += 1;
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void EnBoom_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnBoom *this = (EnBoom *) thisx;
    u32 *sp58;
    Vec3f sp4C;
    Vec3f sp40;
    GraphicsContext *sp3C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    s16 phi_v0;

    sp58 = (this->actor.params * 0x1C) + &D_808A3078;
    sp3C = globalCtx->state.gfxCtx;
    Matrix_RotateY(this->actor.world.rot.y, 1U);
    if (this->actor.params != 0) {
        phi_v0 = 0x1F40;
    } else {
        phi_v0 = -0x1F40;
    }
    SysMatrix_InsertZRotation_s(phi_v0, 1);
    SysMatrix_InsertXRotation_s(this->actor.world.rot.x, 1);
    SysMatrix_MultiplyVector3fByState(sp58 + 4, &sp4C);
    SysMatrix_MultiplyVector3fByState(sp58 + 0x10, &sp40);
    func_80126440(globalCtx, &this->unk144.base, &this->unk1D4, &sp4C, &sp40);
    if (MIPS2C_ERROR(Read from unset register $v0) != 0) {
        func_800A81F0(Effect_GetParams(this->unk1D0), &sp4C, &sp40);
    }
    func_8012C28C(globalCtx->state.gfxCtx);
    Matrix_RotateY((s16) (this->unk1CD * 0x2EE0), 1U);
    temp_v0 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    temp_v0->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp3C->polyOpa.p;
    sp3C->polyOpa.p = temp_v0_2 + 8;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = *sp58;
}

