typedef struct EnKujiya {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnKujiya *, GlobalContext *);
    /* 0x148 */ s16 unk_148;                        /* inferred */
    /* 0x14A */ s16 unk_14A;                        /* inferred */
} EnKujiya;                                         /* size = 0x14C */

struct _mips2c_stack_EnKujiya_Destroy {};           /* size 0x0 */

struct _mips2c_stack_EnKujiya_Draw {
    /* 0x00 */ char pad_0[0x18];
    /* 0x18 */ Gfx *sp18;                           /* inferred */
    /* 0x1C */ char pad_1C[0x4];
    /* 0x20 */ GraphicsContext *sp20;               /* inferred */
    /* 0x24 */ char pad_24[0x4];
};                                                  /* size = 0x28 */

struct _mips2c_stack_EnKujiya_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnKujiya_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB09A8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB09BC {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB0B28 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB0BF8 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB0E44 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB0E58 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB0F24 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB0F38 {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_func_80BB0F94 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB0FA8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80BB0FF8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB1088 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB10F8 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB1168 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB1180 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

struct _mips2c_stack_func_80BB1250 {};              /* size 0x0 */

struct _mips2c_stack_func_80BB1268 {
    /* 0x00 */ char pad_0[0x28];
};                                                  /* size = 0x28 */

void func_80BB09A8(EnKujiya *arg0);                 /* static */
void func_80BB0B28(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BB0BF8(Actor *arg0, GlobalContext *arg1); /* static */
void func_80BB0E44(EnKujiya *arg0);                 /* static */
void func_80BB0F24(Actor *arg0);                    /* static */
void func_80BB0F94(EnKujiya *arg0);                 /* static */
s32 func_80BB0FF8(EnKujiya *);                      /* static */
void func_80BB1088();                               /* static */
void func_80BB10F8();                               /* static */
void func_80BB1168(EnKujiya *arg0);                 /* static */
void func_80BB1250(Actor *arg0);                    /* static */
extern ? D_06002A80;
extern ? D_06003030;
extern ? D_06003248;
extern ? D_06003358;
extern ? D_060034A8;
extern ? D_060035B8;
extern ? D_060036B0;
extern ? D_060037C0;
extern ? D_06003C80;
extern ? D_06003D58;
extern void D_06006198;

void EnKujiya_Init(Actor *thisx, GlobalContext *globalCtx) {
    u16 temp_v0;
    EnKujiya *this = (EnKujiya *) thisx;

    Actor_SetScale((Actor *) this, 0.1f);
    this->actor.focus.pos.y = this->actor.world.pos.y;
    this->actor.focus.pos.x = this->actor.world.pos.x;
    this->actor.flags &= -2;
    this->actor.targetMode = 6;
    this->actor.focus.pos.z = this->actor.world.pos.z;
    this->actor.focus.pos.y += 30.0f;
    if ((func_80BB0FF8(this) != 0) && (temp_v0 = gSaveContext.time, (((s32) temp_v0 < 0x4000) == 0)) && ((s32) temp_v0 < 0xC000)) {
        this->actor.shape.rot.y = 0;
    } else {
        this->actor.shape.rot.y = 0x7555;
    }
    func_80BB09A8(this);
}

void EnKujiya_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnKujiya *this = (EnKujiya *) thisx;

}

void func_80BB09A8(EnKujiya *arg0) {
    arg0->actionFunc = func_80BB09BC;
}

void func_80BB09BC(EnKujiya *this, GlobalContext *globalCtx) {
    GlobalContext *temp_a1;
    u16 temp_v0;

    temp_a1 = globalCtx;
    globalCtx = globalCtx;
    if (func_800B84D0((Actor *) this, temp_a1) != 0) {
        temp_v0 = gSaveContext.time;
        if (((s32) temp_v0 >= 0x4000) && ((s32) temp_v0 < 0xC000)) {
            globalCtx = globalCtx;
            if (func_80BB0FF8() != 0) {
                func_801518B0(globalCtx, 0x2B61U, (Actor *) this);
                this->unk_14A = 0x2B61;
            } else {
                func_801518B0(globalCtx, 0x2B5CU, (Actor *) this);
                this->unk_14A = 0x2B5C;
            }
        } else {
            globalCtx = globalCtx;
            if (func_80BB0FF8() != 0) {
                func_801518B0(globalCtx, 0x2B64U, (Actor *) this);
                this->unk_14A = 0x2B64;
            } else {
                func_801518B0(globalCtx, 0x2B63U, (Actor *) this);
                this->unk_14A = 0x2B63;
            }
        }
        func_80BB0E44(this);
        return;
    }
    if (((s32) gSaveContext.time >= 0xC000) && (globalCtx = globalCtx, (func_80BB0FF8() != 0)) && (this->actor.shape.rot.y == 0)) {
        func_80BB1168(this);
        return;
    }
    if (this->actor.xzDistToPlayer < 100.0f) {
        func_800B8614((Actor *) this, globalCtx, 100.0f);
    }
}

void func_80BB0B28(Actor *arg0, GlobalContext *arg1) {
    if (func_80147624(arg1) != 0) {
        if (arg1->msgCtx.choiceIndex == 0) {
            if ((s32) gSaveContext.rupees < 0xA) {
                play_sound(0x4806U);
                func_801518B0(arg1, 0x2B62U, arg0);
                arg0->unk_14A = 0x2B62;
                return;
            }
            func_8019F208();
            func_801159EC(-0xA);
            func_801518B0(arg1, 0x2B5FU, arg0);
            arg0->unk_14A = 0x2B5F;
            return;
        }
        func_8019F230();
        func_801518B0(arg1, 0x2B5EU, arg0);
        arg0->unk_14A = 0x2B5E;
        /* Duplicate return node #6. Try simplifying control flow for better match */
    }
}

void func_80BB0BF8(Actor *arg0, GlobalContext *arg1) {
    GlobalContext *temp_a0;
    GlobalContext *temp_a0_2;
    s16 temp_t8;
    s16 temp_v0;
    s32 temp_a1;
    s32 temp_v1;

    temp_a0 = arg1;
    if ((arg0->unk_14A == 0x2B65) && (temp_v0 = arg0->unk_148, (temp_v0 != 0))) {
        arg0->unk_148 = (s16) (temp_v0 - 1);
        return;
    }
    arg1 = arg1;
    if (func_80147624(temp_a0) != 0) {
        temp_t8 = arg0->unk_14A;
        switch (temp_t8) {
        case 11100:
            func_801518B0(arg1, 0x2B5DU, arg0);
            arg0->unk_14A = 0x2B5D;
            return;
        case 11104:
            arg1 = arg1;
            func_80BB1088();
            func_801477B4(arg1);
            func_80BB1250(arg0);
            return;
        case 11108:
            arg1 = arg1;
            func_80BB10F8();
            arg0->unk_148 = 0x14;
            func_801518B0(arg1, 0x2B65U, arg0);
            arg0->unk_14A = 0x2B65;
            return;
        case 11109:
            temp_v1 = gSaveContext.day;
            temp_a1 = gSaveContext.roomInf[127][5] & 0xFFFF;
            if (((&gSaveContext + ((temp_v1 % 5) * 3))->unk_FE9 == ((u32) (temp_a1 & 0xF00) >> 8)) && ((&gSaveContext + ((temp_v1 % 5) * 3))->unk_FEA == ((u32) (temp_a1 & 0xF0) >> 4)) && ((&gSaveContext + ((temp_v1 % 5) * 3))->unk_FEB == (temp_a1 & 0xF))) {
                func_801518B0(arg1, 0x2B66U, arg0);
                arg0->unk_14A = 0x2B66;
                return;
            }
            func_801518B0(arg1, 0x2B67U, arg0);
            arg0->unk_14A = 0x2B67;
            return;
        case 11110:
            temp_a0_2 = arg1;
            arg1 = arg1;
            func_801477B4(temp_a0_2);
            func_80BB0F24(arg0);
            func_80BB0F38((EnKujiya *) arg0, arg1);
            /* Duplicate return node #15. Try simplifying control flow for better match */
            return;
        }
    } else {
    default:
    }
}

void func_80BB0E44(EnKujiya *arg0) {
    arg0->actionFunc = func_80BB0E58;
}

void func_80BB0E58(EnKujiya *this, GlobalContext *globalCtx) {
    u32 temp_v0;

    temp_v0 = func_80152498(&globalCtx->msgCtx);
    switch (temp_v0) {
    case 4:
        func_80BB0B28((Actor *) this, globalCtx);
        return;
    case 5:
        func_80BB0BF8((Actor *) this, globalCtx);
        return;
    case 6:
        if (func_80147624(globalCtx) != 0) {
            func_80BB09A8(this);
            return;
        }
    default:
        return;
    case 17:
        if (func_80147624(globalCtx) != 0) {
            func_8012F278(globalCtx);
            func_801518B0(globalCtx, 0x2B60U, (Actor *) this);
            this->unk_14A = 0x2B60;
        }
        /* Duplicate return node #8. Try simplifying control flow for better match */
        return;
    }
}

void func_80BB0F24(Actor *arg0) {
    arg0->unk_144 = func_80BB0F38;
}

void func_80BB0F38(EnKujiya *this, GlobalContext *globalCtx) {
    if (Actor_HasParent((Actor *) this, globalCtx) != 0) {
        func_80BB0F94(this);
        return;
    }
    func_800B8A1C((Actor *) this, globalCtx, 5, 500.0f, 100.0f);
}

void func_80BB0F94(EnKujiya *arg0) {
    arg0->actionFunc = func_80BB0FA8;
}

void func_80BB0FA8(EnKujiya *this, GlobalContext *globalCtx) {
    if ((func_80152498(&globalCtx->msgCtx) == 6) && (func_80147624(globalCtx) != 0)) {
        func_80BB09A8(this);
    }
}

s32 func_80BB0FF8(void) {
    s32 temp_hi;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi != 3) {
                /* Duplicate return node #10. Try simplifying control flow for better match */
                return 0;
            }
            if ((gSaveContext.weekEventReg[33] & 0x40) != 0) {
                return 1;
            }
            /* Duplicate return node #10. Try simplifying control flow for better match */
            return 0;
        }
        if ((gSaveContext.weekEventReg[33] & 0x20) != 0) {
            return 1;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
        return 0;
    }
    if ((gSaveContext.weekEventReg[33] & 0x10) != 0) {
        return 1;
    }
    return 0;
}

void func_80BB1088(void) {
    s32 temp_hi;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi != 3) {
                return;
            }
            gSaveContext.weekEventReg[33] |= 0x40;
            return;
        }
        gSaveContext.weekEventReg[33] |= 0x20;
        return;
    }
    gSaveContext.weekEventReg[33] |= 0x10;
}

void func_80BB10F8(void) {
    s32 temp_hi;

    temp_hi = (s32) gSaveContext.day % 5;
    if (temp_hi != 1) {
        if (temp_hi != 2) {
            if (temp_hi != 3) {
                return;
            }
            gSaveContext.weekEventReg[33] &= 0xBF;
            return;
        }
        gSaveContext.weekEventReg[33] &= 0xDF;
        return;
    }
    gSaveContext.weekEventReg[33] &= 0xEF;
}

void func_80BB1168(EnKujiya *arg0) {
    arg0->unk_148 = 0;
    arg0->actionFunc = func_80BB1180;
}

void func_80BB1180(EnKujiya *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s8 temp_a1;
    s8 temp_a1_2;

    temp_a1 = this->actor.cutscene;
    if (temp_a1 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a1) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        } else {
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        }
    }
    if (Math_SmoothStepToS(&this->actor.shape.rot.y, 0x7555, 0xA, 0x16C, (s16) 0x16C) == 0) {
        temp_v0 = this->unk_148;
        if ((s32) temp_v0 >= 0x15) {
            temp_a1_2 = this->actor.cutscene;
            if (ActorCutscene_GetCurrentIndex() == temp_a1_2) {
                ActorCutscene_Stop((s16) temp_a1_2);
            }
            func_80BB09A8(this);
            return;
        }
        this->unk_148 = temp_v0 + 1;
        return;
    }
    func_800B9010((Actor *) this, 0x2085U);
}

void func_80BB1250(Actor *arg0) {
    arg0->unk_148 = 0;
    arg0->unk_144 = func_80BB1268;
}

void func_80BB1268(EnKujiya *this, GlobalContext *globalCtx) {
    s16 temp_v0;
    s8 temp_a1;
    s8 temp_a1_2;

    temp_a1 = this->actor.cutscene;
    if (temp_a1 != -1) {
        if (ActorCutscene_GetCanPlayNext((s16) temp_a1) != 0) {
            ActorCutscene_StartAndSetUnkLinkFields((s16) this->actor.cutscene, (Actor *) this);
        } else {
            ActorCutscene_SetIntentToPlay((s16) this->actor.cutscene);
        }
    }
    if (Math_SmoothStepToS(&this->actor.shape.rot.y, 0, 0xA, 0x16C, (s16) 0x16C) == 0) {
        temp_v0 = this->unk_148;
        if ((s32) temp_v0 >= 0x15) {
            temp_a1_2 = this->actor.cutscene;
            if (ActorCutscene_GetCurrentIndex() == temp_a1_2) {
                ActorCutscene_Stop((s16) temp_a1_2);
            }
            func_80BB09A8(this);
            return;
        }
        this->unk_148 = temp_v0 + 1;
        return;
    }
    func_800B9010((Actor *) this, 0x2085U);
}

void EnKujiya_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnKujiya *this = (EnKujiya *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnKujiya_Draw(Actor *thisx, GlobalContext *globalCtx) {
    GraphicsContext *sp20;
    Gfx *sp18;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_a0;
    EnKujiya *this = (EnKujiya *) thisx;

    AnimatedMat_Draw(globalCtx, Lib_SegmentedToVirtual(&D_06006198));
    temp_a0 = globalCtx->state.gfxCtx;
    sp20 = temp_a0;
    func_8012C28C(temp_a0);
    temp_v0 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0[1];
    temp_v0->words.w0 = 0xDA380003;
    sp20 = sp20;
    sp18 = temp_v0;
    sp18->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
    temp_v0_2 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_2[1];
    temp_v0_2->words.w1 = (u32) &D_06002A80;
    temp_v0_2->words.w0 = 0xDE000000;
    temp_v0_3 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_3[1];
    temp_v0_3->words.w1 = (u32) &D_06003030;
    temp_v0_3->words.w0 = 0xDE000000;
    temp_v0_4 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_4[1];
    temp_v0_4->words.w1 = (u32) &D_06003248;
    temp_v0_4->words.w0 = 0xDE000000;
    temp_v0_5 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_5[1];
    temp_v0_5->words.w1 = (u32) &D_06003358;
    temp_v0_5->words.w0 = 0xDE000000;
    temp_v0_6 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_6[1];
    temp_v0_6->words.w1 = (u32) &D_060034A8;
    temp_v0_6->words.w0 = 0xDE000000;
    temp_v0_7 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_7[1];
    temp_v0_7->words.w1 = (u32) &D_060035B8;
    temp_v0_7->words.w0 = 0xDE000000;
    temp_v0_8 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_8[1];
    temp_v0_8->words.w1 = (u32) &D_060036B0;
    temp_v0_8->words.w0 = 0xDE000000;
    temp_v0_9 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_9[1];
    temp_v0_9->words.w1 = (u32) &D_060037C0;
    temp_v0_9->words.w0 = 0xDE000000;
    temp_v0_10 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_10[1];
    temp_v0_10->words.w1 = (u32) &D_06003C80;
    temp_v0_10->words.w0 = 0xDE000000;
    temp_v0_11 = sp20->polyOpa.p;
    sp20->polyOpa.p = &temp_v0_11[1];
    temp_v0_11->words.w1 = (u32) &D_06003D58;
    temp_v0_11->words.w0 = 0xDE000000;
}
