typedef struct EnEncount3 {
    /* 0x000 */ Actor actor;
    /* 0x144 */ void (*actionFunc)(EnEncount3 *, GlobalContext *);
    /* 0x148 */ u8 unk_148;                         /* inferred */
    /* 0x149 */ char pad_149[0x1];
    /* 0x14A */ s16 unk_14A;                        /* inferred */
    /* 0x14C */ char pad_14C[0x2];
    /* 0x14E */ s16 unk_14E;                        /* inferred */
    /* 0x150 */ char pad_150[0x4];                  /* maybe part of unk_14E[3]? */
    /* 0x154 */ s16 unk_154;                        /* inferred */
    /* 0x156 */ char pad_156[0x2];
    /* 0x158 */ s16 unk_158;                        /* inferred */
    /* 0x15A */ s16 unk_15A;                        /* inferred */
    /* 0x15C */ s16 unk_15C;                        /* inferred */
    /* 0x15E */ s16 unk_15E;                        /* inferred */
    /* 0x160 */ f32 unk_160;                        /* inferred */
    /* 0x164 */ f32 unk_164;                        /* inferred */
    /* 0x168 */ f32 unk_168;                        /* inferred */
    /* 0x16C */ f32 unk_16C;                        /* inferred */
    /* 0x170 */ f32 unk_170;                        /* inferred */
    /* 0x174 */ f32 unk_174;                        /* inferred */
    /* 0x178 */ f32 unk_178;                        /* inferred */
    /* 0x17C */ Actor *unk_17C;                     /* inferred */
    /* 0x180 */ char pad_180[0x4C];                 /* maybe part of unk_17C[20]? */
} EnEncount3;                                       /* size = 0x1CC */

struct _mips2c_stack_EnEncount3_Destroy {};         /* size 0x0 */

struct _mips2c_stack_EnEncount3_Draw {
    /* 0x00 */ char pad_0[0x44];
    /* 0x44 */ Gfx *sp44;                           /* inferred */
    /* 0x48 */ char pad_48[0x8];                    /* maybe part of sp44[3]? */
    /* 0x50 */ Gfx *sp50;                           /* inferred */
    /* 0x54 */ char pad_54[0x14];
};                                                  /* size = 0x68 */

struct _mips2c_stack_EnEncount3_Init {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_EnEncount3_Update {
    /* 0x00 */ char pad_0[0x2C];
    /* 0x2C */ void (*sp2C)(EnEncount3 *, GlobalContext *); /* inferred */
    /* 0x30 */ char pad_30[0x6];                    /* maybe part of sp2C[2]? */
    /* 0x36 */ s16 sp36;                            /* inferred */
    /* 0x38 */ f32 sp38;                            /* inferred */
    /* 0x3C */ f32 sp3C;                            /* inferred */
    /* 0x40 */ char pad_40[0x10];
};                                                  /* size = 0x50 */

struct _mips2c_stack_func_809AD058 {};              /* size 0x0 */

struct _mips2c_stack_func_809AD084 {
    /* 0x00 */ char pad_0[0x40];
};                                                  /* size = 0x40 */

struct _mips2c_stack_func_809AD194 {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

struct _mips2c_stack_func_809AD1EC {
    /* 0x00 */ char pad_0[0x18];
};                                                  /* size = 0x18 */

void func_809AD058(EnEncount3 *arg0);               /* static */
extern ? D_060009A0;
static s32 D_809AD810 = 0;

void EnEncount3_Init(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount3 *temp_a0;
    f32 temp_f0;
    s16 temp_v0;
    s32 temp_t5;
    EnEncount3 *this = (EnEncount3 *) thisx;

    temp_v0 = this->actor.params;
    this->unk_14A = ((s32) temp_v0 >> 0xC) & 0xF;
    this->unk_158 = ((s32) temp_v0 >> 7) & 0x1F;
    temp_f0 = (f32) this->actor.world.rot.z * 10.0f;
    this->unk_15C = temp_v0 & 0x7F;
    this->unk_15A = (s16) this->actor.cutscene;
    this->unk_16C = temp_f0;
    if (temp_f0 < 10.0f) {
        this->unk_16C = 10.0f;
    } else if (this->unk_16C > 1000.0f) {
        this->unk_16C = 1000.0f;
    }
    if (this->unk_15C == 0x7F) {
        this->unk_15C = -1;
    }
    if ((s32) this->unk_15C >= 0) {
        this = this;
        if (Flags_GetSwitch(globalCtx, (s32) this->unk_15C) != 0) {
            temp_a0 = this;
            this = this;
            Actor_MarkForDeath((Actor *) temp_a0);
        }
    }
    temp_t5 = this->actor.flags | 0x8000000;
    this->actor.flags = temp_t5;
    this->actor.flags = temp_t5 & ~1;
    func_809AD058(this);
}

void EnEncount3_Destroy(Actor *thisx, GlobalContext *globalCtx) {
    EnEncount3 *this = (EnEncount3 *) thisx;

}

void func_809AD058(EnEncount3 *arg0) {
    arg0->unk_154 = 0x113;
    arg0->unk_150 = 1;
    arg0->unk_15E = 0x1E;
    arg0->actionFunc = func_809AD084;
}

void func_809AD084(EnEncount3 *this, GlobalContext *globalCtx) {
    Actor *temp_v0_2;
    s16 temp_a2;
    s16 temp_v0;

    temp_a2 = this->unk_15C;
    if (((s32) temp_a2 >= 0) && (Flags_GetSwitch(globalCtx, (s32) temp_a2) != 0)) {
        Actor_MarkForDeath((Actor *) this);
        return;
    }
    if (!(this->unk_16C < this->actor.xzDistToPlayer) && (Player_GetMask(globalCtx) == 6) && (D_809AD810 == 0)) {
        temp_v0 = this->unk_15E;
        if ((s32) temp_v0 > 0) {
            this->unk_15E = temp_v0 - 1;
            return;
        }
        temp_v0_2 = Actor_SpawnAsChild(&globalCtx->actorCtx, (Actor *) this, globalCtx, this->unk_154, this->actor.world.pos.x, this->actor.world.pos.y, this->actor.world.pos.z, (s16) 0, (s16) 0, (s16) 0, (s32) this->unk_158);
        this->unk_17C = temp_v0_2;
        if (temp_v0_2 != 0) {
            this->unk_14E += 1;
            D_809AD810 = 1;
            this->actionFunc = func_809AD194;
        }
        /* Duplicate return node #10. Try simplifying control flow for better match */
    }
}

void func_809AD194(EnEncount3 *this, GlobalContext *globalCtx) {
    s16 temp_a1;

    if (this->unk_14E == 0) {
        temp_a1 = this->unk_15C;
        this->unk_178 = 0.0f;
        if ((s32) temp_a1 >= 0) {
            this = this;
            Actor_SetSwitchFlag(globalCtx, (s32) temp_a1);
        }
        this->actionFunc = func_809AD1EC;
    }
}

void func_809AD1EC(EnEncount3 *this, GlobalContext *globalCtx) {
    if (this->unk_174 < 0.002f) {
        D_809AD810 = 0;
        Actor_MarkForDeath((Actor *) this);
    }
}

void EnEncount3_Update(Actor *thisx, GlobalContext *globalCtx) {
    f32 sp3C;
    f32 sp38;
    s16 sp36;
    void (*sp2C)(EnEncount3 *, GlobalContext *);
    Actor *temp_a0;
    Actor *temp_s1;
    f32 temp_f0;
    f32 temp_f0_2;
    f32 temp_f10;
    f32 temp_f2;
    f32 temp_f4;
    f32 temp_f6;
    s16 temp_v1;
    u8 temp_t0;
    u8 temp_t5;
    u8 temp_t7;
    s16 phi_v1;
    f32 phi_f6;
    f32 phi_f10;
    f32 phi_f4;
    EnEncount3 *this = (EnEncount3 *) thisx;

    temp_s1 = globalCtx->actorCtx.actorList[2].first;
    this->actionFunc(this, globalCtx);
    sp2C = func_809AD194;
    if (func_809AD194 == this->actionFunc) {
        temp_f0 = this->unk_16C;
        if ((temp_f0 * 0.52f) < this->actor.xzDistToPlayer) {
            this->unk_178 = (temp_f0 * 0.03125f * 0.001f) + 0.1f;
        } else {
            this->unk_178 = 0.06f;
        }
        temp_f2 = this->actor.xzDistToPlayer;
        if (((f32) gGameInfo->data[2400] + (this->unk_16C + 50.0f)) < temp_f2) {
            if (sp2C == this->actionFunc) {
                this->unk_148 = 0;
                this->unk_178 = 0.0f;
                D_809AD810 = 0;
                temp_a0 = this->unk_17C;
                if ((temp_a0 != 0) && (temp_a0->update != 0) && ((s32) temp_a0->colChkInfo.health > 0)) {
                    Actor_MarkForDeath(temp_a0);
                    this->unk_17C = NULL;
                }
                func_809AD058(this);
            }
        } else {
            phi_v1 = 0;
            if (this->unk_16C < temp_f2) {
                do {
                    sp36 = phi_v1;
                    temp_v1 = phi_v1 + 1;
                    (temp_s1 + phi_v1)->unk_D45 = Rand_S16Offset(0, 0xC8);
                    phi_v1 = temp_v1;
                } while ((s32) temp_v1 < 0x12);
                temp_s1->unk_D44 = 1;
                sp3C = this->actor.world.pos.x - temp_s1->world.pos.x;
                sp38 = this->actor.world.pos.z - temp_s1->world.pos.z;
                if (func_801690CC(globalCtx) == 0) {
                    func_800B8D50(globalCtx, (Actor *) this, 10.0f, Math_FAtan2F(sp38, sp3C), 0.0f, 1U);
                }
            }
        }
    }
    this->unk_168 = this->unk_16C / 7666.0f;
    if (sp2C != this->actionFunc) {
        Math_ApproachZeroF(&this->unk_170, 0.3f, 10.0f);
        Math_ApproachZeroF(&this->unk_160, 0.3f, 5.0f);
        if (this->unk_160 < 1.0f) {
            globalCtx->unk_18880 = 0;
        }
    } else if (this->unk_148 != 0) {
        Math_ApproachF(&this->unk_170, 255.0f, 0.4f, 10.0f);
        Math_ApproachF(&this->unk_160, 60.0f, 0.3f, 5.0f);
    }
    Math_ApproachF(&this->unk_174, this->unk_178, 0.3f, 0.03f);
    temp_f0_2 = this->unk_160 / 60.0f;
    this->unk_164 = temp_f0_2;
    if (temp_f0_2 != 0.0f) {
        globalCtx->envCtx.unk_8C.fogNear = (s16) (s32) ((f32) (0x3C0 - (s16) globalCtx->envCtx.unk_C4.fogNear) * this->unk_164);
        temp_t5 = globalCtx->envCtx.unk_C4.fogColor[0];
        temp_f6 = (f32) temp_t5;
        phi_f6 = temp_f6;
        if ((s32) temp_t5 < 0) {
            phi_f6 = temp_f6 + 4294967296.0f;
        }
        temp_t7 = globalCtx->envCtx.unk_C4.fogColor[1];
        temp_f10 = (f32) temp_t7;
        globalCtx->envCtx.unk_8C.fogColor[0] = (s16) (s32) ((40.0f - phi_f6) * this->unk_164);
        phi_f10 = temp_f10;
        if ((s32) temp_t7 < 0) {
            phi_f10 = temp_f10 + 4294967296.0f;
        }
        temp_t0 = globalCtx->envCtx.unk_C4.fogColor[2];
        temp_f4 = (f32) temp_t0;
        globalCtx->envCtx.unk_8C.fogColor[1] = (s16) (s32) ((10.0f - phi_f10) * this->unk_164);
        phi_f4 = temp_f4;
        if ((s32) temp_t0 < 0) {
            phi_f4 = temp_f4 + 4294967296.0f;
        }
        globalCtx->envCtx.unk_8C.fogColor[2] = (s16) (s32) ((0.0f - phi_f4) * this->unk_164);
    }
}

void EnEncount3_Draw(Actor *thisx, GlobalContext *globalCtx) {
    Gfx *sp50;
    Gfx *sp44;
    Gfx *temp_v0;
    Gfx *temp_v0_2;
    Gfx *temp_v0_3;
    Gfx *temp_v0_4;
    Gfx *temp_v0_5;
    Gfx *temp_v0_6;
    GraphicsContext *temp_a0;
    GraphicsContext *temp_s0;
    f32 temp_f12;
    u32 temp_v1;
    EnEncount3 *this = (EnEncount3 *) thisx;

    if (this->unk_170 > 0.0f) {
        temp_a0 = globalCtx->state.gfxCtx;
        temp_s0 = temp_a0;
        func_8012C2DC(temp_a0);
        SysMatrix_StatePush();
        temp_v0 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0[1];
        temp_v0->words.w1 = 0;
        temp_v0->words.w0 = 0xE7000000;
        temp_v0_2 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_2[1];
        temp_v0_2->words.w0 = 0xDB060020;
        temp_v1 = globalCtx->gameplayFrames;
        sp50 = temp_v0_2;
        sp50->words.w1 = Gfx_TwoTexScroll(globalCtx->state.gfxCtx, 0, temp_v1, 0U, 0x20, 0x40, 1, (s32) temp_v1 * -2, (s32) temp_v1 * -8, 0x20, 0x20);
        temp_v0_3 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_3[1];
        temp_v0_3->words.w0 = 0xFA000000;
        temp_v0_3->words.w1 = ((s32) this->unk_170 & 0xFF) | 0xFFC80000;
        temp_v0_4 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_4[1];
        temp_v0_4->words.w1 = 0xFF000080;
        temp_v0_4->words.w0 = 0xFB000000;
        SysMatrix_InsertTranslation(this->actor.world.pos.x, this->actor.world.pos.y - 40.0f, this->actor.world.pos.z, 0);
        temp_f12 = this->unk_168;
        Matrix_Scale(temp_f12, this->unk_174, temp_f12, 1);
        temp_v0_5 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_5[1];
        temp_v0_5->words.w0 = 0xDA380003;
        sp44 = temp_v0_5;
        sp44->words.w1 = Matrix_NewMtx(globalCtx->state.gfxCtx);
        temp_v0_6 = temp_s0->polyXlu.p;
        temp_s0->polyXlu.p = &temp_v0_6[1];
        temp_v0_6->words.w1 = (u32) &D_060009A0;
        temp_v0_6->words.w0 = 0xDE000000;
        SysMatrix_StatePop();
    }
}
