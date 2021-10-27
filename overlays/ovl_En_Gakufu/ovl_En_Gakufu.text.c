typedef struct EnGakufu {
    /* 0x000 */ Actor actor;
    /* 0x144 */ s32 unk_144;                        /* inferred */
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ char pad_149[0x7];                  /* maybe part of unk_148[8]? */
    /* 0x150 */ void (*actionFunc)(EnGakufu *, GlobalContext *);
} EnGakufu;                                         /* size = 0x154 */

struct _mips2c_stack_EnGakufu_Destroy {};           /* size 0x0 */

struct _mips2c_stack_EnGakufu_Draw {
    /* 0x00 */ char pad_0[0x40];
    /* 0x40 */ ? *sp40;                             /* inferred */
    /* 0x44 */ char pad_44[0x48];                   /* maybe part of sp40[19]? */
    /* 0x8C */ EnGakufu *sp8C;                      /* inferred */
    /* 0x90 */ char pad_90[0x8];
};                                                  /* size = 0x98 */

struct _mips2c_stack_EnGakufu_Init {
    /* 0x00 */ char pad_0[0x20];
};                                                  /* size = 0x20 */

struct _mips2c_stack_EnGakufu_Update {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFC960 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFCB94 {};              /* size 0x0 */

struct _mips2c_stack_func_80AFCBD4 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFCC14 {};              /* size 0x0 */

struct _mips2c_stack_func_80AFCC24 {};              /* size 0x0 */

struct _mips2c_stack_func_80AFCC58 {
    /* 0x00 */ char pad_0[0x30];
};                                                  /* size = 0x30 */

struct _mips2c_stack_func_80AFCD44 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_80AFCDC8 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

? func_8019B544(s32);                               /* extern */
? func_8019C300(?);                                 /* extern */
void *func_8019CF9C();                              /* extern */
? func_8019D26C();                                  /* extern */
void func_80AFC960(EnGakufu *arg0);                 /* static */
s32 func_80AFCC24(EnGakufu *arg0, GlobalContext *arg1); /* static */
void func_80AFCC58(EnGakufu *arg0, GlobalContext *arg1, EnGakufu *, s8); /* static */
extern ? D_801D8A48;
static Vec3f D_80AFD1D0 = {-710.0f, -123.0f, -3528.0f};
static ? D_80AFD1DC;                                /* unable to generate initializer */
static ? D_80AFD1F4;                                /* unable to generate initializer */
static ? D_80AFD204;                                /* unable to generate initializer */
static ? D_80AFD218;                                /* unable to generate initializer */
static ? D_80AFD270;                                /* unable to generate initializer */

void func_80AFC960(EnGakufu *arg0) {
    EnGakufu *temp_v1;
    s32 temp_a0;
    s32 temp_a0_2;
    s32 temp_a0_3;
    s32 temp_t0;
    s32 temp_t1;
    u8 temp_a2;
    void *temp_v0;
    void *temp_v0_2;
    void *temp_v1_2;
    void *temp_v1_3;
    void *phi_v0;
    EnGakufu *phi_v1;
    s32 phi_a0;
    void *phi_v0_2;
    void *phi_v1_2;
    s32 phi_a0_2;
    s32 phi_a0_3;
    void *phi_v1_3;
    s32 phi_a0_4;
    s32 phi_a0_5;

    func_8019D26C();
    func_8019C300(1);
    func_8019B544((1 << arg0->unk_144) | 0x80000000);
    temp_v0 = func_8019CF9C();
    temp_v0->unk_2 = 0;
    temp_v0->unk_1 = 0xFF;
    func_8019C300(0);
    temp_t1 = arg0->unk_144;
    temp_a2 = *((temp_t1 * 9) + &D_801D8A48);
    temp_t0 = temp_a2 & 3;
    phi_a0 = 0;
    phi_a0_3 = 0;
    phi_a0_5 = 0;
    if ((s32) temp_a2 > 0) {
        if (temp_t0 != 0) {
            phi_v0 = (temp_t1 * 9) + &D_801D8A48;
            phi_v1 = arg0;
            do {
                temp_a0 = phi_a0 + 1;
                temp_v1 = phi_v1 + 1;
                temp_v1->unk_147 = (u8) phi_v0->unk_1;
                phi_v0 += 1;
                phi_v1 = temp_v1;
                phi_a0 = temp_a0;
                phi_a0_3 = temp_a0;
                phi_a0_5 = temp_a0;
            } while (temp_t0 != temp_a0);
            if (temp_a0 != temp_a2) {
                goto block_5;
            }
        } else {
block_5:
            phi_v0_2 = (temp_t1 * 9) + phi_a0_5 + &D_801D8A48;
            phi_v1_2 = arg0 + phi_a0_5;
            phi_a0_2 = phi_a0_5;
            do {
                temp_a0_2 = phi_a0_2 + 4;
                temp_v1_2 = phi_v1_2 + 4;
                temp_v1_2->unk_144 = (u8) phi_v0_2->unk_1;
                temp_v0_2 = phi_v0_2 + 4;
                temp_v1_2->unk_145 = (u8) phi_v0_2->unk_2;
                temp_v1_2->unk_146 = (u8) temp_v0_2->unk_-1;
                temp_v1_2->unk_147 = (u8) temp_v0_2->unk_0;
                phi_v0_2 = temp_v0_2;
                phi_v1_2 = temp_v1_2;
                phi_a0_2 = temp_a0_2;
                phi_a0_3 = temp_a0_2;
            } while (temp_a0_2 != temp_a2);
        }
    }
    phi_v1_3 = arg0 + phi_a0_3;
    phi_a0_4 = phi_a0_3;
    if (phi_a0_3 < 8) {
        do {
            temp_a0_3 = phi_a0_4 + 1;
            temp_v1_3 = phi_v1_3 + 1;
            temp_v1_3->unk_147 = 0xFF;
            phi_v1_3 = temp_v1_3;
            phi_a0_4 = temp_a0_3;
        } while (temp_a0_3 < 8);
    }
}

void EnGakufu_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnGakufu *this = (EnGakufu *) thisx;
    this->unk_144 = 0x17;
    func_80AFC960(this);
    Actor_SetScale((Actor *) this, 1.0f);
    if ((this->actor.params & 0xF) == 1) {
        this->actor.draw = NULL;
        this->actionFunc = func_80AFCBD4;
        return;
    }
    this->actor.flags &= 0xFDFFFFFF;
    if (func_80AFCC24(this, globalCtx) != 0) {
        gSaveContext.eventInf[3] |= 2;
    } else {
        gSaveContext.eventInf[3] &= 0xFD;
    }
    this->actionFunc = func_80AFCDC8;
    gSaveContext.eventInf[3] &= 0xFB;
}

void EnGakufu_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnGakufu *this = (EnGakufu *) thisx;
    if ((this->actor.params & 0xF) != 1) {
        gSaveContext.eventInf[3] &= 0xFD;
    }
}

void func_80AFCB94(EnGakufu *this, GlobalContext *globalCtx) {
    s16 temp_v0;

    temp_v0 = this->actor.home.rot.x;
    if ((s32) temp_v0 > 0) {
        this->actor.draw = EnGakufu_Draw;
        this->actor.home.rot.x = temp_v0 - 1;
        return;
    }
    this->actor.draw = NULL;
    this->actor.home.rot.x = 0;
    this->actionFunc = func_80AFCBD4;
}

void func_80AFCBD4(EnGakufu *this, GlobalContext *globalCtx) {
    if ((s32) this->actor.home.rot.x > 0) {
        func_80AFC960();
        this->actionFunc = func_80AFCB94;
    }
}

void func_80AFCC14(EnGakufu *this, GlobalContext *globalCtx) {

}

s32 func_80AFCC24(EnGakufu *arg0, GlobalContext *arg1) {
    if (arg0->actor.xzDistToPlayer < 600.0f) {
        return 1;
    }
    return 0;
}

void func_80AFCC58(EnGakufu *arg0, GlobalContext *arg1) {
    f32 temp_f6;
    s32 temp_s0;
    u16 temp_t6;
    f32 phi_f6;
    s32 phi_s0;

    play_sound(0x4802U);
    temp_t6 = gSaveContext.time;
    temp_f6 = (f32) temp_t6;
    phi_f6 = temp_f6;
    if ((s32) temp_t6 < 0) {
        phi_f6 = temp_f6 + 4294967296.0f;
    }
    phi_s0 = 0;
    do {
        Item_DropCollectible(arg1, &D_80AFD1D0, (u32) *(&D_80AFD1F4 + *((s32) (phi_f6 * 0.00036621094f) + &D_80AFD1DC) + phi_s0));
        temp_s0 = phi_s0 + 1;
        phi_s0 = temp_s0;
    } while (temp_s0 != 3);
    arg0->actionFunc = func_80AFCC14;
}

void func_80AFCD44(EnGakufu *this, GlobalContext *globalCtx) {
    EnGakufu *temp_a2;
    s8 temp_a0;
    s8 temp_a3;

    temp_a3 = this->actor.cutscene;
    if (temp_a3 == -1) {
        func_80AFCC58(this, globalCtx, this, temp_a3);
        return;
    }
    this = this;
    temp_a2 = this;
    if (ActorCutscene_GetCanPlayNext((s16) temp_a3) != 0) {
        temp_a0 = temp_a2->actor.cutscene;
        this = temp_a2;
        ActorCutscene_StartAndSetUnkLinkFields((s16) temp_a0, (Actor *) temp_a2);
        func_80AFCC58(this, globalCtx);
        return;
    }
    ActorCutscene_SetIntentToPlay((s16) temp_a2->actor.cutscene);
}

void func_80AFCDC8(EnGakufu *this, GlobalContext *globalCtx) {
    u8 temp_t9;
    u8 temp_v0;

    temp_v0 = gSaveContext.eventInf[3];
    if ((temp_v0 & 2) != 0) {
        temp_t9 = temp_v0 & 0xFD;
        if ((temp_v0 & 4) != 0) {
            gSaveContext.eventInf[3] = temp_t9;
            gSaveContext.eventInf[3] = temp_t9 & 0xFB;
            this->actionFunc = func_80AFCD44;
            func_80AFCD44(this, globalCtx);
            this->actor.draw = NULL;
            return;
        }
        if (func_80AFCC24() == 0) {
            gSaveContext.eventInf[3] &= 0xFD;
            return;
        }
        /* Duplicate return node #7. Try simplifying control flow for better match */
        return;
    }
    if (func_80AFCC24() != 0) {
        gSaveContext.eventInf[3] |= 2;
    }
}

void EnGakufu_Update(Actor *thisx, GlobalContext *globalCtx) {
    EnGakufu *this = (EnGakufu *) thisx;
    this->actionFunc(this, globalCtx);
}

void EnGakufu_Draw(Actor *thisx, GlobalContext *globalCtx) {
    EnGakufu *sp8C;
    ? *sp40;
    Gfx *temp_v0;
    Gfx *temp_v0_10;
    Gfx *temp_v0_11;
    Gfx *temp_v0_12;
    Gfx *temp_v0_13;
    Gfx *temp_v0_14;
    Gfx *temp_v0_15;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    Gfx *temp_v0_7;
    Gfx *temp_v0_8;
    Gfx *temp_v0_9;
    GraphicsContext *temp_s0;
    s32 temp_s3;
    s32 phi_s4;
    EnGakufu *phi_s2;
    s32 phi_s3;
    EnGakufu *this = (EnGakufu *) thisx;

    sp8C = this;
    temp_s0 = globalCtx->state.gfxCtx;
    temp_v0 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0[1];
    temp_v0->words.w1 = 0;
    temp_v0->words.w0 = 0xE7000000;
    temp_v0_2 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_2[1];
    temp_v0_2->words.w0 = 0xDB060008;
    temp_v0_2->words.w1 = (u32) globalCtx->interfaceCtx.parameterSegment;
    phi_s3 = 0;
    if (this->unk_148 != 0xFF) {
        sp40 = &D_80AFD270;
        phi_s4 = (0 * 0x1E) - 0x69;
        phi_s2 = this;
loop_2:
        SysMatrix_StatePush();
        SysMatrix_InsertTranslation((f32) phi_s4, *(&D_80AFD204 + (phi_s2->unk_148 * 4)) * 7.5f, 1.0f, 1);
        Matrix_Scale(0.6f, 0.6f, 0.6f, 1);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xDA380003;
        temp_v0_3->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = 0;
        temp_v0_4->words.w0 = 0xE3001001;
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xFD700000;
        temp_v0_5->words.w1 = *(&D_80AFD218 + (phi_s2->unk_148 * 4));
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w1 = 0x7090240;
        temp_v0_6->words.w0 = 0xF5700000;
        temp_v0_7 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_7[1];
        temp_v0_7->words.w1 = 0;
        temp_v0_7->words.w0 = 0xE6000000;
        temp_v0_8 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_8[1];
        temp_v0_8->words.w1 = 0x707F400;
        temp_v0_8->words.w0 = 0xF3000000;
        temp_v0_9 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_9[1];
        temp_v0_9->words.w1 = 0;
        temp_v0_9->words.w0 = 0xE7000000;
        temp_v0_10 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_10[1];
        temp_v0_10->words.w1 = 0x90240;
        temp_v0_10->words.w0 = 0xF5680400;
        temp_v0_11 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_11[1];
        temp_v0_11->words.w0 = 0xF2000000;
        temp_v0_11->words.w1 = 0x3C03C;
        if (phi_s2->unk_148 == 0) {
            temp_v0_12 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_12[1];
            temp_v0_12->words.w1 = 0x5096FFC8;
            temp_v0_12->words.w0 = 0xFA000000;
        } else {
            temp_v0_13 = temp_s0->polyXlu.p;
            temp_s0->polyXlu.p = &temp_v0_13[1];
            temp_v0_13->words.w1 = 0xFFFF32C8;
            temp_v0_13->words.w0 = 0xFA000000;
        }
        temp_v0_14 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_14[1];
        temp_v0_14->words.w0 = 0xDE000000;
        temp_v0_14->words.w1 = (u32) sp40;
        SysMatrix_StatePop();
        temp_s3 = phi_s3 + 1;
        phi_s4 += 0x1E;
        phi_s2 += 1;
        phi_s3 = temp_s3;
        if ((temp_s3 < 8) && ((sp8C + temp_s3)->unk_148 != 0xFF)) {
            goto loop_2;
        }
    }
    temp_v0_15 = temp_s0->polyXlu.p;
    temp_s0->polyXlu.p = &temp_v0_15[1];
    temp_v0_15->words.w0 = 0xDB060008;
    temp_v0_15->words.w1 = (u32) globalCtx->sceneSegment;
}
