typedef struct DmTag {
    /* 0x000 */ Actor actor;
    /* 0x144 */ char pad_144[0x44];
    /* 0x188 */ void (*actionFunc)(DmTag *, GlobalContext *);
    /* 0x18C */ u16 unk_18C;                        /* inferred */
    /* 0x18E */ s8 unk_18E;                         /* inferred */
    /* 0x18F */ char pad_18F[0x1];
    /* 0x190 */ s32 *unk_190;                       /* inferred */
    /* 0x194 */ s32 unk_194;                        /* inferred */
    /* 0x198 */ char pad_198[0x10];                 /* maybe part of unk_194[5]? */
    /* 0x1A8 */ void *unk_1A8;                      /* inferred */
} DmTag;                                            /* size = 0x1AC */

struct _mips2c_stack_DmTag_Destroy {};              /* size 0x0 */

struct _mips2c_stack_DmTag_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_DmTag_Update {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C22350 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80C22400 {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ s32 sp1C;                            /* inferred */
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80C2247C {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C224D8 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x2];
    /* 0x2A */ s16 sp2A;                            /* inferred */
    /* 0x2C */ Actor *sp2C;                         /* inferred */
    /* 0x30 */ Actor *sp30;                         /* inferred */
    /* 0x34 */ char pad_34[0x4];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80C227E8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C22880 {};              /* size 0x0 */

struct _mips2c_stack_func_80C2291C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ s32 sp24;                            /* inferred */
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80C229AC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80C229EC {};              /* size 0x0 */

struct _mips2c_stack_func_80C229FC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

? func_800E0308(Camera *, Actor *);                 /* extern */
Actor *func_80C22350(Actor *arg0, GlobalContext *arg1, s32 arg2, s16 arg3); /* static */
s32 func_80C22400(Actor *arg0, s16 arg1, Actor *);  /* static */
s8 func_80C2247C(Actor *arg0, s32 arg1, Actor *);   /* static */
s32 func_80C224D8(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80C227E8(Actor *arg0, GlobalContext *arg1); /* static */
? *func_80C22880(Actor *arg0, GlobalContext *arg1); /* static */
s32 func_80C2291C(Actor *arg0, GlobalContext *arg1); /* static */
static ? D_80C22BF0;                                /* unable to generate initializer */
static ? D_80C22BFC;                                /* unable to generate initializer */
static ? D_80C22C30;                                /* unable to generate initializer */

Actor *func_80C22350(Actor *arg0, GlobalContext *arg1, s32 arg2, s16 arg3) {
    Actor *temp_v0;
    Actor *temp_v1;
    Actor *phi_s0;
    Actor *phi_s0_2;

    phi_s0 = NULL;
    phi_s0_2 = NULL;
loop_1:
    temp_v0 = func_ActorCategoryIterateById(arg1, phi_s0, arg2 & 0xFF & 0xFF, (s32) arg3);
    phi_s0_2 = temp_v0;
    if ((temp_v0 != 0) && ((temp_v0 == arg0) || (temp_v0->update == 0))) {
        temp_v1 = temp_v0->next;
        if (temp_v1 == 0) {

        } else {
            phi_s0 = temp_v1;
            goto loop_1;
        }
    }
    return phi_s0_2;
}

s32 func_80C22400(Actor *arg0, s16 arg1) {
    s32 sp1C;

    sp1C = 0;
    if (ActorCutscene_GetCurrentIndex() == 0x7C) {
        ActorCutscene_Stop(0x7C);
        ActorCutscene_SetIntentToPlay(arg1);
    } else if (ActorCutscene_GetCanPlayNext(arg1) != 0) {
        ActorCutscene_StartAndSetUnkLinkFields(arg1, arg0);
        sp1C = 1;
    } else {
        ActorCutscene_SetIntentToPlay(arg1);
    }
    return sp1C;
}

s8 func_80C2247C(Actor *arg0, s32 arg1) {
    s16 temp_v0;
    s32 temp_s0;
    s8 temp_s1;
    s16 phi_s1;
    s32 phi_s0;
    s8 phi_s1_2;

    temp_s1 = arg0->cutscene;
    phi_s1 = (s16) temp_s1;
    phi_s0 = 0;
    phi_s1_2 = temp_s1;
    if (arg1 > 0) {
        do {
            temp_v0 = ActorCutscene_GetAdditionalCutscene(phi_s1);
            temp_s0 = phi_s0 + 1;
            phi_s1 = temp_v0;
            phi_s0 = temp_s0;
            phi_s1_2 = (s8) temp_v0;
        } while (temp_s0 != arg1);
    }
    return phi_s1_2;
}

s32 func_80C224D8(Actor *arg0, GlobalContext *arg1) {
    Actor *sp30;
    Actor *sp2C;
    s16 sp2A;
    s32 sp24;
    Actor *temp_a2;
    s16 temp_v1;

    sp24 = 0;
    sp2A = (s16) arg0->cutscene;
    sp30 = func_80C22350(arg0, arg1, 4, 0x202);
    temp_v1 = arg0->unk_1A4;
    temp_a2 = func_80C22350(arg0, arg1, 4, 0x253);
    switch (temp_v1) {
    case 0:
        sp2C = temp_a2;
        if (func_80C22400(arg0, sp2A, temp_a2) != 0) {
            if ((temp_a2 != 0) && (temp_a2->update != 0)) {
                sp2C = temp_a2;
                func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(sp2A)), sp2C);
            }
            arg0->unk_1A4 = (s16) (arg0->unk_1A4 + 1);
            sp24 = 1;
        }
        break;
    case 1:
        if ((sp30 != 0) && (sp30->update != 0)) {
            func_800E0308(Play_GetCamera(arg1, ActorCutscene_GetCurrentCamera(func_80C2247C(arg0, 0, temp_a2))), sp30);
        }
        arg0->unk_1A4 = (s16) (arg0->unk_1A4 + 1);
        sp24 = 1;
        break;
    case 2:
        ActorCutscene_Stop(func_80C2247C(arg0, 0, temp_a2));
        if (func_80C22400(arg0, func_80C2247C(arg0, 1)) != 0) {
            arg0->unk_1A4 = (s16) (arg0->unk_1A4 + 1);
            sp24 = 1;
        }
        break;
    case 3:
        ActorCutscene_Stop(func_80C2247C(arg0, 1, temp_a2));
        if (func_80C22400(arg0, func_80C2247C(arg0, 2)) != 0) {
            arg0->unk_1A4 = (s16) (arg0->unk_1A4 + 1);
            sp24 = 1;
        }
        break;
    case 4:
        ActorCutscene_Stop(func_80C2247C(arg0, 2, temp_a2));
        if (func_80C22400(arg0, func_80C2247C(arg0, 3)) != 0) {
            arg0->unk_1A4 = (s16) (arg0->unk_1A4 + 1);
            sp24 = 1;
        }
        break;
    case 5:
        ActorCutscene_Stop(func_80C2247C(arg0, 3, temp_a2));
        if (func_80C22400(arg0, func_80C2247C(arg0, 4)) != 0) {
            arg0->unk_1A4 = (s16) (arg0->unk_1A4 + 1);
            sp24 = 1;
        }
        break;
    case 6:
        func_800B7298(arg1, arg0, 7U);
        arg1->nextEntranceIndex = 0xBC50;
        gSaveContext.nextCutsceneIndex = 0;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 2;
        gSaveContext.nextTransition = 6;
        arg0->unk_1A4 = (s16) (arg0->unk_1A4 + 1);
        break;
    }
    return sp24;
}

s32 func_80C227E8(Actor *arg0, GlobalContext *arg1) {
    Actor *temp_a1;

    temp_a1 = arg0;
    if (arg0->unk_1A4 == 0) {
        arg0 = arg0;
        func_800B7298(arg1, temp_a1, 7U);
        arg1->nextEntranceIndex = 0xBC40;
        gSaveContext.nextCutsceneIndex = 0;
        arg1->sceneLoadFlag = 0x14;
        arg1->unk_1887F = 2;
        gSaveContext.nextTransition = 6;
        arg0->unk_1A4 = (s16) (arg0->unk_1A4 + 1);
    }
    return 0;
}

? *func_80C22880(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v0_2;
    u8 temp_v0;

    temp_v0 = arg0->unk_18E;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            return NULL;
        }
        arg0[1].velocity.x = func_80C224D8;
        return &D_80C22BFC;
    }
    temp_v0_2 = gSaveContext.time - 0x3FFC;
    if ((temp_v0_2 >= 0xA54B) && (temp_v0_2 < 0xB54A) && (gSaveContext.day == 2)) {
        arg0[1].velocity.x = func_80C227E8;
        return &D_80C22BF0;
    }
    return &D_80C22C30;
}

s32 func_80C2291C(Actor *arg0, GlobalContext *arg1) {
    s32 sp24;
    s32 phi_v1;

    phi_v1 = 0;
    if ((arg0[1].focus.rot.x & 7) != 0) {
        sp24 = 0;
        phi_v1 = sp24;
        if (func_800B84D0(arg0, arg1) != 0) {
            arg0[1].focus.rot.x = (u16) arg0[1].focus.rot.x | 8;
            func_8013AED4((u16 *) &arg0[1].focus.rot, 0U, 7U);
            arg0->unk_190 = func_80C22880(arg0, arg1);
            arg0[1].focus.pos.z = (bitwise f32) func_80C229FC;
            phi_v1 = 1;
        }
    }
    return phi_v1;
}

void func_80C229AC(DmTag *this, GlobalContext *globalCtx) {
    u16 *temp_a0;

    temp_a0 = &this->unk_18C;
    this = this;
    func_8013AED4(temp_a0, 3U, 7U);
    this->actor.flags |= 1;
}

void func_80C229EC(DmTag *this, GlobalContext *globalCtx) {

}

void func_80C229FC(DmTag *this, GlobalContext *globalCtx) {
    if (func_8010BF58((Actor *) this, globalCtx, this->unk_190, this->unk_1A8, &this->unk_194) != 0) {
        this->actionFunc = func_80C229AC;
    }
}

void DmTag_Init(Actor *thisx, GlobalContext *globalCtx) {
    Actor *temp_v0;
    u16 *temp_a0;
    DmTag *this = (DmTag *) thisx;

    temp_v0 = globalCtx->actorCtx.actorList[2].first;
    if ((gSaveContext.weekEventReg[85] & 4) != 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if ((globalCtx->sceneNum == 0x61) && (temp_a0 = &this->unk_18C, (globalCtx->curSpawn == 4))) {
        temp_v0->unk_A6C = (s32) (temp_v0->unk_A6C | 0x20);
        this->unk_18E = 2;
        this->unk_18C = 0;
        this = this;
        func_8013AED4(temp_a0, 4U, 7U);
        this->actionFunc = func_80C229EC;
        this->actor.flags &= -2;
        return;
    }
    if (this->actor.room == 2) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->actor.targetMode = 1;
    this->unk_18E = 1;
    this->unk_18C = 0;
    this->actionFunc = func_80C229AC;
}

void DmTag_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    DmTag *this = (DmTag *) thisx;

}

void DmTag_Update(Actor *thisx, GlobalContext *globalCtx) {
    DmTag *this = (DmTag *) thisx;
    func_80C2291C((Actor *) this, globalCtx);
    this->actionFunc(this, globalCtx);
    func_8013C964((Actor *) this, globalCtx, 40.0f, fabsf(this->actor.yDistToPlayer) + 1.0f, 0, (s16) (this->unk_18C & 7));
    Actor_SetHeight((Actor *) this, 0.0f);
}
