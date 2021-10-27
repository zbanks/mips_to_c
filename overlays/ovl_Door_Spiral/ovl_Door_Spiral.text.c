struct _mips2c_stack_DoorSpiral_Destroy {};         /* size 0x0 */

struct _mips2c_stack_DoorSpiral_Draw {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ void *sp2C;                          /* inferred */
    /* 0x30 */ char pad_30[0x8];
};                                                  /* size = 0x38 */

struct _mips2c_stack_DoorSpiral_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_DoorSpiral_SetupAction {};     /* size 0x0 */

struct _mips2c_stack_DoorSpiral_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A2B70 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A2BF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A2DB0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A2E08 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ f32 sp1C;                            /* inferred */
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ f32 sp28;                            /* inferred */
    /* 0x2C */ f32 sp2C;                            /* inferred */
    /* 0x30 */ f32 sp30;                            /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_809A2EA0 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ void *sp24;                          /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_809A2FF8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809A3098 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void DoorSpiral_SetupAction(void (*arg0)(?, GlobalContext *), void (*arg1)(void (*)(?, GlobalContext *), void *), void (*)(?, GlobalContext *)); /* static */
? func_809A2B70(void (*arg0)(?, GlobalContext *), void *arg1, void (*)(?, GlobalContext *)); /* static */
u8 func_809A2BF8(GlobalContext *arg0);              /* static */
void func_809A2DB0(void (*arg0)(?, GlobalContext *), void *arg1); /* static */
f32 func_809A2E08(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
s32 func_809A2EA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A2FF8(? *arg0, GlobalContext *arg1);   /* static */
void func_809A3098(void (*arg0)(?, GlobalContext *), void *arg1); /* static */
static ? D_809A3250;                                /* unable to generate initializer */
static ? D_809A32D0;                                /* unable to generate initializer */
static s16 D_809A32EC[14] = {
    0x1B,
    0x200,
    0x21,
    0x300,
    0x16,
    0x400,
    0x18,
    0x400,
    0x30,
    0x500,
    0x56,
    0x600,
    0x1D,
    0x600,
};
static InitChainEntry D_809A3308[6];                /* unable to generate initializer */

void DoorSpiral_SetupAction(void (*arg0)(?, GlobalContext *), void (*arg1)(void (*)(?, GlobalContext *), void *)) {
    arg0->unk_14C = arg1;
    arg0->unk_14A = 0;
}

? func_809A2B70(void (*arg0)(?, GlobalContext *), void *arg1) {
    s32 temp_v1;
    u8 temp_t9;

    temp_t9 = ((arg0->unk_147 * 4) + &D_809A32D0)->unk_2;
    temp_v1 = temp_t9 & 0xFF;
    arg0->unk_148 = temp_t9;
    if ((temp_v1 == 7) || ((temp_v1 == 2) && (arg1->unk_186E6 != 0))) {
        if (temp_v1 == 2) {
            arg0->unk_148 = 3U;
        }
        arg0->unk_4 = (s32) (arg0->unk_4 | 0x10000000);
    }
    DoorSpiral_SetupAction(func_809A2FF8);
    return 0;
}

u8 func_809A2BF8(GlobalContext *arg0) {
    s16 *temp_v0;
    s32 temp_v1;
    s16 *phi_v0;
    s32 phi_v1;
    s32 phi_v1_2;
    u8 phi_v1_3;
    s16 *phi_v0_2;

    phi_v0 = D_809A32EC;
    phi_v1 = 0;
    phi_v1_3 = (u8) 0;
loop_1:
    phi_v1_2 = phi_v1;
    phi_v0_2 = phi_v0;
    if (*phi_v0 != arg0->sceneNum) {
        temp_v1 = phi_v1 + 1;
        temp_v0 = phi_v0 + 4;
        phi_v0 = temp_v0;
        phi_v1 = temp_v1;
        phi_v1_2 = temp_v1;
        phi_v0_2 = temp_v0;
        if (temp_v1 != 7) {
            goto loop_1;
        }
    }
    if (phi_v1_2 < 7) {
        phi_v1_3 = phi_v0_2->unk_2;
    } else if (Object_GetIndex(arg0 + 0x17D88, 3) >= 0) {
        phi_v1_3 = 1U;
    }
    return phi_v1_3;
}

void DoorSpiral_Init(Actor *thisx, GlobalContext *globalCtx) {
    s8 temp_v0_2;
    u8 temp_v0;
    DoorSpiral *this = (DoorSpiral *) thisx;

    if (this->actor.room != globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA].sides[0].room) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    Actor_ProcessInitChain((Actor *) this, D_809A3308);
    this->unk145 = ((s32) this->actor.params >> 8) & 3;
    this->orientation = ((s32) this->actor.params >> 7) & 1;
    temp_v0 = func_809A2BF8(globalCtx);
    this->objectType = temp_v0;
    temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, *(&D_809A32D0 + ((temp_v0 & 0xFF) * 4)));
    this->bankIndex = temp_v0_2;
    if ((s32) temp_v0_2 < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    DoorSpiral_SetupAction((void (*)(?, GlobalContext *)) this, func_809A2DB0);
    Actor_SetHeight((Actor *) this, 60.0f);
}

void DoorSpiral_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    TransitionActorEntry *temp_v1;
    DoorSpiral *this = (DoorSpiral *) thisx;

    temp_v1 = &globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA];
    temp_v1->id = (s16) -(s32) temp_v1->id;
}

void func_809A2DB0(void (*arg0)(?, GlobalContext *), void *arg1) {
    s8 temp_a1;

    temp_a1 = arg0->unk_149;
    arg0 = arg0;
    if (Object_IsLoaded(arg1 + 0x17D88, (s32) temp_a1) != 0) {
        arg0->unk_1E = (s8) arg0->unk_149;
        func_809A2B70(arg0, arg1, arg0);
    }
}

f32 func_809A2E08(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4) {
    f32 sp30;
    f32 sp2C;
    f32 sp28;
    f32 sp1C;
    f32 *temp_a2;
    void *temp_v0;
    f32 phi_f0;

    temp_v0 = arg0->actorCtx.actorList[2].first;
    temp_a2 = &sp28;
    sp28 = temp_v0->world.pos.x;
    sp2C = temp_v0->world.pos.y + arg2;
    sp30 = temp_v0->world.pos.z;
    Actor_CalcOffsetOrientedToDrawRotation(arg1, (Vec3f *) &sp1C, (Vec3f *) temp_a2);
    if ((arg3 < fabsf(sp1C)) || (phi_f0 = sp24, (arg4 < fabsf(sp20)))) {
        phi_f0 = 3.4028235e38f;
    }
    return phi_f0;
}

s32 func_809A2EA0(Actor *arg0, GlobalContext *arg1) {
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
        temp_v0 = (arg0->unk_148 * 0x10) + &D_809A3250;
        temp_t0 = temp_v0->unk_E;
        temp_f4 = (f32) temp_t0;
        phi_f4 = temp_f4;
        if ((s32) temp_t0 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        temp_t1 = temp_v0->unk_F;
        temp_f10 = (f32) temp_t1;
        phi_f10 = temp_f10;
        if ((s32) temp_t1 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        temp_f0 = func_809A2E08(arg1, arg0, 0.0f, phi_f4, phi_f10);
        if (fabsf(temp_f0) < 64.0f) {
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

void func_809A2FF8(void (*arg0)(?, GlobalContext *), GlobalContext *arg1) {
    Player *temp_a0_2;
    void (*temp_a0)(?, GlobalContext *);
    void (*temp_a2)(?, GlobalContext *);

    temp_a2 = arg0;
    temp_a0 = temp_a2;
    if (temp_a2->unk_144 != 0) {
        DoorSpiral_SetupAction(temp_a2, func_809A3098, temp_a2);
        return;
    }
    arg0 = temp_a2;
    if (func_809A2EA0((Actor *) temp_a0, (GlobalContext *) temp_a2) != 0) {
        temp_a0_2 = arg1->actorCtx.actorList[2].first;
        temp_a0_2->doorType = 4;
        temp_a0_2->doorActor = arg0;
        temp_a0_2->doorDirection = arg0->unk_146;
        temp_a0_2->doorNext = (s8) ((s32) (arg1->doorCtx.transitionActorList + (((s32) arg0->unk_1C >> 0xA) * 0x10))->unk_E >> 0xA);
        func_80122F28(temp_a0_2, arg1, (Actor *) arg0);
    }
}

void func_809A3098(void (*arg0)(?, GlobalContext *), void *arg1) {
    if ((arg1->unk_1CCC->unk_A6C * 4) >= 0) {
        DoorSpiral_SetupAction(arg0, func_809A2DB0);
        arg0->unk_144 = 0;
    }
}

void DoorSpiral_Update(Actor *thisx, GlobalContext *globalCtx) {
    DoorSpiral *this = (DoorSpiral *) thisx;
    if (((globalCtx->actorCtx.actorList[2].first->unk_A6C & 0x100004C0) == 0) || (func_809A2DB0 == this->actionFunc)) {
        this->actionFunc(this, globalCtx);
    }
}

void DoorSpiral_Draw(Actor *thisx, GlobalContext *globalCtx) {
    void *sp2C;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    void *temp_a3;
    DoorSpiral *this = (DoorSpiral *) thisx;

    if (this->bankIndex == this->actor.objBankIndex) {
        temp_a3 = (this->spiralType * 0x10) + &D_809A3250;
        if (*(temp_a3 + (this->orientation * 4)) != 0) {
            temp_a0 = globalCtx->state.gfxCtx;
            sp2C = temp_a3;
            this = this;
            sp24 = temp_a0;
            func_8012C28C(temp_a0);
            temp_v0 = sp24->polyOpa.p;
            sp24->polyOpa.p = &temp_v0[1];
            temp_v0->words.w0 = 0xDA380003;
            sp2C = temp_a3;
            this = this;
            sp24 = sp24;
            sp1C = temp_v0;
            sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_2 = sp24->polyOpa.p;
            sp24->polyOpa.p = &temp_v0_2[1];
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_2->words.w1 = *(temp_a3 + (this->orientation * 4));
        }
    }
}
