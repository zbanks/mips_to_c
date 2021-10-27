typedef struct EnFall {
    /* 0x000 */ Actor actor;
    /* 0x144 */ u16 unk_144;                        /* inferred */
    /* 0x146 */ u16 unk_146;                        /* inferred */
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ char pad_149[0x3];                  /* maybe part of unk_148[4]? */
    /* 0x14C */ f32 unk_14C;                        /* inferred */
    /* 0x150 */ f32 unk_150;                        /* inferred */
    /* 0x154 */ s16 unk_154;                        /* inferred */
    /* 0x156 */ char pad_156[0x2];
    /* 0x158 */ s32 unk_158;                        /* inferred */
    /* 0x15C */ char pad_15C[0x4];
    /* 0x160 */ void (*actionFunc)(EnFall *, GlobalContext *);
} EnFall;                                           /* size = 0x164 */

typedef struct {
    /* 0x00 */ Vec3f pos;
    /* 0x0C */ Vec3s rot;
    /* 0x12 */ s16 unk_12;                          /* inferred */
} PosRot;                                           /* size = 0x14 */

struct _mips2c_stack_EnFall_Destroy {};             /* size 0x0 */

struct _mips2c_stack_EnFall_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnFall_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A6BF90 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80A6C1DC {};              /* size 0x0 */

struct _mips2c_stack_func_80A6C3AC {};              /* size 0x0 */

struct _mips2c_stack_func_80A6C3FC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6C7C0 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A6C9A8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6CA9C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6CB74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6CD38 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A6CD74 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6CECC {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Vec3f *sp20;                         /* inferred */
    /* 0x24 */ Vec3f *sp24;                         /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A6CF60 {};              /* size 0x0 */

struct _mips2c_stack_func_80A6CF70 {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ ActorContext *sp44;                  /* inferred */
    /* 0x48 */ char pad_48[0x8];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_80A6D100 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ u8 sp24;                             /* inferred */
    /* 0x25 */ s8 sp25;                             /* inferred */
    /* 0x26 */ s8 sp26;                             /* inferred */
    /* 0x27 */ s8 sp27;                             /* inferred */
    /* 0x28 */ s8 sp28;                             /* inferred */
    /* 0x29 */ char pad_29[0x7];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A6D220 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6D444 {};              /* size 0x0 */

struct _mips2c_stack_func_80A6D504 {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ f32 sp20;                            /* inferred */
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x6];                    /* maybe part of sp24[2]? */
    /* 0x2E */ s16 sp2E;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A6D698 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6D75C {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80A6D88C {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A6D98C {
    /* 0x00 */ char pad_0[0x1C];
    /* 0x1C */ Gfx *sp1C;                           /* inferred */
    /* 0x20 */ char pad_20[0x4];
    /* 0x24 */ GraphicsContext *sp24;               /* inferred */
    /* 0x28 */ char pad_28[0x8];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A6DA7C {
    /* 0x00 */ char pad_0[0x30];
    /* 0x30 */ Gfx *sp30;                           /* inferred */
    /* 0x34 */ char pad_34[0x14];
};                                                  /* size = 0x48 */

struct _mips2c_stack_func_80A6DC20 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80A6DC40 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ f32 sp24;                            /* inferred */
    /* 0x28 */ char pad_28[0x4];
    /* 0x2C */ f32 sp2C;                            /* inferred */
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80A6DD3C {
    /* 0x00 */ char pad_0[0x48];
    /* 0x48 */ s32 sp48;                            /* inferred */
    /* 0x4C */ char pad_4C[0xC];                    /* maybe part of sp48[4]? */
    /* 0x58 */ Gfx *sp58;                           /* inferred */
    /* 0x5C */ Gfx *sp5C;                           /* inferred */
    /* 0x60 */ char pad_60[0x8];                    /* maybe part of sp5C[3]? */
    /* 0x68 */ Gfx *sp68;                           /* inferred */
    /* 0x6C */ char pad_6C[0x8];                    /* maybe part of sp68[3]? */
    /* 0x74 */ u32 sp74;                            /* inferred */
    /* 0x78 */ char pad_78[0x8];
};                                                  /* size = 0x80 */

struct _mips2c_stack_func_80A6E07C {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_80A6E214 {
    /* 0x00 */ char pad_0[0x24];
    /* 0x24 */ Gfx *sp24;                           /* inferred */
    /* 0x28 */ char pad_28[0x10];
};                                                  /* size = 0x38 */

struct _mips2c_stack_func_80A6E37C {
    /* 0x00 */ char pad_0[0x20];
    /* 0x20 */ Gfx *sp20;                           /* inferred */
    /* 0x24 */ char pad_24[0x4];
    /* 0x28 */ Gfx *sp28;                           /* inferred */
    /* 0x2C */ char pad_2C[0xC];
};                                                  /* size = 0x38 */

void func_80A6BF90(Actor *arg0, GlobalContext *arg1, GlobalContext *); /* static */
void func_80A6C1DC(EnFall *arg0);                   /* static */
Actor *func_80A6C3AC(GlobalContext *arg0);          /* static */
void func_80A6C7C0(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A6CECC(EnFall *arg0);                   /* static */
void func_80A6D100(f32 arg0);                       /* static */
void func_80A6D220(Actor *thisx, GlobalContext *globalCtx); /* static */
void func_80A6D444(Actor *arg0);                    /* static */
? func_80A6D504(Actor *arg0);                       /* static */
void func_80A6D698(Actor *thisx, GlobalContext *globalCtx); /* static */
void func_80A6D75C(Actor *thisx, GlobalContext *globalCtx); /* static */
void func_80A6D88C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A6D98C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A6DA7C(Actor *arg0, GlobalContext *arg1); /* static */
void func_80A6DC20(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A6DC40(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A6DD3C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A6E07C(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A6E214(Actor *this, GlobalContext *globalCtx); /* static */
void func_80A6E37C(s32 arg0, GlobalContext *arg1);  /* static */
extern ? D_06000198;
extern ? D_06000400;
extern void D_060004C0;
extern ? D_060004C8;
extern ? D_060010E0;
extern ? D_06001158;
extern ? D_060011D0;
extern void D_06001220;
extern ? D_06002970;
extern ? D_06003C30;
extern void D_06004E38;
extern ? D_060077F0;
static s32 D_80A6E4B0 = 0;
static u8 D_80A6E4B4 = 4;
static u8 D_80A6E4B5[207] = {
    4,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    3,
    0,
    0,
    3,
    0,
    1,
    1,
    1,
    4,
    0,
    4,
    0,
    1,
    1,
    1,
    3,
    0,
    3,
    0,
    1,
    1,
    1,
    4,
    4,
    1,
    1,
    0,
    4,
    4,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    3,
    0,
    0,
    3,
    3,
    0,
    0,
    1,
    1,
    1,
    1,
    1,
    4,
    0,
    4,
    4,
    0,
    4,
    4,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    3,
    0,
    0,
    3,
    3,
    0,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    4,
    4,
    0,
    4,
    0,
    1,
    1,
    1,
    3,
    0,
    3,
    3,
    0,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    4,
    4,
    0,
    4,
    4,
    0,
    1,
    1,
    1,
    1,
    1,
    1,
    3,
    3,
    0,
    0,
    0,
    0,
    0,
    2,
    2,
    1,
    1,
    0,
    0,
    2,
    2,
    0,
    1,
    1,
    0,
    0,
    1,
    0,
    2,
    0,
    0,
    1,
    0,
    2,
    0,
    0,
    2,
    1,
    2,
    0,
    1,
    0,
    1,
    0,
    0,
    1,
    2,
    2,
    0,
    0,
    2,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    2,
    2,
    0,
    0,
    0,
    0,
    2,
    0,
    2,
    2,
    0,
    1,
    1,
    0,
    0,
    1,
    0,
    0,
    1,
    2,
    2,
    0,
    0,
    0,
    2,
    2,
    1,
    1,
    0,
    0,
    1,
    1,
    0,
    0,
    2,
    2,
    0,
};
static ? D_80A6E585;                                /* unable to generate initializer */
static Vec3f D_80A6E588 = {1800.0f, 1000.0f, 4250.0f};
static ? D_80A6E594;                                /* unable to generate initializer */
static s8 D_80A6E990[36];
static s8 D_80A6E9B4[36];
static ? D_80A6E9D8;
static ? D_80A6F098;

void func_80A6BF90(Actor *arg0, GlobalContext *arg1) {
    f32 sp20;
    s32 temp_hi;
    u16 temp_v0;
    u16 temp_v1;
    f32 phi_f0;
    f32 phi_f10;

    temp_v0 = gSaveContext.time;
    temp_v1 = arg0[1].id;
    if ((s32) temp_v0 < (s32) temp_v1) {
        phi_f0 = 1.0f - (((f32) temp_v1 - (f32) temp_v0) * 0.000015258789f);
    } else {
        phi_f0 = ((f32) temp_v0 - (f32) temp_v1) * 0.000015258789f;
    }
    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 0) {
        if (temp_hi != 1) {
            if (temp_hi != 2) {
                if (temp_hi != 3) {
                    return;
                }
                sp20 = phi_f0;
                Actor_SetScale(arg0, arg0[1].home.pos.x * 3.6f);
                if (((s32) (arg0->params & 0xF80) >> 7) == 0xC) {
                    arg0->world.pos.y = arg0->home.pos.y + (phi_f0 * 6700.0f * (arg0[1].home.pos.x * 6.25f));
                    return;
                }
                phi_f10 = arg0->home.pos.y - (phi_f0 * 6700.0f * (arg0[1].home.pos.x * 6.25f));
                goto block_14;
            }
            Actor_SetScale(arg0, arg0[1].home.pos.x * 3.6f);
            arg0->world.pos.y = arg0->home.pos.y;
            return;
        }
        Actor_SetScale(arg0, arg0[1].home.pos.x * 2.4f);
        phi_f10 = arg0->home.pos.y;
block_14:
        arg0->world.pos.y = phi_f10;
        return;
    }
    Actor_SetScale(arg0, arg0[1].home.pos.x * 1.2f);
    arg0->world.pos.y = arg0->home.pos.y;
}

void func_80A6C1DC(EnFall *arg0) {
    ? *temp_v1;
    ? *phi_v1;

    *D_80A6E990 = 3;
    *D_80A6E9B4 = 3;
    phi_v1 = &D_80A6E9D8;
    do {
        temp_v1 = phi_v1 + 0x90;
        temp_v1->unk_-6C = 3;
        temp_v1->unk_-48 = 3;
        temp_v1->unk_-24 = 3;
        temp_v1->unk_-90 = 3;
        phi_v1 = temp_v1;
    } while (temp_v1 != &D_80A6F098);
    arg0->unk_158 = 0;
}

void EnFall_Init(Actor *thisx, GlobalContext *globalCtx) {
    s32 temp_t8;
    s32 temp_v0;
    s32 phi_v0;
    EnFall *this = (EnFall *) thisx;

    temp_v0 = this->actor.params & 0x7F;
    this->unk_154 = 0;
    this->unk_150 = 0.0f;
    if (temp_v0 != 1) {
        if (temp_v0 != 2) {
            if (temp_v0 != 3) {
                if (temp_v0 != 4) {
                    this->unk_14C = 0.16f;
                } else {
                    this->unk_14C = 0.01f;
                }
            } else {
                this->unk_14C = 0.02f;
            }
        } else {
            this->unk_14C = 0.04f;
        }
    } else {
        this->unk_14C = 0.08f;
    }
    temp_t8 = (s32) (this->actor.params & 0xF80) >> 7;
    switch (temp_t8) {
    case 5:
    case 6:
    case 12:
        this = this;
        phi_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x223);
        break;
    case 8:
        this = this;
        phi_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x251);
        break;
    case 10:
        this = this;
        phi_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x269);
        break;
    default:
        this = this;
        phi_v0 = Object_GetIndex(&globalCtx->objectCtx, 0x188);
        break;
    }
    if (phi_v0 < 0) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    this->unk_148 = (u8) phi_v0;
    this->actionFunc = func_80A6C3FC;
}

void EnFall_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnFall *this = (EnFall *) thisx;

}

Actor *func_80A6C3AC(GlobalContext *arg0) {
    Actor *temp_v1;
    Actor *temp_v1_2;
    Actor *phi_v1;

    temp_v1 = arg0->actorCtx.actorList[7].first;
    phi_v1 = temp_v1;
    if (temp_v1 != 0) {
loop_1:
        if ((phi_v1->id == 0x17C) && (((s32) (phi_v1->params & 0xF80) >> 7) == 0)) {
            return phi_v1;
        }
        temp_v1_2 = phi_v1->next;
        phi_v1 = temp_v1_2;
        if (temp_v1_2 == 0) {
            /* Duplicate return node #5. Try simplifying control flow for better match */
            return NULL;
        }
        goto loop_1;
    }
    return NULL;
}

void func_80A6C3FC(EnFall *this, GlobalContext *globalCtx) {
    Actor *temp_v0;
    GlobalContext *temp_a2;
    s32 temp_t0;

    temp_a2 = globalCtx;
    globalCtx = temp_a2;
    if (Object_IsLoaded(&temp_a2->objectCtx, (s32) this->unk_148) != 0) {
        temp_t0 = (s32) (this->actor.params & 0xF80) >> 7;
        this->actionFunc = func_80A6CD74;
        this->actor.objBankIndex = (s8) this->unk_148;
        switch (temp_t0) {
        case 1:
            this->actor.draw = func_80A6D88C;
            this->actionFunc = func_80A6CD38;
            Actor_SetScale((Actor *) this, this->unk_14C);
            return;
        case 7:
            this->actor.draw = func_80A6D88C;
            this->actionFunc = func_80A6CB74;
            Actor_SetScale((Actor *) this, this->unk_14C * 3.0f);
            if ((gSaveContext.weekEventReg[25] & 2) == 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        case 9:
            this->actionFunc = func_80A6CD38;
            Actor_SetScale((Actor *) this, this->unk_14C * 3.0f);
            this->actor.draw = func_80A6D88C;
            if ((gSaveContext.weekEventReg[25] & 2) != 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        case 2:
            this->actor.draw = func_80A6D88C;
            Actor_SetScale((Actor *) this, this->unk_14C * 5.3999996f);
            this->actionFunc = func_80A6C9A8;
            return;
        case 3:
            this->actor.shape.rot.z = 0;
            this->actor.update = func_80A6D220;
            this->actor.draw = func_80A6DD3C;
            this->unk_158 = 0x64;
            this->unk_14C = 1.0f;
            this->unk_150 = 0.0f;
            this->actor.shape.rot.x = this->actor.shape.rot.z;
            return;
        case 4:
            this->actor.update = func_80A6D698;
            this->actor.draw = func_80A6E07C;
            this->unk_14C = 1.0f;
            func_80A6C1DC(this);
            Actor_SetScale((Actor *) this, 1.0f);
            this->actor.shape.rot.x = 0;
            return;
        case 5:
            this->actor.draw = func_80A6DC20;
            this->unk_144 = 0x4000;
            this->unk_146 = (u16) ((s32) gSaveContext.day % 5);
            func_80A6BF90((Actor *) this, globalCtx, globalCtx);
            return;
        case 6:
        case 12:
            this->actor.draw = func_80A6DC40;
            this->unk_144 = 0x4000;
            this->unk_146 = (u16) ((s32) gSaveContext.day % 5);
            func_80A6BF90((Actor *) this, globalCtx, globalCtx);
            return;
        case 8:
            this->actor.update = EnFall_Update;
            this->actor.draw = NULL;
            this->actionFunc = func_80A6CF70;
            globalCtx = globalCtx;
            Actor_SetScale((Actor *) this, 0.02f);
            if ((globalCtx->actorCtx.unk5 & 2) == 0) {
                globalCtx = globalCtx;
                Actor_MarkForDeath((Actor *) this);
            }
            temp_v0 = func_80A6C3AC(globalCtx);
            this->actor.child = temp_v0;
            if (temp_v0 == 0) {
                Actor_MarkForDeath((Actor *) this);
                return;
            }
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        case 10:
            this->actor.draw = NULL;
            this->actionFunc = func_80A6CA9C;
            Actor_SetScale((Actor *) this, this->unk_14C * 3.0f);
            return;
        case 11:
            this->actor.update = func_80A6D75C;
            this->actor.draw = func_80A6E214;
            Actor_SetScale((Actor *) this, 0.2f);
            return;
        default:
            this->actor.draw = func_80A6D88C;
            this->unk_144 = 0x4000;
            this->unk_146 = (u16) ((s32) gSaveContext.day % 5);
            func_80A6BF90((Actor *) this, globalCtx, globalCtx);
            /* Duplicate return node #20. Try simplifying control flow for better match */
            return;
        }
    }
}

void func_80A6C7C0(Actor *arg0, GlobalContext *arg1) {
    s32 temp_v1;
    u32 temp_v0;

    if ((arg1->sceneNum == 0x2D) && (gSaveContext.sceneSetupIndex == 1) && (arg1->csCtx.unk_12 == 0)) {
        temp_v1 = D_80A6E4B0;
        if (temp_v1 != 0) {
            if (temp_v1 != 2) {
                if (temp_v1 != 9) {
                    return;
                }
                arg1->csCtx.frames += -1;
                /* Duplicate return node #23. Try simplifying control flow for better match */
                return;
            }
            temp_v0 = gSaveContext.inventory.questItems;
            if (((gBitFlags->unk_0 & temp_v0) != 0) && ((gBitFlags[1] & temp_v0) != 0) && ((gBitFlags[2] & temp_v0) != 0) && ((gBitFlags[3] & temp_v0) != 0)) {
                if ((gSaveContext.weekEventReg[93] & 4) != 0) {
                    if (ActorCutscene_GetCanPlayNext(0xC) != 0) {
                        ActorCutscene_Start(0xC, arg0);
                        D_80A6E4B0 = D_80A6E4B0 + 1;
                        return;
                    }
                    ActorCutscene_SetIntentToPlay(0xC);
                    return;
                }
                if (ActorCutscene_GetCanPlayNext(0xB) != 0) {
                    ActorCutscene_Start(0xB, arg0);
                    gSaveContext.weekEventReg[93] |= 4;
                    D_80A6E4B0 = D_80A6E4B0 + 1;
                    return;
                }
                ActorCutscene_SetIntentToPlay(0xB);
                return;
            }
            if ((s32) arg1->csCtx.frames >= 0x641) {
                arg1->nextEntranceIndex = 0x2C00;
                gSaveContext.nextCutsceneIndex = 0xFFF2;
                arg1->sceneLoadFlag = 0x14;
                arg1->unk_1887F = 2;
                gSaveContext.nextTransition = 2;
                D_80A6E4B0 = 9;
                return;
            }
            /* Duplicate return node #23. Try simplifying control flow for better match */
            return;
        }
        if (arg1->csCtx.state != 0) {
            D_80A6E4B0 = temp_v1 + 2;
            return;
        }
        /* Duplicate return node #23. Try simplifying control flow for better match */
    }
}

void func_80A6C9A8(EnFall *this, GlobalContext *globalCtx) {
    func_80A6C7C0((Actor *) this, globalCtx);
    if (func_800EE29C(globalCtx, 0x85U) != 0) {
        if ((func_800EE29C(globalCtx, 0x85U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x85U)]->unk0 == 1)) {
            goto block_7;
        }
        this->actor.draw = func_80A6D88C;
        if ((func_800EE29C(globalCtx, 0x85U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x85U)]->unk0 == 2)) {
            func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, 0x85U));
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
block_7:
    this->actor.draw = NULL;
}

void func_80A6CA9C(EnFall *this, GlobalContext *globalCtx) {
    u16 temp_v1;

    if (func_800EE29C(globalCtx, 0x85U) != 0) {
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x85U)]->unk0;
        if (temp_v1 != 3) {
            if (temp_v1 != 4) {
                return;
            }
            this->actor.draw = func_80A6D98C;
            /* Duplicate return node #9. Try simplifying control flow for better match */
            return;
        }
        if (this->unk_150 == 0.0f) {
            Audio_PlayActorSound2((Actor *) this, 0x299CU);
        }
        this->unk_150 += 0.033333335f;
        if (this->unk_150 > 1.0f) {
            this->unk_150 = 1.0f;
            return;
        }
        /* Duplicate return node #9. Try simplifying control flow for better match */
    }
}

void func_80A6CB74(EnFall *this, GlobalContext *globalCtx) {
    u16 temp_v0;
    u16 temp_v0_2;
    u16 temp_v1;
    u16 temp_v1_2;

    if (func_800EE29C(globalCtx, 0x85U) != 0) {
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x85U)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 4) {

            } else {
                this->actor.draw = NULL;
            }
        } else {
            func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, 0x85U));
        }
    }
    if ((globalCtx->sceneNum == 0x19) && (gSaveContext.sceneSetupIndex == 2)) {
        temp_v1_2 = globalCtx->csCtx.unk_12;
        if (temp_v1_2 != 0) {
            if (temp_v1_2 != 1) {
                return;
            }
            temp_v0 = globalCtx->csCtx.frames;
            if (temp_v0 != 0x231) {
                if (temp_v0 != 0x24E) {
                    if (temp_v0 != 0x2E1) {

                    } else {
                        Audio_PlayActorSound2((Actor *) this, 0x299DU);
                        goto block_28;
                    }
                } else {
                    Audio_PlayActorSound2((Actor *) this, 0x28B5U);
                    goto block_28;
                }
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x3ABFU);
block_28:
            }
            if ((s32) globalCtx->csCtx.frames >= 0x28A) {
                func_800B9010((Actor *) this, 0x219EU);
            }
            /* Duplicate return node #31. Try simplifying control flow for better match */
            return;
        }
        temp_v0_2 = globalCtx->csCtx.frames;
        if (temp_v0_2 != 0x424) {
            if (temp_v0_2 != 0x441) {
                if (temp_v0_2 != 0x517) {

                } else {
                    Audio_PlayActorSound2((Actor *) this, 0x299DU);
                    goto block_18;
                }
            } else {
                Audio_PlayActorSound2((Actor *) this, 0x28B5U);
                goto block_18;
            }
        } else {
            Audio_PlayActorSound2((Actor *) this, 0x3ABFU);
block_18:
        }
        if ((s32) globalCtx->csCtx.frames >= 0x479) {
            func_800B9010((Actor *) this, 0x219EU);
            return;
        }
        /* Duplicate return node #31. Try simplifying control flow for better match */
    }
}

void func_80A6CD38(EnFall *this, GlobalContext *globalCtx) {
    if ((globalCtx->csCtx.state != 0) && (globalCtx->sceneNum == 0x19)) {
        func_800B9010((Actor *) this, 0x2129U);
    }
}

void func_80A6CD74(EnFall *this, GlobalContext *globalCtx) {
    u16 temp_v0;

    if (func_800EE29C(globalCtx, 0x85U) != 0) {
        if ((func_800EE29C(globalCtx, 0x85U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x85U)]->unk0 == 1)) {
            this->actor.draw = NULL;
            return;
        }
        Actor_SetScale((Actor *) this, this->unk_14C * 3.6f);
        this->actor.draw = func_80A6D88C;
        if ((func_800EE29C(globalCtx, 0x85U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x85U)]->unk0 == 2)) {
            func_800EDF24((Actor *) this, globalCtx, func_800EE200(globalCtx, 0x85U));
            return;
        }
        /* Duplicate return node #12. Try simplifying control flow for better match */
        return;
    }
    if (this->actor.draw == 0) {
        this->actor.draw = func_80A6D88C;
    }
    temp_v0 = ((s32) gSaveContext.day % 5) & 0xFFFF;
    if (temp_v0 != this->unk_146) {
        this->unk_146 = temp_v0;
        this->unk_144 = gSaveContext.time;
    }
    func_80A6BF90((Actor *) this, globalCtx);
}

void func_80A6CECC(EnFall *arg0) {
    Vec3f *sp24;
    Vec3f *sp20;
    Vec3f *temp_a0;
    Vec3f *temp_a1;
    f32 temp_f6;
    s32 temp_v0;

    temp_v0 = arg0->actor.child;
    arg0->actor.draw = func_80A6E37C;
    if (temp_v0 != 0) {
        Math_Vec3f_Copy(arg0 + 0x24, temp_v0 + 0x3C);
    }
    temp_a0 = arg0 + 0x24;
    temp_a1 = arg0 + 8;
    sp20 = temp_a1;
    sp24 = temp_a0;
    arg0->actor.world.rot.y = Math_Vec3f_Yaw(temp_a0, temp_a1);
    arg0->actor.world.rot.x = Math_Vec3f_Pitch(temp_a0, temp_a1);
    temp_f6 = Math_Vec3f_DistXYZ(temp_a0, temp_a1) / 82.0f;
    arg0->actor.shape.rot.x = arg0->actor.world.rot.x;
    arg0->actor.shape.rot.y = arg0->actor.world.rot.y;
    arg0->actor.speedXZ = temp_f6;
}

void func_80A6CF60(EnFall *this, GlobalContext *globalCtx) {

}

void func_80A6CF70(EnFall *this, GlobalContext *globalCtx) {
    ActorContext *sp44;
    ActorContext *temp_a0;
    u8 temp_t4;

    if ((func_800EE29C(globalCtx, 0x205U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x205U)]->unk0 == 2) && (this->actor.draw == 0)) {
        func_80A6CECC(this);
    }
    if (this->actor.draw != 0) {
        if (Math_Vec3f_StepTo((Vec3f *) &this->actor.world, (Vec3f *) &this->actor.home, this->actor.speedXZ) <= 0.0f) {
            Audio_PlayActorSound2((Actor *) this, 0x2962U);
            temp_a0 = &globalCtx->actorCtx;
            temp_t4 = gSaveContext.weekEventReg[74] | 0x80;
            gSaveContext.weekEventReg[74] = temp_t4;
            gSaveContext.weekEventReg[74] = temp_t4 | 0x20;
            sp44 = temp_a0;
            Actor_SpawnAsChild(temp_a0, (Actor *) this, globalCtx, 1, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, -2);
            Actor_Spawn(temp_a0, globalCtx, 0xA2, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s16) 1);
            this->actor.draw = NULL;
            this->actionFunc = func_80A6CF60;
            return;
        }
        func_800B9010((Actor *) this, 0x2186U);
        /* Duplicate return node #8. Try simplifying control flow for better match */
    }
}

void EnFall_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnFall *this = (EnFall *) thisx;
    this->actionFunc(this, globalCtx);
}

void func_80A6D100(f32 arg0) {
    s8 sp28;
    s8 sp27;
    s8 sp26;
    s8 sp25;
    u8 sp24;
    u8 *temp_a0;
    u8 *temp_a1;
    void *temp_v0;
    void *temp_v1;
    f32 phi_f12;
    u8 *phi_a0;
    void *phi_v1;

    temp_v0 = Lib_SegmentedToVirtual(&D_060004C0);
    phi_f12 = arg0;
    if (arg0 > 1.0f) {
        phi_f12 = 1.0f;
    }
    temp_a1 = &sp24;
    sp24 = 0;
    sp25 = (s8) (s32) (255.0f * phi_f12);
    sp26 = (s8) (s32) (155.0f * phi_f12);
    sp27 = (s8) (s32) (104.0f * phi_f12);
    sp28 = (s8) (s32) (54.0f * phi_f12);
    temp_v0->unk_F = (u8) temp_a1[D_80A6E4B4];
    phi_a0 = D_80A6E4B5;
    phi_v1 = temp_v0 + 0x10;
    do {
        temp_a0 = phi_a0 + 4;
        temp_v1 = phi_v1 + 0x40;
        temp_v1->unk_-31 = (u8) temp_a1[*phi_a0];
        temp_v1->unk_-21 = (u8) temp_a1[temp_a0->unk_-3];
        temp_v1->unk_-11 = (u8) temp_a1[temp_a0->unk_-2];
        temp_v1->unk_-1 = (u8) temp_a1[temp_a0->unk_-1];
        phi_a0 = temp_a0;
        phi_v1 = temp_v1;
    } while (temp_a0 != &D_80A6E585);
}

void func_80A6D220(Actor *thisx, GlobalContext *globalCtx) {
    GlobalContext *temp_a0;
    s32 temp_t6;
    s32 temp_t8;
    s32 temp_v0;
    s32 temp_v0_2;
    u16 temp_v1;
    s32 phi_v0;
    s32 phi_v0_2;
    s32 phi_v0_3;
    s32 phi_v0_4;

    temp_a0 = globalCtx;
    if ((globalCtx->sceneNum == 0x2D) && (gSaveContext.sceneSetupIndex == 0) && (globalCtx->csCtx.unk_12 == 2)) {
        globalCtx->skyboxCtx.rotY -= 0.05f;
    }
    globalCtx = globalCtx;
    if (func_800EE29C(temp_a0, 0x1C2U) != 0) {
        thisx->draw = func_80A6DD3C;
        if ((thisx->unk_154 & 1) != 0) {
            thisx[1].home.pos.y += 0.01f;
            if (thisx[1].home.pos.y > 1.0f) {
                thisx[1].home.pos.y = 1.0f;
            }
        }
        func_800EDF24(thisx, globalCtx, func_800EE200(globalCtx, 0x1C2U));
        temp_v1 = globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x1C2U)]->unk0;
        if (temp_v1 != 2) {
            if (temp_v1 != 3) {
                if (temp_v1 != 4) {
                    if (temp_v1 != 5) {
                        thisx->draw = NULL;
                        thisx->unk_158 = 0;
                    }
                } else {
                    thisx->unk_154 = (u16) (thisx->unk_154 | 1);
                }
            } else {
                temp_v0 = thisx->unk_158;
                temp_t8 = temp_v0 - 2;
                phi_v0 = temp_v0;
                if (temp_v0 > 0) {
                    thisx->unk_158 = temp_t8;
                    phi_v0 = temp_t8;
                }
                phi_v0_2 = phi_v0;
                if (phi_v0 < 0) {
                    thisx->unk_158 = 0;
                    phi_v0_2 = 0;
                }
                func_80A6D100((f32) phi_v0_2 * 0.01f);
            }
        } else {
            temp_v0_2 = thisx->unk_158;
            temp_t6 = temp_v0_2 + 4;
            phi_v0_3 = temp_v0_2;
            if (temp_v0_2 < 0x64) {
                thisx->unk_158 = temp_t6;
                phi_v0_3 = temp_t6;
            }
            phi_v0_4 = phi_v0_3;
            if (phi_v0_3 >= 0x65) {
                thisx->unk_158 = 0x64;
                phi_v0_4 = 0x64;
            }
            func_80A6D100((f32) phi_v0_4 * 0.01f);
        }
    } else {
        thisx->draw = NULL;
    }
    if ((func_800EE29C(globalCtx, 0x1C2U) != 0) && (thisx->unk_158 > 0)) {
        func_8019F128(0x214FU);
    }
    Actor_SetScale(thisx, thisx[1].home.pos.x * 1.74f);
}

void func_80A6D444(Actor *arg0) {
    s8 *temp_v1;
    s8 *phi_v1;

    phi_v1 = D_80A6E990;
    do {
        if ((s32) phi_v1->unk_0 < 3) {
            phi_v1->unk_4 = (f32) (phi_v1->unk_4 + phi_v1->unk_10);
            phi_v1->unk_8 = (f32) (phi_v1->unk_8 + phi_v1->unk_14);
            phi_v1->unk_C = (f32) (phi_v1->unk_C + phi_v1->unk_18);
            phi_v1->unk_1C = (s16) (phi_v1->unk_1C + 0x64);
            phi_v1->unk_1E = (s16) (phi_v1->unk_1E + 0xC8);
            phi_v1->unk_20 = (s16) (phi_v1->unk_20 + 0x12C);
            if ((arg0->world.pos.y + 3000.0f) < phi_v1->unk_8) {
                phi_v1->unk_0 = 3;
                arg0->unk_158 = (s32) (arg0->unk_158 - 1);
            }
        }
        temp_v1 = phi_v1 + 0x24;
        phi_v1 = temp_v1;
    } while (temp_v1 != &D_80A6F098);
}

? func_80A6D504(Actor *arg0) {
    s16 sp2E;
    f32 sp24;
    f32 sp20;
    f32 temp_f16;
    f32 temp_f18;
    u8 *temp_s0;
    u8 *phi_s0;

    phi_s0 = D_80A6E990;
loop_1:
    if ((s32) phi_s0->unk_0 >= 3) {
        phi_s0->unk_0 = (u8) (s32) Rand_ZeroFloat(3.0f);
        phi_s0->unk_4 = (f32) arg0->world.pos.x;
        phi_s0->unk_8 = (f32) arg0->world.pos.y;
        phi_s0->unk_C = (f32) arg0->world.pos.z;
        sp2E = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
        sp20 = Rand_ZeroFloat(1.0f);
        temp_f16 = (1.0f - (Rand_ZeroFloat(1.0f) * sp20)) * 3000.0f;
        sp24 = temp_f16;
        phi_s0->unk_4 = (f32) (phi_s0->unk_4 + (Math_SinS(sp2E) * sp24));
        temp_f18 = Math_CosS(sp2E) * temp_f16;
        phi_s0->unk_10 = 0.0f;
        phi_s0->unk_18 = 0.0f;
        phi_s0->unk_14 = 80.0f;
        phi_s0->unk_C = (f32) (phi_s0->unk_C + temp_f18);
        phi_s0->unk_1C = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
        phi_s0->unk_1E = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
        phi_s0->unk_20 = (s16) (s32) randPlusMinusPoint5Scaled(65536.0f);
        arg0->unk_158 = (s32) (arg0->unk_158 + 1);
        return 1;
    }
    temp_s0 = phi_s0 + 0x24;
    phi_s0 = temp_s0;
    if (temp_s0 == &D_80A6F098) {
        return 0;
    }
    goto loop_1;
}

void func_80A6D698(Actor *thisx, GlobalContext *globalCtx) {
    if (func_800EE29C(globalCtx, 0x1C3U) != 0) {
        if ((func_800EE29C(globalCtx, 0x1C3U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x1C3U)]->unk0 == 2)) {
            func_80A6D444(thisx);
            func_80A6D504(thisx);
            return;
        }
        if (thisx->unk_158 != 0) {
            func_80A6C1DC((EnFall *) thisx);
            return;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
    if (thisx->home.rot.x != 0) {
        func_80A6D444(thisx);
        func_80A6D504(thisx);
    }
}

void func_80A6D75C(Actor *thisx, GlobalContext *globalCtx) {
    f32 temp_f0;
    s16 temp_v0;

    if ((func_800EE29C(globalCtx, 0x1C2U) != 0) && (globalCtx->csCtx.npcActions[func_800EE200(globalCtx, 0x1C2U)]->unk0 == 5)) {
        if ((thisx->unk_154 & 2) == 0) {
            Audio_PlayActorSound2(thisx, 0x1842U);
        }
        thisx->unk_154 = (u16) (thisx->unk_154 | 2);
    }
    if ((thisx->unk_154 & 2) != 0) {
        thisx[1].home.pos.y += 0.033333335f;
        if (thisx[1].home.pos.y > 1.0f) {
            thisx[1].home.pos.y = 1.0f;
        }
        temp_f0 = thisx->scale.x;
        if (temp_f0 < 18.0f) {
            thisx->scale.x = temp_f0 + 0.2f;
        }
        thisx->scale.z = thisx->scale.x;
        temp_v0 = thisx[1].home.rot.z;
        thisx->scale.y = Math_SinS(thisx[1].home.rot.z) * 5.0f;
        if ((s32) temp_v0 < 0x4000) {
            thisx[1].home.rot.z = temp_v0 + 0x147;
        }
    }
}

void func_80A6D88C(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_v1;

    temp_a0 = globalCtx->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = temp_v0;
    sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    SysMatrix_MultiplyVector3fByState(&D_80A6E588, (Vec3f *) &this->focus);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_v1 = (s32) ((this[1].home.pos.y * 200.0f) + 40.0f) & 0xFF;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (temp_v1 << 0x18) | (temp_v1 << 0x10) | (temp_v1 << 8) | 0xFF;
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = (u32) &D_060077F0;
    temp_v0_3->words.w0 = 0xDE000000;
}

void func_80A6D98C(Actor *this, GlobalContext *globalCtx) {
    GraphicsContext *sp24;
    Gfx *sp1C;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    GraphicsContext *temp_a0;
    s32 temp_v1;

    temp_a0 = globalCtx->state.gfxCtx;
    sp24 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp24 = sp24;
    sp1C = temp_v0;
    sp1C->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp24->polyOpa.p;
    temp_v1 = (s32) ((this[1].home.pos.y * 200.0f) + 40.0f) & 0xFF;
    sp24->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (temp_v1 << 0x18) | (temp_v1 << 0x10) | (temp_v1 << 8) | 0xFF;
    temp_v0_2->words.w0 = 0xFA000080;
    temp_v0_3 = sp24->polyOpa.p;
    sp24->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = (u32) &D_06002970;
    temp_v0_3->words.w0 = 0xDE000000;
}

void func_80A6DA7C(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp30;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    s32 temp_v1;

    temp_a0 = arg1->state.gfxCtx;
    temp_s0 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp30 = temp_v0;
    sp30->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    temp_s0->polyOpa.p = Gfx_SetFog(temp_s0->polyOpa.p, 0x14, 0x19, 0x1E, 0, 0x3E7, 0x3200);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xE200001C;
    temp_v0_2->words.w1 = 0xC192078;
    temp_v0_3 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = 0x200405;
    temp_v0_3->words.w0 = 0xD9000000;
    temp_v0_4 = temp_s0->polyOpa.p;
    temp_v1 = (s32) ((arg0[1].home.pos.y * 200.0f) + 40.0f) & 0xFF;
    temp_s0->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (temp_v1 << 0x18) | (temp_v1 << 0x10) | (temp_v1 << 8) | 0xFF;
    temp_v0_4->words.w0 = 0xFA000080;
    temp_v0_5 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w1 = (u32) &D_060010E0;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = 0x220405;
    temp_v0_6->words.w0 = 0xD9000000;
    temp_v0_7 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_7[1];
    temp_v0_7->words.w1 = (u32) &D_06001158;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_s0->polyOpa.p = func_801660B8(arg1, temp_s0->polyOpa.p);
}

void func_80A6DC20(Actor *this, GlobalContext *globalCtx) {
    func_80A6DA7C();
}

void func_80A6DC40(Actor *this, GlobalContext *globalCtx) {
    f32 sp2C;
    f32 sp24;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f16;
    f32 temp_f18;
    f32 temp_f2;

    temp_f0 = Actor_DistanceToPoint(this, &globalCtx->view.eye);
    sp2C = temp_f0;
    if (temp_f0 > 9000.0f) {
        temp_f2 = globalCtx->view.eye.x;
        temp_f0_2 = 9000.0f / sp2C;
        temp_f16 = globalCtx->view.eye.y;
        temp_f18 = globalCtx->view.eye.z;
        temp_f10 = (-(temp_f18 - this->world.pos.z) * temp_f0_2) + temp_f18;
        sp24 = temp_f10;
        SysMatrix_InsertTranslation((-(temp_f2 - this->world.pos.x) * temp_f0_2) + temp_f2, (-(temp_f16 - this->world.pos.y) * temp_f0_2) + temp_f16, temp_f10, 0);
        Matrix_Scale(this->scale.x, this->scale.y, this->scale.z, 1);
        Matrix_RotateY(this->shape.rot.y, 1U);
        SysMatrix_InsertXRotation_s(this->shape.rot.x, 1);
        SysMatrix_InsertZRotation_s(this->shape.rot.z, 1);
    }
    func_80A6DA7C(this, globalCtx);
}

void func_80A6DD3C(Actor *this, GlobalContext *globalCtx) {
    u32 sp74;
    Gfx *sp68;
    Gfx *sp5C;
    Gfx *sp58;
    s32 sp48;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    GraphicsContext *temp_s0;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f0_3;
    f32 temp_f12;
    f32 temp_f14;
    f32 temp_f2;
    f32 temp_f2_2;
    s32 temp_a0;
    s32 temp_a3;
    s32 temp_t0;

    sp74 = globalCtx->gameplayFrames;
    temp_s0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp68 = temp_v0;
    sp68->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    func_8012C2DC(globalCtx->state.gfxCtx);
    temp_f0 = this[1].home.pos.y;
    this[1].home.rot.z += (s32) (4.0f + (temp_f0 * 12.0f));
    this[1].home.unk_12 += (s32) (2.0f + (temp_f0 * 6.0f));
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xFA000080;
    temp_f0_2 = this[1].home.pos.y;
    temp_f2 = 1.0f - temp_f0_2;
    temp_f12 = 255.0f * temp_f0_2;
    temp_f14 = 70.0f * temp_f2;
    temp_v0_2->words.w1 = ((s32) ((temp_f2 * 160.0f) + temp_f12) << 0x18) | (((s32) (temp_f14 + temp_f12) & 0xFF) << 0x10) | (((s32) temp_f14 & 0xFF) << 8) | 0xFF;
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xFB000000;
    temp_f0_3 = this[1].home.pos.y;
    temp_f2_2 = 1.0f - temp_f0_3;
    temp_a0 = (s32) (20.0f * temp_f2_2) & 0xFF;
    temp_v0_3->words.w1 = ((s32) ((temp_f2_2 * 50.0f) + (200.0f * temp_f0_3)) << 0x18) | (temp_a0 << 0x10) | (temp_a0 << 8) | 0xFF;
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDB060024;
    temp_t0 = -(s32) sp74;
    sp48 = temp_t0;
    sp5C = temp_v0_4;
    sp5C->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, sp74, (u32) -(s32) this[1].home.unk_12, 0x40, 0x40, 1, (u32) temp_t0, (u32) -(s32) this[1].home.rot.z, 0x40, 0x40);
    temp_v0_5 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_5[1];
    temp_v0_5->words.w0 = 0xDB060028;
    temp_a3 = -(s32) this[1].home.rot.z;
    sp58 = temp_v0_5;
    sp58->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, sp74 * 2, (u32) temp_a3, 0x40, 0x40, 1, (s32) sp74 * -2, (u32) temp_a3, 0x40, 0x40);
    temp_v0_6 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = 0x80;
    temp_v0_6->words.w0 = 0xE3001801;
    temp_v0_7 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_7[1];
    temp_v0_7->words.w1 = 0x20;
    temp_v0_7->words.w0 = 0xE3001A01;
    temp_v0_8 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_8[1];
    temp_v0_8->words.w0 = 0xDE000000;
    temp_v0_8->words.w1 = (u32) &D_060011D0;
}

void func_80A6E07C(Actor *this, GlobalContext *globalCtx) {
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s2;
    f32 temp_f20;
    u8 *temp_s0;
    u8 *phi_s0;

    temp_f20 = this[1].home.pos.x * 0.06f;
    temp_a0 = globalCtx->state.gfxCtx;
    temp_s2 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = &temp_v0[1];
    temp_v0->words.w1 = (u32) &D_06000198;
    temp_v0->words.w0 = 0xDE000000;
    temp_v0_2 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = -1;
    temp_v0_2->words.w0 = 0xFA000000;
    temp_v0_3 = temp_s2->polyOpa.p;
    temp_s2->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = 0xFF;
    temp_v0_3->words.w0 = 0xFB000000;
    phi_s0 = D_80A6E990;
    do {
        if ((s32) phi_s0->unk_0 < 3) {
            SysMatrix_InsertTranslation(phi_s0->unk_4, phi_s0->unk_8, phi_s0->unk_C, 0);
            Matrix_Scale(temp_f20, temp_f20, temp_f20, 1);
            SysMatrix_InsertRotation(phi_s0->unk_1C, phi_s0->unk_1E, phi_s0->unk_20, 1);
            temp_v0_4 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v0_4[1];
            temp_v0_4->words.w0 = 0xDA380003;
            temp_v0_4->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
            temp_v0_5 = temp_s2->polyOpa.p;
            temp_s2->polyOpa.p = &temp_v0_5[1];
            temp_v0_5->words.w0 = 0xDE000000;
            temp_v0_5->words.w1 = *(&D_80A6E594 + (phi_s0->unk_0 * 4));
        }
        temp_s0 = phi_s0 + 0x24;
        phi_s0 = temp_s0;
    } while (temp_s0 != &D_80A6F098);
}

void func_80A6E214(Actor *this, GlobalContext *globalCtx) {
    Gfx *sp24;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    GraphicsContext *temp_s0;
    f32 temp_f0;

    temp_f0 = this[1].home.pos.y;
    if (!(temp_f0 <= 0.0f)) {
        if (temp_f0 > 1.0f) {
            this[1].home.pos.y = 1.0f;
        }
        temp_s0 = globalCtx->state.gfxCtx;
        this = this;
        AnimatedMat_DrawXlu(globalCtx, Lib_SegmentedToVirtual(&D_06004E38));
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0[1];
        temp_v0->words.w0 = 0xDA380003;
        sp24 = temp_v0;
        sp24->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        func_8012C2DC(globalCtx->state.gfxCtx);
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w1 = 0x80;
        temp_v0_2->words.w0 = 0xE3001801;
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w1 = 0x20;
        temp_v0_3->words.w0 = 0xE3001A01;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w0 = 0xFA000080;
        temp_v0_4->words.w1 = ((s32) (this[1].home.pos.y * 255.0f) & 0xFF) | ~0xFF;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w1 = (u32) &D_06003C30;
        temp_v0_5->words.w0 = 0xDE000000;
    }
}

void func_80A6E37C(Actor *arg0, GlobalContext *arg1) {
    Gfx *sp28;
    Gfx *sp20;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    GraphicsContext *temp_s0;

    temp_s0 = arg1->state.gfxCtx;
    AnimatedMat_Draw(arg1, Lib_SegmentedToVirtual(&D_06001220));
    temp_v0 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = temp_v0 + 8;
    temp_v0->words.w0 = 0xDA380003;
    sp28 = temp_v0;
    sp28->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    func_8012C28C(arg1->state.gfxCtx);
    temp_v0_2 = temp_s0->polyOpa.p;
    temp_s0->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_2->words.w1 = (u32) &D_06000400;
    Matrix_Scale(3.0f, 3.0f, 6.0f, 1);
    temp_v0_3 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_3[1];
    temp_v0_3->words.w0 = 0xDA380003;
    sp20 = temp_v0_3;
    sp20->words.w1 = Matrix_NewMtx(arg1->state.gfxCtx);
    func_8012C2DC(arg1->state.gfxCtx);
    temp_v0_4 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_4[1];
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_4->words.w1 = (u32) &D_060004C8;
}
