CRASHED

/*
Internal error while decompiling function func_809A2FF8:

Traceback (most recent call last):
  File "main.py", line 0, in run
    raise function_info
  File "main.py", line 0, in run
    info = translate_to_ast(function, options, global_info)
  File "translate.py", line 0, in translate_to_ast
    assert fn_sig is not None, "fn_type is known to be a function"
AssertionError: fn_type is known to be a function
*/
void DoorSpiral_SetupAction(DoorSpiral *arg0, void (*arg1)(DoorSpiral *, GlobalContext *)); /* static */
? func_809A2B70(DoorSpiral *arg0, GlobalContext *arg1, DoorSpiral *); /* static */
u8 func_809A2BF8(GlobalContext *arg0);              /* static */
void func_809A2DB0(DoorSpiral *arg0, GlobalContext *arg1); /* static */
f32 func_809A2E08(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4); /* static */
s32 func_809A2EA0(Actor *arg0, GlobalContext *arg1); /* static */
void func_809A3098(DoorSpiral *arg0, void *arg1);   /* static */
static ? D_809A3250;                                /* unable to generate initializer */
static ? D_809A32D0;                                /* unable to generate initializer */
static s16 D_809A32EC = {
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
static InitChainEntry D_809A3308;                   /* unable to generate initializer */
static DoorSpiral func_809A2FF8;



void DoorSpiral_SetupAction(DoorSpiral *arg0, void (*arg1)(void *, void *)) {
    arg0->actionFunc = arg1;
    arg0->unk14A = 0;
}

? func_809A2B70(DoorSpiral *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    u8 temp_t9;

    temp_t9 = ((arg0->objectType * 4) + &D_809A32D0)->unk2;
    temp_v1 = temp_t9 & 0xFF;
    arg0->spiralType = temp_t9;
    if ((temp_v1 == 7) || ((temp_v1 == 2) && (arg1->roomCtx.currRoom.enablePosLights != 0))) {
        if (temp_v1 == 2) {
            arg0->spiralType = 3;
        }
        arg0->actor.flags |= 0x10000000;
    }
    DoorSpiral_SetupAction(&func_809A2FF8);
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

    phi_v0 = &D_809A32EC;
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
        phi_v1_3 = phi_v0_2->unk2;
    } else if (Object_GetIndex(arg0 + 0x17D88, 3) >= 0) {
        phi_v1_3 = 1U;
    }
    return phi_v1_3;
}

void DoorSpiral_Init(Actor *thisx, GlobalContext *globalCtx) {
    DoorSpiral *this = (DoorSpiral *) thisx;
    s8 temp_v0_2;
    u8 temp_v0;

    if (this->actor.room != globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA].sides[0].room) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    Actor_ProcessInitChain(&this->actor, &D_809A3308);
    this->unk145 = ((s32) this->actor.params >> 8) & 3;
    this->orientation = ((s32) this->actor.params >> 7) & 1;
    temp_v0 = func_809A2BF8(globalCtx);
    this->objectType = temp_v0;
    temp_v0_2 = Object_GetIndex(&globalCtx->objectCtx, *(&D_809A32D0 + ((temp_v0 & 0xFF) * 4)));
    this->bankIndex = temp_v0_2;
    if ((s32) temp_v0_2 < 0) {
        Actor_MarkForDeath(&this->actor);
        return;
    }
    DoorSpiral_SetupAction(this, func_809A2DB0);
    Actor_SetHeight(&this->actor, 60.0f);
}

void DoorSpiral_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DoorSpiral *this = (DoorSpiral *) thisx;
    TransitionActorEntry *temp_v1;

    temp_v1 = &globalCtx->doorCtx.transitionActorList[(s32) (u16) this->actor.params >> 0xA];
    temp_v1->id = (s16) -(s32) temp_v1->id;
}

void func_809A2DB0(DoorSpiral *arg0, GlobalContext *arg1) {
    s8 temp_a1;

    temp_a1 = arg0->bankIndex;
    arg0 = arg0;
    if (Object_IsLoaded(arg1 + 0x17D88, (s32) temp_a1) != 0) {
        arg0->actor.objBankIndex = arg0->bankIndex;
        func_809A2B70(arg0, arg1, arg0);
    }
}

f32 func_809A2E08(GlobalContext *arg0, Actor *arg1, f32 arg2, f32 arg3, f32 arg4) {
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
        temp_v0 = (arg0->unk148 * 0x10) + &D_809A3250;
        temp_t0 = temp_v0->unkE;
        temp_f4 = (f32) temp_t0;
        phi_f4 = temp_f4;
        if ((s32) temp_t0 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        temp_t1 = temp_v0->unkF;
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



void func_809A3098(DoorSpiral *arg0, void *arg1) {
    if ((arg1->unk1CCC->unkA6C * 4) >= 0) {
        DoorSpiral_SetupAction(arg0, func_809A2DB0);
        arg0->shouldClimb = 0;
    }
}

void DoorSpiral_Update(Actor *thisx, GlobalContext *globalCtx) {
    DoorSpiral *this = (DoorSpiral *) thisx;
    if (((globalCtx->actorCtx.actorList[2].first->unkA6C & 0x100004C0) == 0) || (func_809A2DB0 == this->actionFunc)) {
        this->actionFunc(this, globalCtx);
    }
}

void DoorSpiral_Draw(Actor *thisx, GlobalContext *globalCtx) {
    DoorSpiral *this = (DoorSpiral *) thisx;
    void *sp2C;
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    GraphicsContext *temp_a0;
    void *temp_a3;

    if (this->bankIndex == this->actor.objBankIndex) {
        temp_a3 = (this->spiralType * 0x10) + &D_809A3250;
        if (*(temp_a3 + (this->orientation * 4)) != 0) {
            temp_a0 = globalCtx->state.gfxCtx;
            sp2C = temp_a3;
            this = this;
            sp24 = temp_a0;
            func_8012C28C(temp_a0);
            temp_v0 = sp24->polyOpa.p;
            sp24->polyOpa.p = temp_v0 + 8;
            temp_v0->words.w0 = 0xDA380003;
            sp2C = temp_a3;
            this = this;
            sp24 = sp24;
            sp1C = temp_v0;
            sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_2 = sp24->polyOpa.p;
            sp24->polyOpa.p = temp_v0_2 + 8;
            temp_v0_2->words.w0 = 0xDE000000;
            temp_v0_2->words.w1 = *(temp_a3 + (this->orientation * 4));
        }
    }
}

