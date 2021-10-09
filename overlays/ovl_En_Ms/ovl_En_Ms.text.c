typedef struct EnMs {
    /* 0x000 */ Actor actor;
    /* 0x144 */ SkelAnime unk_144;                  /* inferred */
    /* 0x188 */ Vec3s unk_188;                      /* inferred */
    /* 0x18E */ char pad_18E[0x30];                 /* maybe part of unk_188[9]? */
    /* 0x1BE */ Vec3s unk_1BE;                      /* inferred */
    /* 0x1C4 */ char pad_1C4[0x30];                 /* maybe part of unk_1BE[9]? */
    /* 0x1F4 */ void (*actionFunc)(EnMs *, GlobalContext *);
    /* 0x1F8 */ ColliderCylinder unk_1F8;           /* inferred */
} EnMs;                                             /* size = 0x244 */

struct _mips2c_stack_EnMs_Destroy {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnMs_Draw {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnMs_Init {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ ColliderCylinder *sp30;              /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_EnMs_Update {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ ColliderCylinder *sp24;              /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80952734 {
    /* 0x00 */ char pad_0[0x1E];
    /* 0x1E */ s16 sp1E;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_809527F8 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809529AC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80952A1C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

void func_80952734(EnMs *, GlobalContext *);        /* static */
void func_809527F8(EnMs *, GlobalContext *);        /* static */
void func_809529AC(EnMs *, GlobalContext *);        /* static */
void func_80952A1C(EnMs *, GlobalContext *);        /* static */
extern AnimationHeader D_060005EC;
extern FlexSkeletonHeader D_06003DC0;
static ColliderCylinderInitType1 D_80952BA0 = {
    {0xA, 0, 9, 0x39, 1},
    {0, {0, 0, 0}, {0xF7CFFFFF, 0, 0}, 0, 1, 1},
    {0x16, 0x25, 0, {0, 0, 0}},
};
static InitChainEntry D_80952BCC[5];                /* unable to generate initializer */

void EnMs_Init(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp30;
    ColliderCylinder *temp_a1;
    EnMs *this = (EnMs *) thisx;

    Actor_ProcessInitChain((Actor *) this, D_80952BCC);
    SkelAnime_InitSV(globalCtx, &this->unk_144, &D_06003DC0, &D_060005EC, &this->unk_188, &this->unk_1BE, 9);
    temp_a1 = &this->unk_1F8;
    sp30 = temp_a1;
    Collider_InitCylinder(globalCtx, temp_a1);
    Collider_SetCylinderType1(globalCtx, temp_a1, (Actor *) this, &D_80952BA0);
    ActorShape_Init(&this->actor.shape, 0.0f, func_800B3FC0, 35.0f);
    Actor_SetScale((Actor *) this, 0.015f);
    this->actor.colChkInfo.mass = 0xFF;
    this->actionFunc = func_80952734;
    this->actor.speedXZ = 0.0f;
    this->actor.velocity.y = 0.0f;
    this->actor.gravity = -1.0f;
}

void EnMs_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnMs *this = (EnMs *) thisx;
    Collider_DestroyCylinder(globalCtx, &this->unk_1F8);
}

void func_80952734(EnMs *arg0, GlobalContext *arg1) {
    s16 sp1E;
    s16 temp_v1;
    s32 phi_v0;

    temp_v1 = arg0->actor.yawTowardsPlayer - arg0->actor.shape.rot.y;
    if (gSaveContext.inventory.items[10] == 0xFF) {
        arg0->actor.textId = 0x92E;
    } else {
        arg0->actor.textId = 0x932;
    }
    sp1E = temp_v1;
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        arg0->actionFunc = func_809527F8;
        return;
    }
    if (arg0->actor.xzDistToPlayer < 90.0f) {
        phi_v0 = (s32) temp_v1;
        if ((s32) temp_v1 < 0) {
            phi_v0 = -(s32) temp_v1;
        }
        if (phi_v0 < 0x2000) {
            func_800B8614((Actor *) arg0, arg1, 90.0f);
        }
    }
}

void func_809527F8(EnMs *arg0, GlobalContext *arg1) {
    u8 temp_v0;
    u8 temp_v0_2;

    temp_v0 = func_80152498(&arg1->msgCtx);
    if (temp_v0 != 4) {
        if (temp_v0 != 5) {
            if ((temp_v0 == 6) && (func_80147624(arg1) != 0)) {
                arg0->actionFunc = func_80952734;
                return;
            }
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return;
        }
        if (func_80147624(arg1) != 0) {
            func_801477B4(arg1);
            func_800B8A1C((Actor *) arg0, arg1, 0x35, arg0->actor.xzDistToPlayer, arg0->actor.yDistToPlayer);
            arg0->actionFunc = func_809529AC;
            return;
        }
        /* Duplicate return node #17. Try simplifying control flow for better match */
        return;
    }
    if (func_80147624(arg1) != 0) {
        temp_v0_2 = arg1->msgCtx.choiceIndex;
        if (temp_v0_2 != 0) {
            if (temp_v0_2 != 1) {

            }
            func_8019F230();
            func_80151938(arg1, 0x934U);
            /* Duplicate return node #17. Try simplifying control flow for better match */
            return;
        }
        func_801477B4(arg1);
        if ((s32) gSaveContext.rupees < 0xA) {
            play_sound(0x4806U);
            func_80151938(arg1, 0x935U);
            return;
        }
        if ((s32) gSaveContext.inventory.ammo[gItemSlots[0xA]] >= 0x14) {
            play_sound(0x4806U);
            func_80151938(arg1, 0x937U);
            return;
        }
        func_8019F208();
        func_800B8A1C((Actor *) arg0, arg1, 0x35, 90.0f, 10.0f);
        func_801159EC(-0xA);
        arg0->actionFunc = func_809529AC;
    }
}

void func_809529AC(EnMs *arg0, GlobalContext *arg1) {
    EnMs *temp_a0;
    f32 temp_a2;
    f32 temp_a3;

    temp_a0 = arg0;
    if (Actor_HasParent((Actor *) arg0, arg1) != 0) {
        temp_a0->actor.textId = 0;
        temp_a2 = temp_a0->actor.xzDistToPlayer;
        temp_a3 = temp_a0->actor.yDistToPlayer;
        arg0 = temp_a0;
        func_800B8500((Actor *) temp_a0, arg1, temp_a2, temp_a3, 0);
        arg0->actionFunc = func_80952A1C;
        return;
    }
    func_800B8A1C((Actor *) temp_a0, arg1, 0x35, temp_a0->actor.xzDistToPlayer, temp_a0->actor.yDistToPlayer);
}

void func_80952A1C(EnMs *arg0, GlobalContext *arg1) {
    if (func_800B84D0((Actor *) arg0, arg1) != 0) {
        func_80151938(arg1, 0x936U);
        arg0->actionFunc = func_809527F8;
        return;
    }
    func_800B8500((Actor *) arg0, arg1, arg0->actor.xzDistToPlayer, arg0->actor.yDistToPlayer, -1);
}

void EnMs_Update(Actor *thisx, GlobalContext *globalCtx) {
    ColliderCylinder *sp24;
    ColliderCylinder *temp_a2;
    EnMs *this = (EnMs *) thisx;

    Actor_SetHeight((Actor *) this, 20.0f);
    this->actor.targetArrowOffset = 500.0f;
    Actor_SetScale((Actor *) this, 0.015f);
    SkelAnime_FrameUpdateMatrix(&this->unk_144);
    this->actionFunc(this, globalCtx);
    temp_a2 = &this->unk_1F8;
    sp24 = temp_a2;
    Collider_UpdateCylinder((Actor *) this, temp_a2);
    CollisionCheck_SetOC(globalCtx, &globalCtx->colChkCtx, (Collider *) temp_a2);
}

void EnMs_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnMs *this = (EnMs *) thisx;
    func_8012C28C(globalCtx->state.gfxCtx);
    SkelAnime_DrawSV(globalCtx, this->unk_144.skeleton, this->unk_144.limbDrawTbl, (s32) this->unk_144.dListCount, NULL, NULL, (Actor *) this);
}
