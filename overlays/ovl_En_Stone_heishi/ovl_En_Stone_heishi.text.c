? func_80123AA4(Actor *, ?);                        /* extern */
void func_80BC935C(EnStoneheishi *arg0, s32 arg1, EnStoneheishi *); /* static */
void func_80BC941C(EnStoneheishi *arg0);            /* static */
void func_80BC94B0(EnStoneheishi *arg0, u16, EnStoneheishi *); /* static */
void func_80BC9660(EnStoneheishi *arg0, GlobalContext *); /* static */
void func_80BC98EC(EnStoneheishi *arg0);            /* static */
void func_80BC9A10(EnStoneheishi *arg0);            /* static */
void func_80BC9C88(EnStoneheishi *arg0, GlobalContext *arg1, EnStoneheishi *); /* static */
s32 func_80BCA0AC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5, Gfx **gfx); /* static */
void func_80BCA104(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5); /* static */
extern ? D_06000630;
extern ? D_06000768;
extern AnimationHeader D_06003BFC;
extern FlexSkeletonHeader D_0600D640;
static ColliderCylinderInit D_80BCA3A0 = {
    {0xA, 0, 0, 0x39, 0x20, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 0, 1},
    {0xF, 0x46, 0, {0, 0, 0}},
};
static ? D_80BCA3CC;                                /* unable to generate initializer */
static ? D_80BCA3E0;                                /* unable to generate initializer */
static ? D_80BCA3F4;                                /* unable to generate initializer */
static ? D_80BCA3FC;                                /* unable to generate initializer */
static f32 D_80BCA408 = 0.0f;

typedef struct EnStoneheishi {
    /* 0x0000 */ Actor actor;
    /* 0x0144 */ SkelAnime unk144;                  /* inferred */
    /* 0x0188 */ Vec3s unk188;                      /* inferred */
    /* 0x018E */ char pad18E[0x60];                 /* maybe part of unk188[17]? */
    /* 0x01EE */ Vec3s unk1EE;                      /* inferred */
    /* 0x01F4 */ char pad1F4[0x60];                 /* maybe part of unk1EE[17]? */
    /* 0x0254 */ void (*actionFunc)(EnStoneheishi *, GlobalContext *);
    /* 0x0258 */ s16 unk258;                        /* inferred */
    /* 0x025A */ s16 unk25A;                        /* inferred */
    /* 0x025C */ char pad25C[0x2];                  /* maybe part of unk25A[2]? */
    /* 0x025E */ s16 unk25E;                        /* inferred */
    /* 0x0260 */ s16 unk260;                        /* inferred */
    /* 0x0262 */ char pad262[0x2];                  /* maybe part of unk260[2]? */
    /* 0x0264 */ s32 unk264;                        /* inferred */
    /* 0x0268 */ s16 unk268;                        /* inferred */
    /* 0x026A */ s16 unk26A;                        /* inferred */
    /* 0x026C */ f32 unk26C;                        /* inferred */
    /* 0x0270 */ s16 unk270;                        /* inferred */
    /* 0x0272 */ s16 unk272;                        /* inferred */
    /* 0x0274 */ s16 unk274;                        /* inferred */
    /* 0x0276 */ u8 unk276;                         /* inferred */
    /* 0x0277 */ u8 unk277;                         /* inferred */
    /* 0x0278 */ ColliderCylinder unk278;           /* inferred */
} EnStoneheishi;                                    /* size 0x2C4 */

void EnStoneheishi_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnStoneheishi *this = (EnStoneheishi *) thisx;
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 25.0f);
    SkelAnime_InitSV(globalCtx, &this->unk144, &D_0600D640, &D_06003BFC, &this->unk188, &this->unk1EE, 0x11);
    this->actor.colChkInfo.mass = 0xFF;
    this->actor.targetMode = 6;
    this->actor.gravity = -3.0f;
    Collider_InitAndSetCylinder(globalCtx, &this->unk278, &this->actor, &D_80BCA3A0);
    this->unk278.dim.radius = 0x28;
    this->unk278.dim.height = 0x28;
    this->unk278.dim.yShift = 0;
    func_80BC94B0(this);
}

void EnStoneheishi_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnStoneheishi *this = (EnStoneheishi *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk278);
}

void func_80BC935C(EnStoneheishi *arg0, s32 arg1) {
    f32 sp34;
    AnimationHeaderCommon **sp30;
    AnimationHeaderCommon **temp_v1;
    s32 temp_v0;
    f32 phi_f0;

    arg0->unk264 = arg1;
    temp_v1 = (arg1 * 4) + &D_80BCA3E0;
    sp30 = temp_v1;
    sp34 = 0.0f;
    arg0->unk26C = (f32) SkelAnime_GetFrameCount(*temp_v1);
    phi_f0 = 0.0f;
    if (temp_v1 == &D_80BCA3F4) {
        phi_f0 = 55.0f;
    }
    temp_v0 = arg0->unk264;
    SkelAnime_ChangeAnim(arg0 + 0x144, *(&D_80BCA3E0 + (temp_v0 * 4)), 1.0f, phi_f0, arg0->unk26C, (u8) (s32) *(&D_80BCA3FC + temp_v0), -10.0f);
}

void func_80BC941C(EnStoneheishi *arg0) {
    s16 temp_v0;
    s16 temp_v0_2;
    s32 phi_v1;

    temp_v0 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
    phi_v1 = (s32) temp_v0;
    if ((s32) temp_v0 < 0) {
        phi_v1 = -(s32) temp_v0;
    }
    arg0->unk260 = 0;
    if ((arg0->actor.xzDistToPlayer < 200.0f) && (phi_v1 < 0x4E20)) {
        arg0->unk260 = arg0->actor.yawTowardsPlayer - arg0->actor.world.rot.y;
        temp_v0_2 = arg0->unk260;
        if ((s32) temp_v0_2 >= 0x2711) {
            arg0->unk260 = 0x2710;
            return;
        }
        if ((s32) temp_v0_2 < -0x2710) {
            arg0->unk260 = -0x2710;
        }
        // Duplicate return node #8. Try simplifying control flow for better match
    }
}

void func_80BC94B0(EnStoneheishi *arg0) {
    arg0->unk272 = 0;
    if ((gSaveContext.weekEventReg[41] & 0x40) != 0) {
        func_80BC935C((EnStoneheishi *)2);
        arg0->unk272 = 8;
        arg0->actor.flags &= -0x81;
    } else {
        func_80BC935C((EnStoneheishi *)3);
        if ((gSaveContext.weekEventReg[41] & 0x80) != 0) {
            arg0->unk272 = 2;
        }
    }
    arg0->unk270 = 0;
    arg0->actionFunc = func_80BC9560;
    arg0->actor.textId = *(&D_80BCA3CC + (arg0->unk272 * 2));
}

void func_80BC9560(EnStoneheishi *this, GlobalContext *globalCtx) {
    Actor *sp1C;
    EnStoneheishi *temp_a3;
    SkelAnime *temp_a0;
    s16 temp_v1;
    s32 phi_v0;

    temp_a3 = this;
    this = temp_a3;
    sp1C = globalCtx->actorCtx.actorList[2].first;
    if (func_800B84D0(&temp_a3->actor, globalCtx) != 0) {
        func_80BC9660(this, globalCtx);
        return;
    }
    temp_a0 = &this->unk144;
    if (((gSaveContext.weekEventReg[41] & 0x40) == 0) && (globalCtx->actorCtx.unk4 != 0x64)) {
        this->actor.flags |= 0x8000000;
        return;
    }
    globalCtx = globalCtx;
    this = this;
    SkelAnime_FrameUpdateMatrix(temp_a0);
    temp_v1 = this->actor.yawTowardsPlayer - this->actor.world.rot.y;
    this->actor.flags &= 0xF7FFFFFF;
    if ((s32) temp_v1 < 0) {
        phi_v0 = -(s32) temp_v1;
    } else {
        phi_v0 = (s32) temp_v1;
    }
    if ((phi_v0 < 0x18F1) && ((sp1C->unkA6C << 8) >= 0)) {
        func_800B8614(&this->actor, globalCtx, 70.0f);
    }
}

void func_80BC9660(EnStoneheishi *arg0) {
    arg0->unk274 = 0;
    arg0->unk270 = 1;
    arg0->actionFunc = func_80BC9680;
}

void func_80BC9680(EnStoneheishi *this, GlobalContext *globalCtx) {
    s16 temp_t0;
    s16 temp_v0;
    s16 temp_v0_2;

    temp_v0 = this->unk272;
    if ((temp_v0 == 0) || (temp_v0 == 2)) {
        if (this->unk264 != 4) {
            if (fabsf((f32) (this->unk258 - this->unk25E)) < 50.0f) {
                func_80BC935C(this, 4, this);
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
        goto block_13;
    }
    if (temp_v0 == 3) {
        if (this->unk264 != 3) {
            if ((this->unk268 == 0) && (fabsf((f32) (this->unk258 - this->unk25E)) < 50.0f)) {
                func_80BC935C(this, 3, this);
                return;
            }
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
        if ((this->unk274 == 0) && (this->unk26C <= this->unk144.animCurrentFrame)) {
            this->unk274 = 1;
            globalCtx->actorCtx.actorList[2].first->textId = *(&D_80BCA3CC + (temp_v0 * 2));
            temp_t0 = this->unk272;
            this = this;
            func_80151938(globalCtx, *(&D_80BCA3CC + (temp_t0 * 2)));
            func_80151BB4(globalCtx, 0x12U);
        }
        goto block_13;
    }
block_13:
    this = this;
    SkelAnime_FrameUpdateMatrix(this + 0x144);
    if ((func_80152498(&globalCtx->msgCtx) == 5) && (this = this, (func_80147624(globalCtx) != 0))) {
        this = this;
        func_801477B4(globalCtx);
        temp_v0_2 = this->unk272;
        if (temp_v0_2 == 2) {
            this = this;
            func_80151938(globalCtx, 0xFFU);
            func_80BC98EC(this);
            return;
        }
        if (temp_v0_2 == 3) {
            func_80BC94B0(this, 0xFFU, this);
            return;
        }
        if (temp_v0_2 == 6) {
            func_80BC9C88(this, globalCtx, this);
            return;
        }
        if ((s32) temp_v0_2 < 7) {
            this->unk272 = temp_v0_2 + 1;
            func_80151938(globalCtx, *(&D_80BCA3CC + (this->unk272 * 2)));
            // Duplicate return node #25. Try simplifying control flow for better match
            return;
        }
        this = this;
        func_80151BB4(globalCtx, 0x12U);
        func_80BC94B0(this);
    }
}

void func_80BC98EC(EnStoneheishi *arg0) {
    arg0->unk270 = 2;
    arg0->actionFunc = func_80BC9908;
}

void func_80BC9908(EnStoneheishi *this, GlobalContext *globalCtx) {
    s32 sp24;
    s32 temp_v0;
    s32 temp_v1;

    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (func_80152498(&globalCtx->msgCtx) == 0x10) {
        temp_v0 = func_80123810(globalCtx);
        temp_v1 = temp_v0;
        if (temp_v0 > 0) {
            this->unk268 = 0x28;
            sp24 = temp_v1;
            func_801477B4(globalCtx);
            if ((temp_v1 == 0x23) || (temp_v1 == 0x24)) {
                this->unk277 = 0;
                if (temp_v1 == 0x24) {
                    this->unk277 = 1;
                }
                func_80BC9A10(this);
                return;
            }
            this->unk272 = 3;
            globalCtx->actorCtx.actorList[2].first->textId = 0;
            gSaveContext.weekEventReg[41] |= 0x80;
            this->unk270 = 1;
            this->actionFunc = func_80BC9680;
            return;
        }
        if (temp_v0 < 0) {
            func_801477B4(globalCtx);
            func_80151BB4(globalCtx, 0x12U);
            func_80BC94B0(this);
        }
        // Duplicate return node #10. Try simplifying control flow for better match
    }
}

void func_80BC9A10(EnStoneheishi *arg0) {
    arg0->unk270 = 3;
    arg0->actionFunc = func_80BC9A2C;
}

void func_80BC9A2C(EnStoneheishi *this, GlobalContext *globalCtx) {
    f32 sp24;
    Actor *sp20;
    Actor *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    s16 temp_v1;

    temp_f0 = this->unk144.animCurrentFrame;
    sp24 = temp_f0;
    sp20 = globalCtx->actorCtx.actorList[2].first;
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    temp_v1 = this->unk26A;
    switch (temp_v1) {
    case 0:
        if (this->unk268 == 0) {
            this->unk272 = 4;
            func_80151938(globalCtx, *(&D_80BCA3CC + (this->unk272 * 2)));
            sp20->textId = *(&D_80BCA3CC + (this->unk272 * 2));
            this->unk26A += 1;
            return;
        }
    default:
        return;
    case 1:
        if ((func_80152498(&globalCtx->msgCtx) == 5) && (func_80147624(globalCtx) != 0)) {
            temp_a0 = globalCtx->actorCtx.actorList[2].first;
            globalCtx->msgCtx.unk11F10 = 0;
            temp_a0->textId = 0;
            temp_a0->unkA87 = 0;
            this->unk276 = 1;
            if (this->unk277 != 0) {
                this->unk276 = 3;
            }
            func_80123AA4(temp_a0, 3);
            func_80BC935C(this, 1);
            this->unk268 = 0x1E;
            this->unk26A += 1;
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
        return;
    case 2:
        temp_v0 = this->unk268;
        if (temp_v0 != 0) {
            if (((s32) temp_v0 < 0xA) && (this->unk276 != 2)) {
                this->unk276 = 2;
                Audio_PlayActorSound2(&this->actor, 0x684EU);
                func_80123D50(globalCtx, (Player *) globalCtx->actorCtx.actorList[2].first, 0x12, 0x15);
                return;
            }
            // Duplicate return node #18. Try simplifying control flow for better match
            return;
        }
        this->unk26A = temp_v1 + 1;
        return;
    case 3:
        if (this->unk26C <= temp_f0) {
            func_801A3098(0x922U);
            this->unk276 = 0;
            func_80BC935C(this, 6);
            this->unk26A += 1;
            return;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
        return;
    case 4:
        if (this->unk26C <= temp_f0) {
            this->unk272 = 5;
            func_80151938(globalCtx, *(&D_80BCA3CC + (this->unk272 * 2)));
            sp20->textId = *(&D_80BCA3CC + (this->unk272 * 2));
            func_80BC935C(this, 0);
            this->unk270 = 1;
            this->actionFunc = func_80BC9680;
        }
        // Duplicate return node #18. Try simplifying control flow for better match
        return;
    }
}

void func_80BC9C88(Actor *arg0, GlobalContext *arg1) {
    func_801477B4(arg1);
    if (gSaveContext.inventory.items[gItemSlots[0x45]] == 0x45) {
        func_800B8A1C(arg0, arg1, 2, 300.0f, 300.0f);
    } else {
        func_800B8A1C(arg0, arg1, 0x8B, 300.0f, 300.0f);
    }
    arg0->unk270 = 4;
    arg0->unk254 = func_80BC9D28;
}

void func_80BC9D28(EnStoneheishi *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (Actor_HasParent(&this->actor, globalCtx) != 0) {
        this->actor.parent = NULL;
        this->unk272 += 1;
        this->actor.textId = *(&D_80BCA3CC + (this->unk272 * 2));
        gSaveContext.weekEventReg[41] |= 0x40;
        func_800B84D0(&this->actor, globalCtx);
        func_800B8500(&this->actor, globalCtx, 400.0f, 400.0f, -1);
        this->actionFunc = func_80BC9E50;
        return;
    }
    if (gSaveContext.inventory.items[gItemSlots[0x45]] == 0x45) {
        func_800B8A1C(&this->actor, globalCtx, 2, 300.0f, 300.0f);
        return;
    }
    func_800B8A1C(&this->actor, globalCtx, 0x8B, 300.0f, 300.0f);
}

void func_80BC9E50(EnStoneheishi *this, GlobalContext *globalCtx) {
    SkelAnime_FrameUpdateMatrix(&this->unk144);
    if (func_800B84D0(&this->actor, globalCtx) != 0) {
        func_80151BB4(globalCtx, 0x35U);
        func_80151BB4(globalCtx, 0x12U);
        this->unk270 = 1;
        this->actionFunc = func_80BC9680;
        return;
    }
    func_800B8500(&this->actor, globalCtx, 400.0f, 400.0f, -1);
}

void EnStoneheishi_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnStoneheishi *this = (EnStoneheishi *) thisx;
    Actor *sp2C;
    ColliderCylinder *sp28;
    ColliderCylinder *temp_a2;
    s16 temp_v0;
    s16 temp_v0_2;

    sp2C = globalCtx->actorCtx.actorList[2].first;
    temp_v0 = this->unk268;
    if (temp_v0 != 0) {
        this->unk268 = temp_v0 - 1;
    }
    this->actor.shape.rot.y = this->actor.world.rot.y;
    this->actionFunc(this, globalCtx);
    Actor_SetVelocityAndMoveYRotationAndGravity(&this->actor);
    Actor_UpdateBgCheckInfo(globalCtx, &this->actor, 20.0f, 20.0f, 50.0f, 0x1DU);
    Actor_SetScale(&this->actor, 0.01f);
    if ((((gSaveContext.weekEventReg[41] & 0x40) != 0) || (globalCtx->actorCtx.unk4 == 0x64)) && ((sp2C->unkA6C << 8) >= 0)) {
        if ((this->unk264 != 3) && ((temp_v0_2 = this->unk270, (temp_v0_2 == 0)) || (temp_v0_2 == 1) || (temp_v0_2 == 2) || ((temp_v0_2 == 3) && ((s32) this->unk26A < 2)))) {
            func_80BC941C(this);
        } else {
            this->unk260 = 0;
        }
        if ((gSaveContext.weekEventReg[41] & 0x40) == 0) {
            Actor_SetHeight(&this->actor, 30.0f);
        } else {
            Actor_SetHeight(&this->actor, 60.0f);
        }
        Math_SmoothStepToS(&this->unk25A, this->unk260, 1, 0xBB8, (s16) 0);
        Math_SmoothStepToS(&this->unk258, this->unk25E, 1, 0x3E8, (s16) 0);
        temp_a2 = &this->unk278;
        sp28 = temp_a2;
        Collider_UpdateCylinder(&this->actor, temp_a2);
        CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, &temp_a2->base);
    }
}

s32 func_80BCA0AC(GlobalContext *arg0, s32 arg1, Gfx **arg2, Vec3f *arg3, Vec3s *arg4, Actor *arg5) {
    if (arg1 == 0x10) {
        arg4->x += arg5->unk25A;
        arg4->y += arg5->unk258;
        arg4->z += arg5->unk25C;
    }
    return 0;
}

void func_80BCA104(GraphicsContext **arg0, s32 arg1, Gfx **arg2, Vec3s *arg3, Actor *arg4, Gfx **arg5) {
    Gfx *sp28;
    Gfx *sp20;
    Gfx *temp_s0;
    Gfx *temp_s0_2;
    u8 temp_v0;
    void *temp_s0_3;
    void *temp_s0_4;
    Gfx *phi_s0;
    Gfx *phi_s0_2;

    if ((arg1 == 0xC) && (arg4->unk276 != 0)) {
        temp_s0 = func_8012C2B4(*arg5);
        D_80BCA408 = 440.0f;
        D_80BCA408 = 320.0f;
        D_80BCA408 = 210.0f;
        SysMatrix_InsertTranslation(320.0f, 210.0f, 440.0f, 1);
        temp_s0->words.w0 = 0xE7000000;
        temp_s0->words.w1 = 0;
        temp_s0_2 = temp_s0 + 8;
        Matrix_RotateY(-0x1770, 1U);
        SysMatrix_InsertXRotation_s(0x7D0, 1);
        SysMatrix_InsertZRotation_s(-0x7530, 1);
        temp_v0 = arg4->unk276;
        phi_s0_2 = temp_s0_2;
        if (temp_v0 != 2) {
            if (temp_v0 == 3) {
                temp_s0_2->words.w1 = 0xC800;
                temp_s0_2->words.w0 = 0xFB000000;
                phi_s0 = temp_s0_2 + 8;
            } else {
                temp_s0_2->words.w1 = 0xC8000000;
                temp_s0_2->words.w0 = 0xFB000000;
                phi_s0 = temp_s0_2 + 8;
            }
            phi_s0->words.w0 = 0xDA380003;
            temp_s0_3 = phi_s0 + 8;
            sp28 = phi_s0;
            phi_s0->words.w1 = Matrix_NewMtx(*arg0);
            temp_s0_3->unk4 = &D_06000768;
            temp_s0_3->unk0 = 0xDE000000;
            phi_s0_2 = temp_s0_3 + 8;
        }
        phi_s0_2->words.w0 = 0xDA380003;
        temp_s0_4 = phi_s0_2 + 8;
        sp20 = phi_s0_2;
        phi_s0_2->words.w1 = Matrix_NewMtx(*arg0);
        temp_s0_4->unk4 = &D_06000630;
        temp_s0_4->unk0 = 0xDE000000;
        *arg5 = temp_s0_4 + 8;
    }
}

void EnStoneheishi_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnStoneheishi *this = (EnStoneheishi *) thisx;
    GraphicsContext *temp_a2;
    GraphicsContext *temp_s1;

    temp_a2 = globalCtx->state.gfxCtx;
    temp_s1 = temp_a2;
    if ((gSaveContext.weekEventReg[41] & 0x40) == 0) {
        func_8012C2DC(temp_a2);
        temp_s1->polyXlu.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BCA0AC, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80BCA104, &this->actor, temp_s1->polyXlu.p);
        return;
    }
    func_8012C28C(temp_a2);
    temp_s1->polyOpa.p = SkelAnime_DrawSV2(globalCtx, this->unk144.skeleton, this->unk144.limbDrawTbl, (s32) this->unk144.dListCount, func_80BCA0AC, (void (*)(GlobalContext *, s32, Gfx **, Vec3s *, Actor *, Gfx **)) func_80BCA104, &this->actor, temp_s1->polyOpa.p);
}

